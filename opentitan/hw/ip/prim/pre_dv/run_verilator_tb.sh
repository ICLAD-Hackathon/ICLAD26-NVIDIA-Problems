#!/usr/bin/env bash
# OpenTitan prim — Verilator testbench flow via FuseSoC.
#
# This script builds and runs the pre_dv Verilator testbenches for prim primitives.
# Available testbenches:
#   - prim_trivium_tb:       Trivium/Bivium stream cipher
#   - prim_sync_reqack_tb:   REQ/ACK synchronizer
#   - prim_ascon_round_tb:   Ascon permutation round
#   - prim_ascon_duplex_tb:  Ascon duplex construction
#   - prim_crc32_sim:        CRC32 calculation block
#
# Prerequisites:
#   - FuseSoC (e.g. pip install fusesoc) on PATH as `fusesoc`, or set FUSESOC.
#   - Verilator (default path below); directory is prepended to PATH for the run.
#   - C++ compiler with C++17 support
#
# Usage:
#   ./run_verilator_tb.sh [--dry-run|-n] [--testbench=<tb>] [steps...]
#   ./run_verilator_tb.sh --help
#
# Options:
#   --dry-run, -n         Print commands only (no FuseSoC / no rm).
#   --testbench=<tb>      Select testbench (see list below), or 'all'
#   --list                List all available testbenches
#   --help, -h            Show this help.
#
# Steps (default: env build run):
#   env     Show configuration (REPO_TOP, VERILATOR, work root, FuseSoC).
#   build   FuseSoC: Build Verilator simulation model.
#   run     Execute the compiled simulation.
#   all     Build and run ALL Verilator testbenches.
#   lint    FuseSoC: Verilator lint-only on selected testbench.
#   clean   Remove WORK_ROOT.
#
# Environment:
#   VERILATOR   Verilator binary (default: /home/scratch.chiatungh_nvresearch/verilator/bin/verilator)
#   FUSESOC     FuseSoC launcher (default: fusesoc)
#   WORK_ROOT   FuseSoC --work-root (default: $SCRIPT_DIR/obj_fusesoc)

set -euo pipefail

DRY_RUN=0
STEPS=()
TESTBENCH="prim_trivium_tb"

# Map testbench name to FuseSoC core and executable name
declare -A TB_CORES=(
    ["prim_trivium_tb"]="lowrisc:dv_verilator:prim_trivium_tb"
    ["prim_sync_reqack_tb"]="lowrisc:dv_verilator:prim_sync_reqack_tb"
    ["prim_ascon_round_tb"]="lowrisc:dv_verilator:prim_ascon_round_tb"
    ["prim_ascon_duplex_tb"]="lowrisc:dv_verilator:prim_ascon_duplex_tb"
    ["prim_crc32_sim"]="lowrisc:prim:crc32_sim"
)

# Map testbench to executable name (Verilator prepends 'V')
declare -A TB_EXES=(
    ["prim_trivium_tb"]="Vprim_trivium_tb"
    ["prim_sync_reqack_tb"]="Vprim_sync_reqack_tb"
    ["prim_ascon_round_tb"]="Vprim_ascon_round_tb"
    ["prim_ascon_duplex_tb"]="Vprim_ascon_duplex_tb"
    ["prim_crc32_sim"]="Vprim_crc32_sim"
)

# List of all testbenches in order (fastest to slowest, roughly)
ALL_TESTBENCHES=("prim_trivium_tb" "prim_sync_reqack_tb" "prim_crc32_sim" "prim_ascon_round_tb" "prim_ascon_duplex_tb")

