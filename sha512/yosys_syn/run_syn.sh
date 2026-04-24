#!/bin/bash
#
# Run synthesis and STA for sha512
#
# Usage:
#   ./run_syn.sh              # Run synthesis + STA (default)
#   ./run_syn.sh syn          # Run synthesis only
#   ./run_syn.sh sta          # Run STA only (requires prior synthesis)
#   ./run_syn.sh clean        # Clean generated files
#   ./run_syn.sh all          # Run synthesis + STA
#   ./run_syn.sh dry-run      # Show what would be executed without running
#
# Environment variables (optional):
#   VT=RVT|LVT|SLVT       # Voltage threshold (default: RVT)
#   CORNER=TT|FF|SS       # PVT corner (default: TT)
#   ABC_AREA=0|1          # 0=speed, 1=area optimization (default: 1)
#   DRY_RUN=1             # Enable dry-run mode
#

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR"

# Default values
VT=${VT:-RVT}
CORNER=${CORNER:-TT}
ABC_AREA=${ABC_AREA:-1}
DESIGN_NAME=${DESIGN_NAME:-sha512}
DRY_RUN=${DRY_RUN:-0}

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

print_header() {
    echo ""
    echo -e "${BLUE}================================================================================${NC}"
    echo -e "${BLUE}  $1${NC}"
    echo -e "${BLUE}================================================================================${NC}"
    echo ""
}

print_success() {
    echo -e "${GREEN}[SUCCESS]${NC} $1"
}

print_error() {
    echo -e "${RED}[ERROR]${NC} $1"
}

print_info() {
    echo -e "${YELLOW}[INFO]${NC} $1"
}

print_dry() {
    echo -e "${BLUE}[DRY-RUN]${NC} Would execute: $1"
}

# Execute or print command based on DRY_RUN mode
run_cmd() {
    if [[ $DRY_RUN -eq 1 ]]; then
        print_dry "$1"
    else
        eval "$1"
    fi
}

run_synthesis() {
    print_header "Running Synthesis: ${DESIGN_NAME}"
    
    print_info "Configuration:"
    echo "  Design:     ${DESIGN_NAME}"
    echo "  VT:         ${VT}"
    echo "  Corner:     ${CORNER}"
    echo "  ABC Mode:   $([ ${ABC_AREA} -eq 1 ] && echo 'Area' || echo 'Speed')"
    echo ""
    
    if [[ $DRY_RUN -eq 1 ]]; then
        print_dry "mkdir -p syn_results"
        print_dry "source env.sh && yosys -c syn.tcl 2>&1 | tee syn_results/synthesis.log"
        echo ""
        echo "Would create output files:"
        echo "  Netlist:     syn_results/${DESIGN_NAME}_syn.v"
        echo "  Report:      syn_results/synth_final_report.txt"
        echo "  Log:         syn_results/synthesis.log"
        return 0
    fi
    
    # Create syn_results directory if needed
    mkdir -p syn_results
    
    # Run Yosys synthesis (source env.sh first to set environment)
    print_info "Starting Yosys synthesis..."
    if bash -c "source env.sh && yosys -c syn.tcl" 2>&1 | tee syn_results/synthesis.log; then
        print_success "Synthesis completed successfully"
        echo ""
        echo "Output files:"
        echo "  Netlist:     syn_results/${DESIGN_NAME}_syn.v"
        echo "  Report:      syn_results/synth_final_report.txt"
        echo "  Log:         syn_results/synthesis.log"
    else
        print_error "Synthesis failed. Check syn_results/synthesis.log for details."
        exit 1
    fi
}

