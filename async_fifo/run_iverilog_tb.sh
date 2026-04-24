#!/usr/bin/env bash
# Async FIFO Icarus Verilog testbench: compile and run TB with iverilog/vvp.
#
# Usage:
#   ./run_iverilog_tb.sh [--dry-run|-n] [steps...]
#   ./run_iverilog_tb.sh --help
#
# Options:
#   --dry-run, -n     Print commands only (no compile, no sim).
#   --help, -h        Show this help.
#
# Steps (default: env sim-svut):
#   env         Show resolved paths and toolchain hints.
#   sim-svut    Run SVUT async_fifo_unit_test.sv twice (same as sim/Makefile: defines AFULL/AEMPTY).
#   clean       Remove build outputs.
#   all         env, sim-svut (full SVUT regression).
#
# Environment:
#   IVERILOG      Icarus Verilog compiler (default: see below)
#   VVP           Icarus Verilog runtime (default: see below)
#   ICARUS_BIN_DIR  Prepended to PATH for SVUT (default: same dir as iverilog)

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Tool paths with defaults
IVERILOG="${IVERILOG:-/usr/local/bin/iverilog}"
VVP="${VVP:-/usr/local/bin/vvp}"
ICARUS_BIN_DIR="${ICARUS_BIN_DIR:-$(dirname "$IVERILOG")}"

RTL_FILES=(
	"$SCRIPT_DIR/rtl/async_fifo.v"
	"$SCRIPT_DIR/rtl/fifomem.v"
	"$SCRIPT_DIR/rtl/rptr_empty.v"
	"$SCRIPT_DIR/rtl/sync_r2w.v"
	"$SCRIPT_DIR/rtl/sync_w2r.v"
	"$SCRIPT_DIR/rtl/wptr_full.v"
)

TB_FILE="$SCRIPT_DIR/sim/tb_async_fifo_verilator.v"

DRY_RUN=0
STEPS=()

# Test result tracking
declare -A TEST_RESULTS
TOTAL_PASS=0
TOTAL_FAIL=0

usage() {
	cat <<'EOF'
Async FIFO Icarus Verilog testbench: ./run_iverilog_tb.sh [--dry-run|-n] [steps...]
  Steps: env | sim-svut | clean | all
  Default (no args): env sim-svut  (full SVUT unit tests)
  Env: IVERILOG, VVP, ICARUS_BIN_DIR; svutRun on PATH or bundled script/.svut/svut/svutRun.py
EOF
}

while [[ $# -gt 0 ]]; do
	case "$1" in
	--dry-run | -n) DRY_RUN=1 ;;
	-h | --help)
		usage
		exit 0
		;;
	--)
		shift
		STEPS+=("$@")
		break
		;;
	-*)
		echo "Unknown option: $1" >&2
		usage >&2
		exit 1
		;;
	*)
		STEPS+=("$1")
		;;
	esac
	shift
done

