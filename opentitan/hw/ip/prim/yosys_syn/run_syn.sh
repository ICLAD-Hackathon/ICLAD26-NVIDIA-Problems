#!/bin/bash
#
# Synthesize and run STA for all primary prim modules
#
# Usage:
#   ./run_syn.sh              # Run synthesis + STA for all modules
#   ./run_syn.sh syn          # Run synthesis only (skip STA)
#   ./run_syn.sh sta          # Run STA only (assumes synthesis already done)
#   ./run_syn.sh clean        # Clean generated files only
#   ./run_syn.sh dry          # Show what would be executed without running
#
# Primary synthesis targets (modules with pre_dv tests).
# CDC primitives prim_sync_reqack / prim_flop_2sync are intentionally omitted (not run as tops).
#   - prim_crc32
#   - prim_ascon_duplex
#   - prim_trivium

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"

# Primary modules to synthesize
MODULES=(
    "prim_crc32"
    "prim_ascon_duplex"
    "prim_trivium"
)

# Parse arguments
RUN_SYN=1
RUN_STA=1
CLEAN_ONLY=0
DRY_RUN=0

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

print_dry() {
    echo -e "${BLUE}[DRY-RUN]${NC} Would execute: $1"
}

while [[ $# -gt 0 ]]; do
    case $1 in
        syn|syn-only|--syn-only)
            RUN_STA=0
            shift
            ;;
        sta|sta-only|--sta-only)
            RUN_SYN=0
            shift
            ;;
        clean|--clean)
            CLEAN_ONLY=1
            shift
            ;;
        dry|dry-run|--dry-run|--dry)
            DRY_RUN=1
            shift
            ;;
        -h|--help|help)
            echo "Usage: $0 [COMMAND]"
            echo ""
            echo "Commands:"
            echo "  (none)       Run synthesis + STA for all modules"
            echo "  syn          Run synthesis only (skip STA)"
            echo "  sta          Run STA only (assumes synthesis done)"
            echo "  clean        Clean generated files only"
            echo "  dry          Show what would be executed without running"
            echo "  help         Show this help message"
            echo ""
            echo "Modules: ${MODULES[*]}"
            exit 0
            ;;
        *)
            echo "Unknown command: $1"
            echo "Use '$0 help' for usage information"
            exit 1
            ;;
    esac
done

# Clean only mode
if [[ $CLEAN_ONLY == 1 ]]; then
    echo "=== Cleaning generated files ==="
    if [[ $DRY_RUN == 1 ]]; then
        print_dry "rm -rf $SCRIPT_DIR/generated"
        print_dry "rm -rf $SCRIPT_DIR/syn_results"
        print_dry "rm -rf $SCRIPT_DIR/reports"
    else
        rm -rf "$SCRIPT_DIR/generated"
        rm -rf "$SCRIPT_DIR/syn_results"
        rm -rf "$SCRIPT_DIR/reports"
        echo "  Cleaned: generated/, syn_results/, reports/"
    fi
    exit 0
fi

# Create output directories
if [[ $DRY_RUN == 1 ]]; then
    print_dry "mkdir -p $SCRIPT_DIR/syn_results"
    print_dry "mkdir -p $SCRIPT_DIR/reports"
else
    mkdir -p "$SCRIPT_DIR/syn_results"
    mkdir -p "$SCRIPT_DIR/reports"
fi

# Summary arrays
declare -a SYN_SUCCESS
declare -a SYN_FAILED
declare -a STA_SUCCESS
declare -a STA_FAILED

echo "=============================================================="
echo "  OpenTitan Prim Library - Batch Synthesis & STA"
echo "=============================================================="
echo "Modules:     ${MODULES[*]}"
echo "Synthesis:   $([ $RUN_SYN == 1 ] && echo "Yes" || echo "No")"
echo "STA:         $([ $RUN_STA == 1 ] && echo "Yes" || echo "No")"
echo "Dry-Run:     $([ $DRY_RUN == 1 ] && echo "Yes" || echo "No")"
echo "Directory:   $SCRIPT_DIR"
echo "=============================================================="
echo ""

if [[ $DRY_RUN == 1 ]]; then
    echo -e "${YELLOW}[INFO]${NC} Dry-run mode: showing commands that would be executed"
    echo ""
fi

# Track timing
START_TIME=$(date +%s)

