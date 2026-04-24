#!/usr/bin/env bash
# Run every Verilator trace test under verif/tests/trace_tests/<PROJECT>/.
# Usage:
#   ./run_all_trace_tests.sh              # default PROJECT=nv_small
#   PROJECT=nv_large ./run_all_trace_tests.sh
#   ./run_all_trace_tests.sh --list-only
#   ./run_all_trace_tests.sh --dry-run   # show commands; do not build or run
#   NVDLA_MAX_TICKS=50000000 ./run_all_trace_tests.sh   # optional per-test timeout (see nvdla.cpp)
#   TEST_TIMEOUT_SEC=7200 ./run_all_trace_tests.sh      # per-test wall time (default: 3600)
#   TEST_PREFIXES=              # empty => all trace dirs; default: dc_ img_ only
#   EXCLUDE_TESTS=              # space-separated test names to skip; default: SDP EW tests
#
# Prerequisite: built simulator (e.g. ./tools/bin/tmake -build verilator from repo root).

set -uo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
NVDLA_ROOT="$(cd "${SCRIPT_DIR}/../.." && pwd)"
PROJECT="${PROJECT:-nv_small}"
OUTDIR="${OUTDIR:-outdir}"
TEST_TIMEOUT_SEC="${TEST_TIMEOUT_SEC:-3600}"
# Space-separated name prefixes; only matching trace dirs are run (default: dc_ and img_).
# Set TEST_PREFIXES= (empty) to run every trace test.
TEST_PREFIXES="${TEST_PREFIXES-"dc_ img_"}"

# Tests to exclude (space-separated). These are commented out in regression testplans
# because they require features disabled in certain configs (e.g. SDP_EW on nv_small).
EXCLUDE_TESTS="${EXCLUDE_TESTS:-"sdp_3x3x32_ew_lo_lin_int8 sdp_3x3x33_ew_int8_reg_0 sdp_3x3x33_ew_le_exp_int8 sdp_3x3x33_ew_le_lin_int8"}"
TRACE_ROOT="${NVDLA_ROOT}/verif/tests/trace_tests/${PROJECT}"
LIST_ONLY=0
DRY_RUN=0

while [[ $# -gt 0 ]]; do
	case "$1" in
		--list-only|-l) LIST_ONLY=1; shift ;;
		--dry-run|-n) DRY_RUN=1; shift ;;
		-h|--help)
			echo "Usage: $0 [--list-only] [--dry-run]"
			echo "  PROJECT   trace project (default: nv_small)"
			echo "  OUTDIR    build output dir (default: outdir)"
			echo "  NVDLA_MAX_TICKS  optional tick limit for nvdla.cpp"
			echo "  TEST_TIMEOUT_SEC  max wall seconds per test (default: 3600)"
			echo "  TEST_PREFIXES     space-separated name prefixes (default: dc_ img_; empty => all)"
			echo "  EXCLUDE_TESTS     space-separated test names to skip (default: SDP EW tests)"
			echo "  --dry-run print make commands and counts; no build or simulation"
			exit 0
			;;
		*) echo "Unknown option: $1" >&2; exit 2 ;;
	esac
done

if [[ ! -d "$TRACE_ROOT" ]]; then
	echo "ERROR: trace directory not found: $TRACE_ROOT" >&2
	exit 1
fi

