#!/usr/bin/env bash
# OpenTitan AES — Verilator testbench flow via FuseSoC.
#
# This script builds and runs the pre_dv Verilator testbenches for AES.
# Available testbenches:
#   - aes_tb:             Full AES block with TL-UL bus (tests all modes: ECB, CBC, CTR, GCM)
#   - aes_cipher_core_tb: AES cipher core only
#   - aes_sbox_tb:        AES S-box unit only
#   - aes_wrap_tb:        aes_wrap wrapper (FI-oriented)
#
# Not Verilator sims (not in this script):
#   - pre_dv/aes_sbox_lec: Yosys formal/LEC (aes_sbox_lec.py), not FuseSoC Verilator.
#
# Prerequisites:
#   - FuseSoC (e.g. pip install fusesoc) on PATH as `fusesoc`, or set FUSESOC.
#   - Verilator (default path below); directory is prepended to PATH for the run.
#   - OpenSSL/BoringSSL development libraries (for aes_tb DPI model)
#   - C++ compiler with C++11/C++17 support
#
# Usage:
#   ./run_verilator_tb.sh [--dry-run|-n] [--testbench=<tb>] [--test-vector=<file>] [steps...]
#   ./run_verilator_tb.sh --help
#
# Options:
#   --dry-run, -n         Print commands only (no FuseSoC / no rm).
#   --testbench=<tb>      Select testbench: aes_tb (default), aes_cipher_core_tb, aes_sbox_tb, aes_wrap_tb, all
#   --help, -h            Show this help.
#
# Note: Test vectors and trace options are defined in the .core files:
#   - pre_dv/aes_tb/aes_tb.core (default: gcm_k128_a20_d60.svh, trace enabled)
#   - To change, edit the REQUESTS_FILE define in the .core file
#
# Steps (default: env build run):
#   env     Show configuration (REPO_TOP, VERILATOR, work root, FuseSoC).
#   build   FuseSoC: Build Verilator simulation model.
#   run     Execute the compiled simulation.
#   all     Build and run ALL Verilator testbenches (see ALL_TESTBENCHES in script).
#   lint    FuseSoC: Verilator lint-only on lowrisc:ip:aes (strict -Wall).
#   clean   Remove WORK_ROOT.
#
# Environment:
#   VERILATOR   Verilator binary (default: /usr/local/bin/verilator)
#   FUSESOC     FuseSoC launcher (default: fusesoc)
#   WORK_ROOT   FuseSoC --work-root (default: $SCRIPT_DIR/obj_fusesoc)

set -euo pipefail

DRY_RUN=0
STEPS=()
TESTBENCH="aes_tb"

usage() {
    cat <<'EOF'
AES Verilator testbench helper: ./run_verilator_tb.sh [options] [steps...]

Options:
  --dry-run, -n           Print commands only
  --testbench=<tb>        aes_tb (default), aes_cipher_core_tb, aes_sbox_tb, aes_wrap_tb, all

Steps: env | build | run | all | lint | clean
Default: env build run

Examples:
  ./run_verilator_tb.sh                        # Build and run aes_tb (default)
  ./run_verilator_tb.sh --testbench=aes_sbox_tb  # Build and run S-box testbench
  ./run_verilator_tb.sh all                    # Build and run ALL testbenches
  ./run_verilator_tb.sh --testbench=all        # Same as above

Testbenches:
  aes_sbox_tb         AES S-box unit only (fastest)
  aes_cipher_core_tb  AES cipher core only
  aes_wrap_tb         aes_wrap wrapper (see aes_wrap.core)
  aes_tb              Full AES block with TL-UL bus (GCM, ECB, CBC, etc.)
  all                 Run all Verilator testbenches in sequence

Not included (different flow): pre_dv/aes_sbox_lec (Yosys LEC via aes_sbox_lec.py).
There is no ghim_tb under pre_dv; GHASH-related C++ benches live under pre_sca/alma/.

Test vectors (defined in pre_dv/aes_tb/aes_tb.core):
  gcm_k128_a20_d60.svh   GCM mode, 128-bit key, 20-byte AD, 60-byte data (default)
  gcm_k128_a20_d64.svh   GCM mode, 128-bit key, 20-byte AD, 64-byte data
  gcm_k128_a0_d16.svh    GCM mode, 128-bit key, no AD, 16-byte data
  gcm_k128_a0_d0.svh     GCM mode, 128-bit key, no AD, no data
  modes_d64.svh          Multiple modes (ECB, CBC, CFB, OFB, CTR), 64-byte data

To change test vector, edit REQUESTS_FILE in pre_dv/aes_tb/aes_tb.core

Environment: VERILATOR, FUSESOC, WORK_ROOT
EOF
}

while [[ $# -gt 0 ]]; do
    case "$1" in
    --dry-run | -n) DRY_RUN=1 ;;
    -h | --help)
        usage
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
# hw/ip/aes -> OpenTitan repository root
REPO_TOP="$(cd "$SCRIPT_DIR/../../.." && pwd)"