if [[ ${#STEPS[@]} -eq 0 ]]; then
	STEPS=(env sim-svut)
fi

run() {
	if [[ "$DRY_RUN" -eq 1 ]]; then
		printf '$ '
		printf '%s ' "$@"
		printf '\n'
	else
		"$@"
	fi
}

cd_repo() {
	if [[ "$DRY_RUN" -eq 1 ]]; then
		echo "cd $SCRIPT_DIR"
	else
		cd "$SCRIPT_DIR"
	fi
}

# Strip ANSI color codes (SVUT uses colored $display).
strip_ansi() {
	sed 's/\x1b\[[0-9;]*m//g'
}

# Parse minimal TB lines: PASS:/FAIL:
parse_results() {
	local output="$1"

	while IFS= read -r line; do
		line=$(printf '%s\n' "$line" | strip_ansi)
		if [[ "$line" =~ ^PASS:\ (.+)$ ]]; then
			TEST_RESULTS["minimal_tb::${BASH_REMATCH[1]}"]="PASS"
			TOTAL_PASS=$((TOTAL_PASS + 1))
		elif [[ "$line" =~ ^FAIL:\ (.+)$ ]]; then
			TEST_RESULTS["minimal_tb::${BASH_REMATCH[1]}"]="FAIL"
			TOTAL_FAIL=$((TOTAL_FAIL + 1))
		fi
	done <<< "$output"
}

# Parse SVUT SUCCESS:/FAILURE: lines (async_fifo_unit_test.sv + svut_h.sv).
# Each line looks like: SUCCESS: << Test 0: TEST_IDLE >> pass (@ ...
parse_svut_results() {
	local cfg_tag="$1"
	local output="$2"
	local line

	while IFS= read -r line; do
		line=$(printf '%s\n' "$line" | strip_ansi)
		if [[ "$line" =~ SUCCESS:.*Test\ [0-9]+:\ ([A-Za-z0-9_]+).*pass ]]; then
			TEST_RESULTS["SVUT[$cfg_tag]::${BASH_REMATCH[1]}"]="PASS"
			TOTAL_PASS=$((TOTAL_PASS + 1))
		elif [[ "$line" =~ FAILURE:.*Test\ [0-9]+:\ ([A-Za-z0-9_]+).*fail ]]; then
			TEST_RESULTS["SVUT[$cfg_tag]::${BASH_REMATCH[1]}"]="FAIL"
			TOTAL_FAIL=$((TOTAL_FAIL + 1))
		fi
	done <<< "$(printf '%s\n' "$output")"
}

# Resolve svutRun command (PATH or vendored script).
resolve_svut_run() {
	if command -v svutRun &>/dev/null; then
		printf '%s\n' svutRun
	elif [[ -f "${SCRIPT_DIR}/script/.svut/svut/svutRun.py" ]]; then
		printf '%s\n' "${SCRIPT_DIR}/script/.svut/svut/svutRun.py"
	else
		printf '%s\n' ""
	fi
}

# Print final summary table
print_summary() {
	echo ""
	echo "================================================================================"
	echo "                              TEST SUMMARY"
	echo "================================================================================"
	printf "%-70s | %-10s\n" "Test Case" "Result"
	echo "--------------------------------------------------------------------------------"

	for tc in $(echo "${!TEST_RESULTS[@]}" | tr ' ' '\n' | LC_ALL=C sort); do
		local result="${TEST_RESULTS[$tc]}"
		if [[ "$result" == "PASS" ]]; then
			printf "%-70s | \033[32m%-10s\033[0m\n" "$tc" "$result"
		else
			printf "%-70s | \033[31m%-10s\033[0m\n" "$tc" "$result"
		fi
	done

	echo "--------------------------------------------------------------------------------"
	printf "%-70s | " "TOTAL"
	if [[ $TOTAL_FAIL -eq 0 && $TOTAL_PASS -gt 0 ]]; then
		printf "\033[32m%d PASS, %d FAIL\033[0m\n" "$TOTAL_PASS" "$TOTAL_FAIL"
	elif [[ $TOTAL_PASS -eq 0 && $TOTAL_FAIL -eq 0 ]]; then
		printf "\033[33mNo test results parsed\033[0m\n"
	else
		printf "\033[31m%d PASS, %d FAIL\033[0m\n" "$TOTAL_PASS" "$TOTAL_FAIL"
	fi
	echo "================================================================================"

	if [[ $TOTAL_FAIL -gt 0 ]]; then
		return 1
	fi
	return 0
}

# Output directories and binaries
OBJ_DIR="${OBJ_DIR:-build}"
BIN_NAME="tb_async_fifo.vvp"

step_env() {
	cd_repo
	echo "[env] ASYNC_FIFO_ROOT=$SCRIPT_DIR"
	echo "[env] IVERILOG=$IVERILOG"
	if [[ -x "$IVERILOG" ]] || command -v "$IVERILOG" &>/dev/null; then
		"$IVERILOG" -V 2>&1 | head -1 || true
	else
		echo "[env] (iverilog not found)"
	fi
	echo "[env] VVP=$VVP"
	if [[ -x "$VVP" ]] || command -v "$VVP" &>/dev/null; then
		"$VVP" -V 2>&1 | head -1 || true
	else
		echo "[env] (vvp not found)"
	fi
	echo "[env] TB_FILE=$TB_FILE"
	echo "[env] ICARUS_BIN_DIR=$ICARUS_BIN_DIR (PATH for sim-svut)"
	if [[ -n "$(resolve_svut_run)" ]]; then
		echo "[env] svutRun=$(resolve_svut_run)"
	else
		echo "[env] (svutRun not found — install SVUT or use async_fifo/script/.svut/svut/svutRun.py)"
	fi
	echo "[note] SVUT tests do not print a full bus trace; see sim/async_fifo_unit_test.vcd after sim-svut."
}

step_build() {
	cd_repo
	mkdir -p "$OBJ_DIR"
	echo "[build] tb_async_fifo_verilator -> $OBJ_DIR/$BIN_NAME"
	run "$IVERILOG" -g2005-sv -o "$OBJ_DIR/$BIN_NAME" \
		"${RTL_FILES[@]}" "$TB_FILE"
}

step_sim() {
	cd_repo
	if [[ "$DRY_RUN" -eq 0 && ! -f "$SCRIPT_DIR/$OBJ_DIR/$BIN_NAME" ]]; then
		echo "[sim] Binary missing; building..."
		step_build
	fi
	echo "[sim] Running $OBJ_DIR/$BIN_NAME"
	if [[ "$DRY_RUN" -eq 1 ]]; then
		run "$VVP" "$OBJ_DIR/$BIN_NAME"
	else
		local log_file="$OBJ_DIR/sim.log"
		"$VVP" "$OBJ_DIR/$BIN_NAME" 2>&1 | tee "$log_file" || true
		parse_results "$(cat "$log_file")"
	fi
}

step_sim_svut() {
	cd_repo
	local svut
	svut=$(resolve_svut_run)
	if [[ -z "$svut" ]]; then
		echo "[sim-svut] ERROR: svutRun not found. Put SVUT on PATH or ensure script/.svut/svut/svutRun.py exists." >&2
		return 1
	fi
	mkdir -p "$OBJ_DIR"
	local cfg def_idx=0
	local svut_cmd
	if [[ "$svut" == *.py ]]; then
		svut_cmd=(python3 "$svut")
	else
		svut_cmd=("$svut")
	fi

	for cfg in 'AFULL=1;AEMPTY=1' 'AFULL=3;AEMPTY=2'; do
		def_idx=$((def_idx + 1))
		echo "[sim-svut] Run $def_idx/2: svutRun -f files.f -define \"$cfg\" -sim icarus"
		if [[ "$DRY_RUN" -eq 1 ]]; then
			echo "cd $SCRIPT_DIR/sim"
			printf '$ PATH=%s:\$PATH ' "$ICARUS_BIN_DIR"
			printf '%q ' "${svut_cmd[@]}" -f files.f -define "$cfg" -sim icarus
			echo
			continue
		fi
		local log_file="$OBJ_DIR/svut_run${def_idx}.log"
		(
			cd "$SCRIPT_DIR/sim"
			export PATH="$ICARUS_BIN_DIR:$PATH"
			"${svut_cmd[@]}" -f files.f -define "$cfg" -sim icarus
		) 2>&1 | tee "$log_file" || true
		# Short tag for table columns
		local tag
		if [[ "$def_idx" -eq 1 ]]; then
			tag="AFULL=1,AEMPTY=1"
		else
			tag="AFULL=3,AEMPTY=2"
		fi
		parse_svut_results "$tag" "$(cat "$log_file")"
	done
}

step_clean() {
	cd_repo
	echo "[clean] rm -rf $OBJ_DIR"
	if [[ "$DRY_RUN" -eq 1 ]]; then
		printf '$ rm -rf %s\n' "$OBJ_DIR"
	else
		rm -rf "$OBJ_DIR"
	fi
}

RAN_SIM=0
STEP_NUM=0
for s in "${STEPS[@]}"; do
	if [[ "$STEP_NUM" -gt 0 ]]; then
		echo
	fi
	STEP_NUM=$((STEP_NUM + 1))
	case "$s" in
	env) step_env ;;
	sim-svut)
		step_sim_svut
		RAN_SIM=1
		;;
	clean) step_clean ;;
	all)
		step_env
		echo
		step_sim_svut
		RAN_SIM=1
		;;
	*)
		echo "Unknown step: $s (use: env sim-svut clean all)" >&2
		exit 1
		;;
	esac
done

# Print summary if we ran any simulations
if [[ "$DRY_RUN" -eq 0 && "$RAN_SIM" -eq 1 ]]; then
	print_summary
	exit $?
fi

if [[ "$DRY_RUN" -eq 0 ]]; then
	echo
	echo "Done."
fi