# Process each module
for MODULE in "${MODULES[@]}"; do
    echo "=============================================================="
    echo "  Processing: $MODULE"
    echo "=============================================================="
    
    # Export DESIGN_NAME for this module
    export DESIGN_NAME="$MODULE"
    
    # Run synthesis
    if [[ $RUN_SYN == 1 ]]; then
        echo ""
        echo "--- Synthesis: $MODULE ---"
        
        if [[ $DRY_RUN == 1 ]]; then
            print_dry "export DESIGN_NAME=$MODULE"
            print_dry "source $SCRIPT_DIR/env.sh"
            print_dry "yosys -c $SCRIPT_DIR/syn.tcl > $SCRIPT_DIR/syn_results/${MODULE}_yosys.log 2>&1"
            echo "  Would create: syn_results/${MODULE}_syn.v"
            SYN_SUCCESS+=("$MODULE")
        else
            # Source env.sh to set up environment
            source "$SCRIPT_DIR/env.sh"
            
            # Run Yosys synthesis
            if yosys -c "$SCRIPT_DIR/syn.tcl" > "$SCRIPT_DIR/syn_results/${MODULE}_yosys.log" 2>&1; then
                echo "  [OK] Synthesis completed"
                SYN_SUCCESS+=("$MODULE")
            else
                echo "  [FAILED] Synthesis failed - see syn_results/${MODULE}_yosys.log"
                SYN_FAILED+=("$MODULE")
                continue  # Skip STA if synthesis failed
            fi
        fi
    fi
    
    # Run STA
    if [[ $RUN_STA == 1 ]]; then
        echo ""
        echo "--- STA: $MODULE ---"
        
        if [[ $DRY_RUN == 1 ]]; then
            print_dry "export DESIGN_NAME=$MODULE"
            print_dry "sta $SCRIPT_DIR/run_sta.tcl > $SCRIPT_DIR/reports/${MODULE}_sta.log 2>&1"
            echo "  Would create: reports/${MODULE}_sta_timing_report.txt"
            echo "  Would create: reports/${MODULE}_sta_timing_paths.txt"
            echo "  Would create: reports/${MODULE}_sta_power_report.txt"
            STA_SUCCESS+=("$MODULE")
        else
            # Check if netlist exists
            NETLIST="$SCRIPT_DIR/syn_results/${MODULE}_syn.v"
            if [[ ! -f "$NETLIST" ]]; then
                echo "  [SKIP] Netlist not found: $NETLIST"
                STA_FAILED+=("$MODULE (no netlist)")
                continue
            fi
            
            # Run OpenSTA
            if sta "$SCRIPT_DIR/run_sta.tcl" > "$SCRIPT_DIR/reports/${MODULE}_sta.log" 2>&1; then
                echo "  [OK] STA completed"
                echo "  Reports: reports/${MODULE}_sta_timing_report.txt"
                echo "           reports/${MODULE}_sta_timing_paths.txt"
                echo "           reports/${MODULE}_sta_power_report.txt"
                STA_SUCCESS+=("$MODULE")
            else
                echo "  [FAILED] STA failed - see reports/${MODULE}_sta.log"
                STA_FAILED+=("$MODULE")
            fi
        fi
    fi
    
    echo ""
done

# Calculate elapsed time
END_TIME=$(date +%s)
ELAPSED=$((END_TIME - START_TIME))
ELAPSED_MIN=$((ELAPSED / 60))
ELAPSED_SEC=$((ELAPSED % 60))

# Print summary
echo "=============================================================="
if [[ $DRY_RUN == 1 ]]; then
    echo "  Dry-Run Summary"
else
    echo "  Summary"
fi
echo "=============================================================="
echo ""

if [[ $RUN_SYN == 1 ]]; then
    if [[ $DRY_RUN == 1 ]]; then
        echo "Synthesis (would run):"
        echo "  Modules: ${SYN_SUCCESS[*]:-none}"
    else
        echo "Synthesis Results:"
        echo "  Success: ${#SYN_SUCCESS[@]} - ${SYN_SUCCESS[*]:-none}"
        echo "  Failed:  ${#SYN_FAILED[@]} - ${SYN_FAILED[*]:-none}"
    fi
    echo ""
fi

if [[ $RUN_STA == 1 ]]; then
    if [[ $DRY_RUN == 1 ]]; then
        echo "STA (would run):"
        echo "  Modules: ${STA_SUCCESS[*]:-none}"
    else
        echo "STA Results:"
        echo "  Success: ${#STA_SUCCESS[@]} - ${STA_SUCCESS[*]:-none}"
        echo "  Failed:  ${#STA_FAILED[@]} - ${STA_FAILED[*]:-none}"
    fi
    echo ""
fi

echo "Output Files:"
echo "  Netlists:      syn_results/<module>_syn.v"
echo "  Synth Reports: syn_results/<module>_synth_*.txt"
echo "  STA Reports:   reports/<module>_sta_timing_report.txt"
echo "                 reports/<module>_sta_timing_paths.txt"
echo "                 reports/<module>_sta_power_report.txt"
echo "  Logs:          syn_results/<module>_yosys.log"
echo "                 reports/<module>_sta.log"
echo ""
if [[ $DRY_RUN == 1 ]]; then
    echo "Dry-run completed (no actual execution)"
else
    echo "Total Time: ${ELAPSED_MIN}m ${ELAPSED_SEC}s"
fi
echo "=============================================================="

# Exit with error if any failures (not in dry-run mode)
if [[ $DRY_RUN == 0 ]]; then
    if [[ ${#SYN_FAILED[@]} -gt 0 ]] || [[ ${#STA_FAILED[@]} -gt 0 ]]; then
        exit 1
    fi
fi

exit 0