run_sta() {
    print_header "Running Static Timing Analysis: ${DESIGN_NAME}"
    
    # Check if synthesis output exists (skip in dry-run mode)
    if [[ $DRY_RUN -eq 0 && ! -f "syn_results/${DESIGN_NAME}_syn.v" ]]; then
        print_error "Synthesized netlist not found: syn_results/${DESIGN_NAME}_syn.v"
        print_info "Run synthesis first: ./run_syn.sh syn"
        exit 1
    fi
    
    print_info "Configuration:"
    echo "  Design:     ${DESIGN_NAME}"
    echo "  VT:         ${VT}"
    echo "  Corner:     ${CORNER}"
    echo "  ASAP7_LIB_DIR: ${ASAP7_LIB_DIR:-/workspace/techlib/asap7sc7p5t_28/LIB/NLDM}"
    echo ""
    
    if [[ $DRY_RUN -eq 1 ]]; then
        print_dry "export DESIGN_NAME=${DESIGN_NAME} VT=${VT} CORNER=${CORNER}"
        print_dry "export ASAP7_LIB_DIR=${ASAP7_LIB_DIR:-/workspace/techlib/asap7sc7p5t_28/LIB/NLDM}"
        print_dry "mkdir -p reports"
        print_dry "sta run_sta.tcl 2>&1 | tee reports/sta.log"
        echo ""
        echo "Would create output files:"
        echo "  Timing Summary:  reports/sta_timing_report.txt"
        echo "  Timing Paths:    reports/sta_timing_paths.txt"
        echo "  Power Report:    reports/sta_power_report.txt"
        echo "  Log:             reports/sta.log"
        return 0
    fi
    
    # Export environment for STA
    export DESIGN_NAME VT CORNER
    export ASAP7_LIB_DIR=${ASAP7_LIB_DIR:-/workspace/techlib/asap7sc7p5t_28/LIB/NLDM}
    
    # Create reports directory if needed
    mkdir -p reports
    
    # Run OpenSTA
    print_info "Starting OpenSTA timing analysis..."
    if sta run_sta.tcl 2>&1 | tee reports/sta.log; then
        print_success "STA completed successfully"
        echo ""
        echo "Output files:"
        echo "  Timing Summary:  reports/sta_timing_report.txt"
        echo "  Timing Paths:    reports/sta_timing_paths.txt"
        echo "  Power Report:    reports/sta_power_report.txt"
        echo "  Log:             reports/sta.log"
    else
        print_error "STA failed. Check reports/sta.log for details."
        exit 1
    fi
}

run_clean() {
    print_header "Cleaning generated files"
    
    print_info "Removing synthesis results..."
    rm -rf syn_results/*.v syn_results/*.json syn_results/*.log syn_results/*.txt 2>/dev/null || true
    
    print_info "Removing STA reports..."
    rm -rf reports/*.txt reports/*.log 2>/dev/null || true
    
    print_success "Clean completed"
}

run_dry_run() {
    print_header "Dry-Run Mode: ${DESIGN_NAME}"
    print_info "Showing commands that would be executed (no actual execution)"
    echo ""
    DRY_RUN=1
    run_synthesis
    echo ""
    run_sta
    print_header "Dry-run completed"
}

show_usage() {
    echo "Usage: $0 [command]"
    echo ""
    echo "Commands:"
    echo "  syn      Run synthesis only"
    echo "  sta      Run STA only (requires prior synthesis)"
    echo "  all      Run synthesis + STA (default)"
    echo "  dry-run  Show what would be executed without running"
    echo "  clean    Clean generated files"
    echo "  help     Show this help message"
    echo ""
    echo "Environment variables:"
    echo "  VT=RVT|LVT|SLVT       Voltage threshold (default: RVT)"
    echo "  CORNER=TT|FF|SS       PVT corner (default: TT)"
    echo "  ABC_AREA=0|1          0=speed, 1=area optimization (default: 1)"
    echo "  DRY_RUN=1             Enable dry-run mode for any command"
    echo ""
    echo "Examples:"
    echo "  ./run_syn.sh                    # Run synthesis + STA with defaults"
    echo "  ./run_syn.sh syn                # Run synthesis only"
    echo "  ./run_syn.sh sta                # Run STA only"
    echo "  ./run_syn.sh dry-run            # Show what would run without executing"
    echo "  VT=LVT ./run_syn.sh             # Run with LVT cells"
    echo "  ABC_AREA=0 ./run_syn.sh syn     # Run speed-optimized synthesis"
    echo "  DRY_RUN=1 ./run_syn.sh syn      # Dry-run synthesis only"
}

# Main
case "${1:-all}" in
    syn|synthesis)
        run_synthesis
        ;;
    sta|timing)
        run_sta
        ;;
    all|"")
        run_synthesis
        run_sta
        if [[ $DRY_RUN -eq 0 ]]; then
            print_header "All steps completed successfully"
        fi
        ;;
    dry-run|dryrun|dry)
        run_dry_run
        ;;
    clean)
        run_clean
        ;;
    help|-h|--help)
        show_usage
        ;;
    *)
        print_error "Unknown command: $1"
        show_usage
        exit 1
        ;;
esac
