#!/usr/bin/env bash
# SHA-512 Icarus Verilog testbench: compile and run TBs with iverilog/vvp.
#
# Usage:
#   ./run_iverilog_tb.sh [--dry-run|-n] [steps...]
#   ./run_iverilog_tb.sh --help
#
# Options:
#   --dry-run, -n     Print commands only (no compile, no sim).
#   --help, -h        Show this help.
#
# Steps (default: all):
#   env        Show resolved paths and toolchain hints.
#   build-top  Compile tb_sha512 with iverilog.
#   build-core Compile tb_sha512_core with iverilog.
#   sim-top    Run top TB (implies build-top if missing).
#   sim-core   Run core TB (implies build-core if missing).
#   clean      Remove build outputs.
#
# Environment:
#   IVERILOG    Icarus Verilog compiler (default: iverilog)
#   VVP         Icarus Verilog runtime (default: vvp)

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Tool paths with defaults
IVERILOG="${IVERILOG:-/usr/local/bin/iverilog}"
VVP="${VVP:-/usr/local/bin/vvp}"

RTL_FILES=(
	src/rtl/sha512.v
	src/rtl/sha512_core.v
	src/rtl/sha512_h_constants.v
	src/rtl/sha512_k_constants.v
	src/rtl/sha512_w_mem.v
)

DRY_RUN=0
STEPS=()

# Test result tracking
declare -A TEST_RESULTS
TOTAL_PASS=0
TOTAL_FAIL=0