shopt -s nullglob
TESTS=()
for d in "$TRACE_ROOT"/*/; do
	[[ -d "$d" ]] && TESTS+=("$(basename "$d")")
done
# Do not assign IFS=$'\n' ... here: it can persist and break word-splitting on spaces later (e.g. TEST_PREFIXES).
mapfile -t TESTS < <(printf '%s\n' "${TESTS[@]}" | sort)

if [[ ${#TESTS[@]} -eq 0 ]]; then
	echo "ERROR: no test directories under $TRACE_ROOT" >&2
	exit 1
fi

# Restrict to names starting with one of TEST_PREFIXES (space-separated), unless TEST_PREFIXES is empty.
if [[ -n "${TEST_PREFIXES// }" ]]; then
	FILTERED=()
	for t in "${TESTS[@]}"; do
		for p in ${TEST_PREFIXES}; do
			[[ -z "$p" ]] && continue
			case "$t" in
				"${p}"*) FILTERED+=("$t"); break ;;
			esac
		done
	done
	TESTS=("${FILTERED[@]}")
fi

if [[ ${#TESTS[@]} -eq 0 ]]; then
	echo "ERROR: no tests after TEST_PREFIXES filter (TEST_PREFIXES=${TEST_PREFIXES:-<empty>})" >&2
	echo "  Try TEST_PREFIXES= to include all trace dirs." >&2
	exit 1
fi

# Remove tests in EXCLUDE_TESTS list.
if [[ -n "${EXCLUDE_TESTS// }" ]]; then
	FILTERED=()
	for t in "${TESTS[@]}"; do
		exclude=0
		for ex in ${EXCLUDE_TESTS}; do
			[[ "$t" == "$ex" ]] && { exclude=1; break; }
		done
		[[ "$exclude" -eq 0 ]] && FILTERED+=("$t")
	done
	TESTS=("${FILTERED[@]}")
fi

if [[ "$LIST_ONLY" -eq 1 ]]; then
	printf '%s\n' "${TESTS[@]}"
	exit 0
fi

echo "PROJECT=$PROJECT  TRACE_ROOT=$TRACE_ROOT  (${#TESTS[@]} tests)"
if [[ -n "${TEST_PREFIXES// }" ]]; then
	echo "TEST_PREFIXES=${TEST_PREFIXES} (name must start with one of these)"
else
	echo "TEST_PREFIXES=<empty> (all trace names included)"
fi
if [[ -n "${EXCLUDE_TESTS// }" ]]; then
	echo "EXCLUDE_TESTS: $(echo ${EXCLUDE_TESTS} | wc -w | tr -d ' ') test(s) excluded"
fi
if [[ "$DRY_RUN" -eq 1 ]]; then
	echo "MODE=dry-run (no build, no simulation)"
else
	echo "TEST_TIMEOUT_SEC=${TEST_TIMEOUT_SEC} (per test; exceeded => failed)"
fi
echo "---"

if [[ "$DRY_RUN" -eq 0 ]]; then
	VNV="${NVDLA_ROOT}/${OUTDIR}/${PROJECT}/verilator/VNV_nvdla"
	if [[ ! -x "$VNV" ]]; then
		echo "ERROR: Verilator binary missing or not executable: $VNV" >&2
		echo "Build with:  (cd $NVDLA_ROOT && ./tools/bin/tmake -build verilator)" >&2
		exit 1
	fi
fi

passed=0
failed=0
timed_out=0
failed_list=()
would_run=0
skipped=0

# Rows for final table: name | status | detail
declare -a TBL_NAME TBL_STATUS TBL_DETAIL

run_make_with_timeout() {
	local t="$1"
	local rc
	if command -v timeout >/dev/null 2>&1; then
		timeout "${TEST_TIMEOUT_SEC}" bash -c \
			'cd "$1" && exec make run "TEST=$2" "PROJECT=$3" "OUTDIR=$4"' \
			_ "${NVDLA_ROOT}/verif/verilator" "${t}" "${PROJECT}" "${OUTDIR}"
		rc=$?
		case "$rc" in
			0) return 0 ;;
			124)
				echo "[FAIL] $t  (exceeded ${TEST_TIMEOUT_SEC}s wall time)" >&2
				return 124
				;;
			*)
				echo "[FAIL] $t  (make/simulator exit $rc)" >&2
				return "$rc"
				;;
		esac
	else
		echo "WARNING: 'timeout' not found; running without per-test wall limit" >&2
		(cd "${NVDLA_ROOT}/verif/verilator" && make run "TEST=${t}" "PROJECT=${PROJECT}" "OUTDIR=${OUTDIR}")
		rc=$?
		return "$rc"
	fi
}

for t in "${TESTS[@]}"; do
	cfg="${TRACE_ROOT}/${t}/${t}.cfg"
	if [[ ! -f "$cfg" ]]; then
		echo "[SKIP] $t  (no ${t}.cfg)"
		TBL_NAME+=("$t")
		TBL_STATUS+=("SKIP")
		TBL_DETAIL+=("(no ${t}.cfg)")
		((skipped++)) || true
		continue
	fi
	if [[ "$DRY_RUN" -eq 1 ]]; then
		echo "[WOULD RUN] $t"
		echo "  (cd ${NVDLA_ROOT}/verif/verilator && make run TEST=${t} PROJECT=${PROJECT} OUTDIR=${OUTDIR})"
		((would_run++)) || true
		echo ""
		continue
	fi
	echo "========== TEST: $t =========="
	run_make_with_timeout "$t"
	rc=$?
	TBL_NAME+=("$t")
	if [[ "$rc" -eq 0 ]]; then
		echo "[PASS] $t"
		TBL_STATUS+=("PASS")
		TBL_DETAIL+=("")
		((passed++)) || true
	elif [[ "$rc" -eq 124 ]]; then
		TBL_STATUS+=("FAIL")
		TBL_DETAIL+=("timeout >${TEST_TIMEOUT_SEC}s")
		((failed++)) || true
		((timed_out++)) || true
		failed_list+=("$t")
	else
		TBL_STATUS+=("FAIL")
		TBL_DETAIL+=("exit ${rc}")
		((failed++)) || true
		failed_list+=("$t")
	fi
	echo ""
done

echo "============================"
if [[ "$DRY_RUN" -eq 1 ]]; then
	echo "Dry run: ${would_run} test(s) would run, ${skipped} skipped (PROJECT=${PROJECT})"
	exit 0
fi

# --- Results table ---
max_len=4
for n in "${TBL_NAME[@]}"; do
	(( ${#n} > max_len )) && max_len=${#n}
done
(( max_len < 12 )) && max_len=12
(( max_len > 72 )) && max_len=72

bar_width=$(( max_len + 18 ))
bar=$(printf '%*s' "$bar_width" '' | tr ' ' '-')

echo ""
echo "$bar"
printf "%-${max_len}s  %-8s  %s\n" "TEST" "RESULT" "DETAIL"
echo "$bar"
for i in "${!TBL_NAME[@]}"; do
	printf "%-${max_len}s  %-8s  %s\n" "${TBL_NAME[$i]}" "${TBL_STATUS[$i]}" "${TBL_DETAIL[$i]}"
done
echo "$bar"

echo ""
echo "Done: ${passed} passed, ${failed} failed"
if [[ "$timed_out" -gt 0 ]]; then
	echo "      (${timed_out} failed due to >${TEST_TIMEOUT_SEC}s wall time)"
fi
echo "      PROJECT=${PROJECT}  skipped=${skipped}"

if [[ ${#failed_list[@]} -gt 0 ]]; then
	exit 1
fi
exit 0