usage() {
    cat <<'EOF'
prim Verilator testbench helper: ./run_verilator_tb.sh [options] [steps...]

Options:
  --dry-run, -n           Print commands only
  --testbench=<tb>        Select testbench (default: prim_trivium_tb), or 'all'
  --list                  List all available testbenches

Steps: env | build | run | all | lint | clean
Default: env build run

Examples:
  ./run_verilator_tb.sh                              # Build and run prim_trivium_tb (default)
  ./run_verilator_tb.sh --testbench=prim_crc32_sim   # Build and run CRC32 testbench
  ./run_verilator_tb.sh all                          # Build and run ALL testbenches
  ./run_verilator_tb.sh --testbench=all              # Same as above
  ./run_verilator_tb.sh --list                       # List available testbenches

Testbenches:
  prim_trivium_tb         Trivium/Bivium stream cipher
  prim_sync_reqack_tb     REQ/ACK synchronizer
  prim_ascon_round_tb     Ascon permutation round
  prim_ascon_duplex_tb    Ascon duplex construction
  prim_crc32_sim          CRC32 calculation block

Environment: VERILATOR, FUSESOC, WORK_ROOT
EOF
}

list_testbenches() {
    echo "Available prim pre_dv Verilator testbenches:"
    echo ""
    printf "  %-25s %s\n" "Testbench" "FuseSoC Core"
    printf "  %-25s %s\n" "---------" "------------"
    for tb in "${ALL_TESTBENCHES[@]}"; do
        printf "  %-25s %s\n" "$tb" "${TB_CORES[$tb]}"
    done
    echo ""
    echo "Use --testbench=<name> to select, or --testbench=all to run all."
}

while [[ $# -gt 0 ]]; do
    case "$1" in
    --dry-run | -n) DRY_RUN=1 ;;
    -h | --help)
        usage
        exit 0
        ;;
    --list)
        list_testbenches
        exit 0
        ;;
    --testbench=*)
        TESTBENCH="${1#*=}"
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

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
# hw/ip/prim/pre_dv -> OpenTitan repository root
REPO_TOP="$(cd "$SCRIPT_DIR/../../../.." && pwd)"

VERILATOR="${VERILATOR:-/home/scratch.chiatungh_nvresearch/verilator/bin/verilator}"
FUSESOC="${FUSESOC:-fusesoc}"
WORK_ROOT="${WORK_ROOT:-$SCRIPT_DIR/obj_fusesoc}"

# Validate testbench selection (allow "all" as special case)
if [[ "$TESTBENCH" != "all" && -z "${TB_CORES[$TESTBENCH]:-}" ]]; then
    echo "ERROR: Unknown testbench: $TESTBENCH" >&2
    echo "Available testbenches:" >&2
    for tb in "${ALL_TESTBENCHES[@]}"; do
        echo "  - $tb" >&2
    done
    echo "  - all (run all testbenches)" >&2
    exit 1
fi

FUSESOC_CORE="${TB_CORES[$TESTBENCH]:-}"
SIM_EXE="${TB_EXES[$TESTBENCH]:-}"

# --- helpers ---

quote() {
    printf '%q' "$1"
}

run() {
    if [[ "$DRY_RUN" -eq 1 ]]; then
        printf '$ '
        printf '%q ' "$@"
        printf '\n'
    else
        "$@"
    fi
}