usage() {
	cat <<'EOF'
SHA-512 Icarus Verilog testbench: ./run_iverilog_tb.sh [--dry-run|-n] [steps...]
  Steps: env | build-top | build-core | sim-top | sim-core | clean | all
  Default (no args): env build-top build-core sim-top sim-core
  Env: IVERILOG, VVP
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
	STEPS=(env build-top build-core sim-top sim-core)
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

# Parse simulation output and record test results
# Usage: parse_results <tb_name> <output>
parse_results() {
	local tb_name="$1"
	local output="$2"
	local tc_name=""
	local pass_count=0
	local fail_count=0

	while IFS= read -r line; do
		# tb_sha512 format: "TC0: OK." or "TC0: ERROR."
		if [[ "$line" =~ ^TC([0-9]+):\ (OK|ERROR)\. ]]; then
			tc_name="${tb_name}::TC${BASH_REMATCH[1]}"
			if [[ "${BASH_REMATCH[2]}" == "OK" ]]; then
				TEST_RESULTS["$tc_name"]="PASS"
				pass_count=$((pass_count + 1))
			else
				TEST_RESULTS["$tc_name"]="FAIL"
				fail_count=$((fail_count + 1))
			fi
		# tb_sha512 format: "TC0 first block: OK." or "TC0 final block: OK."
		elif [[ "$line" =~ ^TC([0-9]+)\ (first|final)\ block:\ (OK|ERROR)\. ]]; then
			tc_name="${tb_name}::TC${BASH_REMATCH[1]}_${BASH_REMATCH[2]}"
			if [[ "${BASH_REMATCH[3]}" == "OK" ]]; then
				TEST_RESULTS["$tc_name"]="PASS"
				pass_count=$((pass_count + 1))
			else
				TEST_RESULTS["$tc_name"]="FAIL"
				fail_count=$((fail_count + 1))
			fi
		# tb_sha512_core format: "*** TC 1 successful." or "*** TC 1 FAILED"
		elif [[ "$line" =~ ^\*\*\*\ TC\ ([0-9]+)\ (successful|FAILED) ]]; then
			tc_name="${tb_name}::TC${BASH_REMATCH[1]}"
			if [[ "${BASH_REMATCH[2]}" == "successful" ]]; then
				TEST_RESULTS["$tc_name"]="PASS"
				pass_count=$((pass_count + 1))
			else
				TEST_RESULTS["$tc_name"]="FAIL"
				fail_count=$((fail_count + 1))
			fi
		# tb_sha512_core format: "*** TC 5 first block successful" or "*** TC 5 second block successful"
		elif [[ "$line" =~ ^\*\*\*\ TC\ ([0-9]+)\ (first|second)\ block\ (successful|FAILED) ]]; then
			tc_name="${tb_name}::TC${BASH_REMATCH[1]}_${BASH_REMATCH[2]}"
			if [[ "${BASH_REMATCH[3]}" == "successful" ]]; then
				TEST_RESULTS["$tc_name"]="PASS"
				pass_count=$((pass_count + 1))
			else
				TEST_RESULTS["$tc_name"]="FAIL"
				fail_count=$((fail_count + 1))
			fi
		fi
	done <<< "$output"

	TOTAL_PASS=$((TOTAL_PASS + pass_count))
	TOTAL_FAIL=$((TOTAL_FAIL + fail_count))
}

# Print final summary table
print_summary() {
	echo ""
	echo "================================================================================"
	echo "                              TEST SUMMARY"
	echo "================================================================================"
	printf "%-40s | %-10s\n" "Test Case" "Result"
	echo "--------------------------------------------------------------------------------"

	# Sort and print results
	for tc in $(echo "${!TEST_RESULTS[@]}" | tr ' ' '\n' | sort); do
		local result="${TEST_RESULTS[$tc]}"
		if [[ "$result" == "PASS" ]]; then
			printf "%-40s | \033[32m%-10s\033[0m\n" "$tc" "$result"
		else
			printf "%-40s | \033[31m%-10s\033[0m\n" "$tc" "$result"
		fi
	done

	echo "--------------------------------------------------------------------------------"
	printf "%-40s | " "TOTAL"
	if [[ $TOTAL_FAIL -eq 0 ]]; then
		printf "\033[32m%d PASS, %d FAIL\033[0m\n" "$TOTAL_PASS" "$TOTAL_FAIL"
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
BIN_TOP="tb_sha512.vvp"
BIN_CORE="tb_sha512_core.vvp"

step_env() {
	cd_repo
	echo "[env] SHA512_ROOT=$SCRIPT_DIR"
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
}

step_build_top() {
	cd_repo
	mkdir -p "$OBJ_DIR"
	echo "[build-top] tb_sha512 -> $OBJ_DIR/$BIN_TOP"
	run "$IVERILOG" -g2001 -o "$OBJ_DIR/$BIN_TOP" \
		"${RTL_FILES[@]}" src/tb/tb_sha512.v
}

step_build_core() {
	cd_repo
	mkdir -p "$OBJ_DIR"
	echo "[build-core] tb_sha512_core -> $OBJ_DIR/$BIN_CORE"
	local core_rtl=(
		src/rtl/sha512_core.v
		src/rtl/sha512_h_constants.v
		src/rtl/sha512_k_constants.v
		src/rtl/sha512_w_mem.v
	)
	run "$IVERILOG" -g2001 -o "$OBJ_DIR/$BIN_CORE" \
		"${core_rtl[@]}" src/tb/tb_sha512_core.v
}

step_sim_top() {
	cd_repo
	if [[ "$DRY_RUN" -eq 0 && ! -f "$SCRIPT_DIR/$OBJ_DIR/$BIN_TOP" ]]; then
		echo "[sim-top] Binary missing; building..."
		step_build_top
	fi
	echo "[sim-top] Running $OBJ_DIR/$BIN_TOP"
	if [[ "$DRY_RUN" -eq 1 ]]; then
		run "$VVP" "$OBJ_DIR/$BIN_TOP"
	else
		local log_file="$OBJ_DIR/tb_sha512.log"
		"$VVP" "$OBJ_DIR/$BIN_TOP" 2>&1 | tee "$log_file" || true
		parse_results "tb_sha512" "$(cat "$log_file")"
	fi
}

step_sim_core() {
	cd_repo
	if [[ "$DRY_RUN" -eq 0 && ! -f "$SCRIPT_DIR/$OBJ_DIR/$BIN_CORE" ]]; then
		echo "[sim-core] Binary missing; building..."
		step_build_core
	fi
	echo "[sim-core] Running $OBJ_DIR/$BIN_CORE"
	if [[ "$DRY_RUN" -eq 1 ]]; then
		run "$VVP" "$OBJ_DIR/$BIN_CORE"
	else
		local log_file="$OBJ_DIR/tb_sha512_core.log"
		"$VVP" "$OBJ_DIR/$BIN_CORE" 2>&1 | tee "$log_file" || true
		parse_results "tb_sha512_core" "$(cat "$log_file")"
	fi
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
	build-top) step_build_top ;;
	build-core) step_build_core ;;
	sim-top)
		step_sim_top
		RAN_SIM=1
		;;
	sim-core)
		step_sim_core
		RAN_SIM=1
		;;
	clean) step_clean ;;
	all)
		step_env
		echo
		step_build_top
		echo
		step_build_core
		echo
		step_sim_top
		RAN_SIM=1
		echo
		step_sim_core
		RAN_SIM=1
		;;
	*)
		echo "Unknown step: $s (use: env build-top build-core sim-top sim-core clean all)" >&2
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
