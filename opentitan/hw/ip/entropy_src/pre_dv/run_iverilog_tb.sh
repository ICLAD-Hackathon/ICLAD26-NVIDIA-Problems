#!/usr/bin/env bash
# entropy_src pre_dv — iverilog flow
#
# WARNING: The pre_dv testbench (entropy_src_tb.sv) is OUTDATED and incompatible
# with the current entropy_src RTL. See README.md for details.
#
# This script is provided as a template. To actually run, you would need to either:
#   1. Update entropy_src_tb.sv to match current RTL interface, OR
#   2. Create a compatibility wrapper around entropy_src.sv
#
# Usage:
#   ./run_iverilog_tb.sh [--help|-h] [step...]
#
# Steps:
#   env      Show environment and tool versions
#   check    Check if testbench is compatible with RTL (will fail)
#   clean    Remove work directory
#
# If the testbench were compatible, additional steps would be:
#   build    Compile with iverilog
#   run      Execute simulation
#   all      build + run

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ENTROPY_SRC_DIR="$(cd "$SCRIPT_DIR/.." && pwd)"
REPO_TOP="$(cd "$ENTROPY_SRC_DIR/../../.." && pwd)"

# Tools
IVERILOG="${IVERILOG:-iverilog}"
VVP="${VVP:-vvp}"

# Work directory
WORK_DIR="${WORK_DIR:-$SCRIPT_DIR/obj_iverilog}"

# Testbench
TB_FILE="$SCRIPT_DIR/entropy_src_tb.sv"
TB_TOP="entropy_src_tb"

usage() {
    cat <<'EOF'
entropy_src pre_dv iverilog helper

WARNING: The testbench is OUTDATED and incompatible with current RTL.
         See pre_dv/README.md for details.

Usage: ./run_iverilog_tb.sh [step...]

Steps:
  env      Show environment / tool versions
  check    Check testbench compatibility (will show errors)
  clean    Remove work directory

EOF
}

# Parse arguments
STEPS=()
while [[ $# -gt 0 ]]; do
    case "$1" in
        -h|--help)
            usage
            exit 0
            ;;
        *)
            STEPS+=("$1")
            ;;
    esac
    shift
done

[[ ${#STEPS[@]} -eq 0 ]] && STEPS=(env check)

step_env() {
    echo "=== Environment ==="
    echo "SCRIPT_DIR:      $SCRIPT_DIR"
    echo "ENTROPY_SRC_DIR: $ENTROPY_SRC_DIR"
    echo "REPO_TOP:        $REPO_TOP"
    echo "WORK_DIR:        $WORK_DIR"
    echo "TB_FILE:         $TB_FILE"
    echo ""
    echo "=== Tool Versions ==="
    if command -v "$IVERILOG" &>/dev/null; then
        "$IVERILOG" -V 2>&1 | head -1
    else
        echo "WARNING: iverilog not found at: $IVERILOG"
    fi
    if command -v "$VVP" &>/dev/null; then
        "$VVP" -V 2>&1 | head -1
    else
        echo "WARNING: vvp not found at: $VVP"
    fi
}

step_check() {
    echo "=== Compatibility Check ==="
    echo ""
    echo "Checking testbench interface vs RTL interface..."
    echo ""
    
    # Check what the testbench expects
    echo "Testbench instantiates entropy_src with:"
    grep -A 10 "entropy_src #" "$TB_FILE" | head -15 || true
    echo ""
    
    # Check what the RTL provides
    echo "Current RTL module ports (first 30 lines):"
    grep -A 30 "^module entropy_src" "$ENTROPY_SRC_DIR/rtl/entropy_src.sv" | head -35 || true
    echo ""
    
    echo "=== INCOMPATIBILITY DETECTED ==="
    echo ""
    echo "The testbench expects these signals that don't exist in current RTL:"
    echo "  - es_entropy_valid_o    (now: intr_es_entropy_valid_o)"
    echo "  - es_entropy_fifo_err_o (removed)"
    echo ""
    echo "The current RTL requires these additional ports:"
    echo "  - otp_en_entropy_src_fw_read_i"
    echo "  - otp_en_entropy_src_fw_over_i"
    echo "  - entropy_src_hw_if_i/o"
    echo "  - entropy_src_rng_*"
    echo "  - entropy_src_xht_*"
    echo "  - alert_rx_i / alert_tx_o"
    echo "  - Multiple interrupt outputs"
    echo ""
    echo "See pre_dv/README.md for options."
    return 1
}

step_clean() {
    echo "=== Clean ==="
    if [[ -d "$WORK_DIR" ]]; then
        echo "Removing: $WORK_DIR"
        rm -rf "$WORK_DIR"
    else
        echo "Work directory does not exist: $WORK_DIR"
    fi
}

# This function would be used if the testbench were compatible
step_build() {
    echo "=== Build (NOT FUNCTIONAL - testbench incompatible) ==="
    echo ""
    echo "If the testbench were compatible, this would compile:"
    echo ""
    
    mkdir -p "$WORK_DIR"
    
    # Include paths
    local INCS=(
        "-I$REPO_TOP/hw/ip/prim/rtl"
        "-I$REPO_TOP/hw/ip/tlul/rtl"
        "-I$REPO_TOP/hw/ip/entropy_src/rtl"
    )
    
    # Would need to collect all RTL files...
    echo "iverilog -g2012 -s $TB_TOP ${INCS[*]} \\"
    echo "    <rtl_files> \\"
    echo "    $TB_FILE \\"
    echo "    -o $WORK_DIR/sim.vvp"
    echo ""
    echo "ERROR: Cannot build - testbench interface mismatch."
    return 1
}

step_run() {
    echo "=== Run (NOT FUNCTIONAL - testbench incompatible) ==="
    echo "ERROR: Cannot run - testbench was not built."
    return 1
}

# Execute steps
for step in "${STEPS[@]}"; do
    echo ""
    case "$step" in
        env)   step_env ;;
        check) step_check || true ;;
        clean) step_clean ;;
        build) step_build ;;
        run)   step_run ;;
        all)   step_build && step_run ;;
        *)
            echo "Unknown step: $step"
            usage
            exit 1
            ;;
    esac
done

echo ""
echo "Done."