if [[ ${#STEPS[@]} -eq 0 ]]; then
    if [[ "$TESTBENCH" == "all" ]]; then
        STEPS=(all)
    else
        STEPS=(env build run)
    fi
fi

step_env() {
    echo "╔══════════════════════════════════════════════════════════════════╗"
    echo "║                  prim Verilator Testbench                        ║"
    echo "╚══════════════════════════════════════════════════════════════════╝"
    echo "[env] PRIM_DIR      = $(quote "$SCRIPT_DIR")"
    echo "[env] REPO_TOP      = $(quote "$REPO_TOP")"
    echo "[env] VERILATOR     = $(quote "$VERILATOR")"
    echo "[env] FUSESOC       = $(quote "$FUSESOC")"
    echo "[env] WORK_ROOT     = $(quote "$WORK_ROOT")"
    echo "[env] TESTBENCH     = $TESTBENCH"
    echo "[env] FUSESOC_CORE  = $FUSESOC_CORE"
    echo "[env] SIM_EXE       = $SIM_EXE"
    if [[ "$DRY_RUN" -eq 1 ]]; then
        echo "[env] PATH          = $(quote "$(dirname "$VERILATOR")"):\$PATH"
    else
        echo ""
        echo "[env] Checking tools..."
        if [[ -x "$VERILATOR" ]]; then
            run "$VERILATOR" --version
        else
            echo "[env] WARNING: Verilator not found at $VERILATOR" >&2
        fi
        if command -v "$FUSESOC" >/dev/null 2>&1; then
            run "$FUSESOC" --version
        else
            echo "[env] WARNING: $(quote "$FUSESOC") not found on PATH. Install with: pip install fusesoc" >&2
        fi
    fi
}

step_build() {
    echo ""
    echo "╔══════════════════════════════════════════════════════════════════╗"
    echo "║                    Building Verilator Model                      ║"
    echo "╚══════════════════════════════════════════════════════════════════╝"

    if [[ "$DRY_RUN" -eq 1 ]]; then
        echo "$ cd $(quote "$REPO_TOP")"
        echo "$ export PATH=$(quote "$(dirname "$VERILATOR")"):\$PATH"
    else
        export PATH="$(dirname "$VERILATOR"):$PATH"
        cd "$REPO_TOP"
    fi

    # Determine the target based on the testbench
    local target="default"
    if [[ "$TESTBENCH" == "prim_crc32_sim" ]]; then
        target="sim"
    fi

    cmd=(
        "$FUSESOC"
        --cores-root=.
        run
        --build
        --work-root="$WORK_ROOT"
        --target="$target"
        --tool=verilator
        "$FUSESOC_CORE"
    )

    echo "[build] FuseSoC Verilator build: $FUSESOC_CORE"
    echo "[build] Target: $target"
    echo "[build] Work root: $WORK_ROOT"
    echo ""
    run "${cmd[@]}"
}

step_run() {
    echo ""
    echo "╔══════════════════════════════════════════════════════════════════╗"
    echo "║                    Running Simulation                            ║"
    echo "╚══════════════════════════════════════════════════════════════════╝"

    # Find the simulation executable - FuseSoC may place it in various locations
    local sim_exe=""
    local search_paths=(
        "$WORK_ROOT/$SIM_EXE"
        "$WORK_ROOT/default-verilator/$SIM_EXE"
        "$WORK_ROOT/sim-verilator/$SIM_EXE"
    )

    for path in "${search_paths[@]}"; do
        if [[ -x "$path" ]]; then
            sim_exe="$path"
            break
        fi
    done

    if [[ "$DRY_RUN" -eq 1 ]]; then
        echo "$ cd $(quote "$WORK_ROOT")"
        echo "$ $(quote "$WORK_ROOT/$SIM_EXE")"
    else
        if [[ -z "$sim_exe" || ! -x "$sim_exe" ]]; then
            echo "[run] ERROR: Simulation executable not found in:" >&2
            for path in "${search_paths[@]}"; do
                echo "[run]   $path" >&2
            done
            echo "[run] Please run 'build' step first." >&2
            exit 1
        fi

        cd "$(dirname "$sim_exe")"
        echo "[run] Executable: $sim_exe"
        echo "[run] Starting simulation..."
        echo ""

        local ret=0
        "$sim_exe" || ret=$?

        echo ""
        if [[ $ret -eq 0 ]]; then
            echo "╔══════════════════════════════════════════════════════════════════╗"
            echo "║                    SIMULATION PASSED                             ║"
            echo "╚══════════════════════════════════════════════════════════════════╝"
        else
            echo "╔══════════════════════════════════════════════════════════════════╗"
            echo "║                    SIMULATION FAILED (exit code: $ret)           ║"
            echo "╚══════════════════════════════════════════════════════════════════╝"
        fi

        # Check for waveform file
        local wave_file
        wave_file=$(find "$WORK_ROOT" -name "*.fst" 2>/dev/null | head -1)
        if [[ -n "$wave_file" ]]; then
            echo "[run] Waveform file: $wave_file"
        fi

        return $ret
    fi
}

step_lint() {
    echo ""
    echo "╔══════════════════════════════════════════════════════════════════╗"
    echo "║                    Running Verilator Lint                        ║"
    echo "╚══════════════════════════════════════════════════════════════════╝"

    if [[ "$DRY_RUN" -eq 1 ]]; then
        echo "cd $(quote "$REPO_TOP")"
        echo "export PATH=$(quote "$(dirname "$VERILATOR")"):\$PATH"
    else
        export PATH="$(dirname "$VERILATOR"):$PATH"
        cd "$REPO_TOP"
    fi

    # prim_crc32_sim has a dedicated lint target
    local target="lint"
    if [[ "$TESTBENCH" != "prim_crc32_sim" ]]; then
        echo "[lint] Note: Using default target with lint-only mode for $TESTBENCH"
        target="default"
    fi

    cmd=(
        "$FUSESOC"
        --cores-root=.
        run
        --work-root="$WORK_ROOT"
        --target="$target"
        --tool=verilator
        "$FUSESOC_CORE"
    )

    echo "[lint] FuseSoC Verilator lint: $FUSESOC_CORE (work-root: $WORK_ROOT)"
    run "${cmd[@]}"
}

step_clean() {
    echo ""
    echo "[clean] Removing: $WORK_ROOT"
    if [[ "$DRY_RUN" -eq 1 ]]; then
        printf '$ rm -rf %q\n' "$WORK_ROOT"
    else
        rm -rf "$WORK_ROOT"
    fi
}

# Run all testbenches
step_all() {
    echo ""
    echo "╔══════════════════════════════════════════════════════════════════╗"
    echo "║              Running ALL prim Testbenches                        ║"
    echo "╚══════════════════════════════════════════════════════════════════╝"
    echo ""
    echo "Testbenches to run: ${ALL_TESTBENCHES[*]}"
    echo ""

    local passed=0
    local failed=0
    local failed_list=()
    local total=${#ALL_TESTBENCHES[@]}

    for tb in "${ALL_TESTBENCHES[@]}"; do
        echo ""
        echo "════════════════════════════════════════════════════════════════════"
        echo "  Running testbench: $tb"
        echo "════════════════════════════════════════════════════════════════════"

        # Set the testbench variables
        TESTBENCH="$tb"
        FUSESOC_CORE="${TB_CORES[$tb]}"
        SIM_EXE="${TB_EXES[$tb]}"

        # Build
        if ! step_build; then
            echo "[all] ERROR: Build failed for $tb"
            failed=$((failed + 1))
            failed_list+=("$tb (build)")
            continue
        fi

        # Run
        if step_run; then
            passed=$((passed + 1))
        else
            failed=$((failed + 1))
            failed_list+=("$tb")
        fi
    done

    # Print summary
    echo ""
    echo "╔══════════════════════════════════════════════════════════════════╗"
    echo "║                    ALL TESTBENCHES SUMMARY                       ║"
    echo "╚══════════════════════════════════════════════════════════════════╝"
    echo ""
    echo "  Total:  $total"
    echo "  Passed: $passed"
    echo "  Failed: $failed"
    echo ""

    if [[ $failed -eq 0 ]]; then
        echo "  ALL TESTBENCHES PASSED"
    else
        echo "  FAILED TESTBENCHES:"
        for tb in "${failed_list[@]}"; do
            echo "      - $tb"
        done
    fi
    echo ""

    return $failed
}

# Execute steps
STEP_NUM=0
FINAL_RET=0
for s in "${STEPS[@]}"; do
    if [[ "$STEP_NUM" -gt 0 ]]; then
        echo ""
    fi
    STEP_NUM=$((STEP_NUM + 1))
    case "$s" in
    env) step_env ;;
    build) step_build ;;
    run)
        step_run || FINAL_RET=$?
        ;;
    all)
        step_all || FINAL_RET=$?
        ;;
    lint) step_lint ;;
    clean) step_clean ;;
    *)
        echo "Unknown step: $s (use: env build run all lint clean)" >&2
        exit 1
        ;;
    esac
done

if [[ "$DRY_RUN" -eq 1 ]]; then
    echo ""
    echo "(dry-run: no commands executed)"
else
    echo ""
    echo "Done."
fi

exit $FINAL_RET