VERILATOR="${VERILATOR:-/usr/local/bin/verilator}"
FUSESOC="${FUSESOC:-fusesoc}"
WORK_ROOT="${WORK_ROOT:-$SCRIPT_DIR/obj_fusesoc}"

# Map testbench name to FuseSoC core
declare -A TB_CORES=(
    ["aes_tb"]="lowrisc:dv_verilator:aes_tb"
    ["aes_cipher_core_tb"]="lowrisc:dv_verilator:aes_cipher_core_tb"
    ["aes_sbox_tb"]="lowrisc:dv_verilator:aes_sbox_tb"
    ["aes_wrap_tb"]="lowrisc:dv_verilator:aes_wrap_tb"
)

# List of all testbenches in order (fastest to slowest)
ALL_TESTBENCHES=("aes_sbox_tb" "aes_cipher_core_tb" "aes_wrap_tb" "aes_tb")

# Validate testbench selection (allow "all" as special case)
if [[ "$TESTBENCH" != "all" && -z "${TB_CORES[$TESTBENCH]:-}" ]]; then
    echo "ERROR: Unknown testbench: $TESTBENCH" >&2
    echo "Available: aes_tb, aes_cipher_core_tb, aes_sbox_tb, aes_wrap_tb, all" >&2
    exit 1
fi

FUSESOC_CORE="${TB_CORES[$TESTBENCH]:-}"

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
    echo "║                    AES Verilator Testbench                       ║"
    echo "╚══════════════════════════════════════════════════════════════════╝"
    echo "[env] AES_DIR       = $(quote "$SCRIPT_DIR")"
    echo "[env] REPO_TOP      = $(quote "$REPO_TOP")"
    echo "[env] VERILATOR     = $(quote "$VERILATOR")"
    echo "[env] FUSESOC       = $(quote "$FUSESOC")"
    echo "[env] WORK_ROOT     = $(quote "$WORK_ROOT")"
    echo "[env] TESTBENCH     = $TESTBENCH"
    echo "[env] FUSESOC_CORE  = $FUSESOC_CORE"
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

    # Build command - verilator options are defined in the .core file
    # The aes_tb.core already includes:
    #   - Test vector: gcm_k128_a20_d60.svh (default)
    #   - Trace: --trace --trace-fst --trace-structs
    #   - Other options: -Wall -Wno-fatal
    cmd=(
        "$FUSESOC"
        --cores-root=.
        run
        --build
        --work-root="$WORK_ROOT"
        --target=default
        --tool=verilator
        "$FUSESOC_CORE"
    )

    echo "[build] FuseSoC Verilator build: $FUSESOC_CORE"
    if [[ "$TESTBENCH" == "aes_tb" ]]; then
        echo "[build] Test vector: gcm_k128_a20_d60.svh (defined in aes_tb.core)"
        echo "[build] Note: To change test vector, edit pre_dv/aes_tb/aes_tb.core"
    fi
    echo "[build] Work root: $WORK_ROOT"
    echo ""
    run "${cmd[@]}"
}

step_run() {
    echo ""
    echo "╔══════════════════════════════════════════════════════════════════╗"
    echo "║                    Running Simulation                            ║"
    echo "╚══════════════════════════════════════════════════════════════════╝"

    # Find the simulation executable - FuseSoC may place it directly in WORK_ROOT
    # or in a subdirectory like default-verilator
    local sim_exe=""
    if [[ -x "$WORK_ROOT/V${TESTBENCH}" ]]; then
        sim_exe="$WORK_ROOT/V${TESTBENCH}"
    elif [[ -x "$WORK_ROOT/default-verilator/V${TESTBENCH}" ]]; then
        sim_exe="$WORK_ROOT/default-verilator/V${TESTBENCH}"
    fi

    if [[ "$DRY_RUN" -eq 1 ]]; then
        echo "$ cd $(quote "$WORK_ROOT")"
        echo "$ $(quote "$WORK_ROOT/V${TESTBENCH}")"
    else
        if [[ -z "$sim_exe" || ! -x "$sim_exe" ]]; then
            echo "[run] ERROR: Simulation executable not found in:" >&2
            echo "[run]   $WORK_ROOT/V${TESTBENCH}" >&2
            echo "[run]   $WORK_ROOT/default-verilator/V${TESTBENCH}" >&2
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

        # Check for waveform file (trace is enabled by default in .core files)
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

    cmd=(
        "$FUSESOC"
        --cores-root=.
        run
        --work-root="$WORK_ROOT"
        --target=lint
        --tool=verilator
        "lowrisc:ip:aes:1.0"
    )

    echo "[lint] FuseSoC Verilator lint: lowrisc:ip:aes (work-root: $WORK_ROOT)"
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
    echo "║              Running ALL AES Testbenches                         ║"
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
        echo "  ✓ ALL TESTBENCHES PASSED"
    else
        echo "  ✗ FAILED TESTBENCHES:"
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
