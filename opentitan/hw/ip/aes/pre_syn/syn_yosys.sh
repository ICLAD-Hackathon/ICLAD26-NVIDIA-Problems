#!/bin/bash

# Copyright lowRISC contributors (OpenTitan project).
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0

# This script drives the experimental Yosys synthesis flow. More details can be found in README.md
#
# Usage:
#   ./syn_yosys.sh                    # Run full synthesis
#   ./syn_yosys.sh --dry-run          # Only print file list, no synthesis
#   ./syn_yosys.sh --list-only        # Same as --dry-run
#   ./syn_yosys.sh [synth_out_dir]    # Run synthesis with custom output dir

set -e
set -o pipefail

#-------------------------------------------------------------------------
# Parse command line arguments
#-------------------------------------------------------------------------
DRY_RUN=0
POSITIONAL_ARGS=()

while [[ $# -gt 0 ]]; do
    case $1 in
        --dry-run|--list-only|-n)
            DRY_RUN=1
            shift
            ;;
        --help|-h)
            echo "Usage: $0 [OPTIONS] [synth_out_dir]"
            echo ""
            echo "Options:"
            echo "  --dry-run, --list-only, -n   Only print file list, don't run synthesis"
            echo "  --help, -h                   Show this help message"
            echo ""
            echo "Arguments:"
            echo "  synth_out_dir                Custom output directory (optional)"
            exit 0
            ;;
        *)
            POSITIONAL_ARGS+=("$1")
            shift
            ;;
    esac
done

# Restore positional arguments
set -- "${POSITIONAL_ARGS[@]}"

error () {
    echo >&2 "$@"
    exit 1
}

teelog () {
    tee "$LR_SYNTH_OUT_DIR/log/$1.log"
}

if [ ! -f syn_setup.sh ]; then
    error "No syn_setup.sh file: see README.md for instructions"
fi

#-------------------------------------------------------------------------
# setup flow variables
#-------------------------------------------------------------------------
source syn_setup.sh "$@"

#-------------------------------------------------------------------------
# Set source directory
#-------------------------------------------------------------------------
export LR_SYNTH_SRC_DIR="../../$LR_SYNTH_IP_NAME"

# Get OpenTitan dependency sources.
OT_DEP_SOURCES=(
    "$LR_SYNTH_SRC_DIR"/../tlul/rtl/tlul_adapter_reg.sv
    "$LR_SYNTH_SRC_DIR"/../tlul/rtl/tlul_err.sv
    "$LR_SYNTH_SRC_DIR"/../tlul/rtl/tlul_cmd_intg_chk.sv
    "$LR_SYNTH_SRC_DIR"/../tlul/rtl/tlul_rsp_intg_gen.sv
    "$LR_SYNTH_SRC_DIR"/../tlul/rtl/tlul_data_integ_dec.sv
    "$LR_SYNTH_SRC_DIR"/../tlul/rtl/tlul_data_integ_enc.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_secded_inv_64_57_dec.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_secded_inv_64_57_enc.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_secded_inv_39_32_dec.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_secded_inv_39_32_enc.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_sparse_fsm_flop.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_subreg.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_subreg_ext.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_subreg_shadow.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_subreg_arb.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_alert_sender.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_diff_decode.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_lc_sync.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_sync_reqack_data.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_sync_reqack.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_trivium.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_packer_fifo.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_lfsr.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_cdc_rand_delay.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_reg_we_check.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_onehot_check.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_onehot_mux.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_blanker.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_sec_anchor_buf.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_sec_anchor_flop.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_gf_mult.sv
    "$LR_SYNTH_SRC_DIR"/../prim_generic/rtl/prim_flop_2sync.sv
    "$LR_SYNTH_SRC_DIR"/../prim_generic/rtl/prim_flop.sv
    "$LR_SYNTH_SRC_DIR"/../prim_generic/rtl/prim_flop_en.sv
    "$LR_SYNTH_SRC_DIR"/../prim_generic/rtl/prim_and2.sv
    "$LR_SYNTH_SRC_DIR"/../prim_generic/rtl/prim_buf.sv
    "$LR_SYNTH_SRC_DIR"/../prim_generic/rtl/prim_xor2.sv
    "$LR_SYNTH_SRC_DIR"/../prim_generic/rtl/prim_xnor2.sv
)

# Get OpenTitan dependency packages.
OT_DEP_PACKAGES=(
    "$LR_SYNTH_SRC_DIR"/../../top_earlgrey/rtl/*_pkg.sv
    "$LR_SYNTH_SRC_DIR"/../edn/rtl/*_pkg.sv
    "$LR_SYNTH_SRC_DIR"/../csrng/rtl/*_pkg.sv
    "$LR_SYNTH_SRC_DIR"/../entropy_src/rtl/*_pkg.sv
    "$LR_SYNTH_SRC_DIR"/../lc_ctrl/rtl/*_pkg.sv
    "$LR_SYNTH_SRC_DIR"/../tlul/rtl/*_pkg.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/*_pkg.sv
    "$LR_SYNTH_SRC_DIR"/../keymgr/rtl/*_pkg.sv
)

#-------------------------------------------------------------------------
# Print synthesis file list (always runs)
#-------------------------------------------------------------------------
print_file_list() {
    echo ""
    echo "=========================================================================="
    echo "Synthesis Source Files for OpenTitan AES"
    echo "=========================================================================="
    echo ""
    echo "Top Module: $LR_SYNTH_TOP_MODULE"
    echo "IP Name:    $LR_SYNTH_IP_NAME"
    echo ""
    
    # Count files (use : to avoid set -e issue with ((0)))
    local dep_count=0
    local core_count=0
    local pkg_count=0
    
    echo "--- OpenTitan Dependency Sources ---"
    for file in "${OT_DEP_SOURCES[@]}"; do
        module=$(basename -s .sv "$file")
        if ! echo "$module" | grep -q '_pkg$'; then
            if [ -f "$file" ]; then
                echo "  $file"
                dep_count=$((dep_count + 1))
            else
                echo "  [MISSING] $file"
            fi
        fi
    done
    echo "  ($dep_count files)"
    echo ""
    
    echo "--- Core AES Sources ---"
    for file in "$LR_SYNTH_SRC_DIR"/rtl/*.sv; do
        module=$(basename -s .sv "$file")
        if ! echo "$module" | grep -q '_pkg$'; then
            if [ -f "$file" ]; then
                echo "  $file"
                core_count=$((core_count + 1))
            fi
        fi
    done
    echo "  ($core_count files)"
    echo ""
    
    echo "--- Dependency Packages ---"
    for pkg in "${OT_DEP_PACKAGES[@]}"; do
        for f in $pkg; do
            if [ -f "$f" ]; then
                echo "  $f"
                pkg_count=$((pkg_count + 1))
            fi
        done
    done
    echo "  ($pkg_count files)"
    echo ""
    
    local total_count=$((dep_count + core_count + pkg_count))
    echo "=========================================================================="
    echo "Total: $total_count source files"
    echo "=========================================================================="
    echo ""
}

# Always print file list
print_file_list

# Exit early if dry-run mode
if [[ $DRY_RUN == 1 ]]; then
    echo "[DRY-RUN] Exiting without running synthesis."
    echo "To run full synthesis, omit --dry-run flag."
    exit 0
fi

#-------------------------------------------------------------------------
# prepare output folders (only in non-dry-run mode)
#-------------------------------------------------------------------------
mkdir -p "$LR_SYNTH_OUT_DIR/generated"
mkdir -p "$LR_SYNTH_OUT_DIR/log"
mkdir -p "$LR_SYNTH_OUT_DIR/reports/timing"

rm -f syn_out/latest
ln -s "${LR_SYNTH_OUT_DIR#syn_out/}" syn_out/latest

#-------------------------------------------------------------------------
# use sv2v to convert all SystemVerilog files to Verilog
#-------------------------------------------------------------------------

# Convert OpenTitan dependency sources.
for file in "${OT_DEP_SOURCES[@]}"; do
    module=$(basename -s .sv "$file")

    # Skip packages
    if echo "$module" | grep -q '_pkg$'; then
        continue
    fi

    sv2v \
        --define=SYNTHESIS --define=YOSYS \
        "${OT_DEP_PACKAGES[@]}" \
        -I"$LR_SYNTH_SRC_DIR"/../prim/rtl \
        "$file" \
        > "$LR_SYNTH_OUT_DIR/generated/${module}.v"
done

# Rename the prim_sparse_fsm_flop module. For some reason, sv2v decides to append a suffix.
sed -i 's/module prim_sparse_fsm_flop_.*/module prim_sparse_fsm_flop \(/g' \
    "$LR_SYNTH_OUT_DIR/generated/prim_sparse_fsm_flop.v"

# Get and convert core sources.
for file in "$LR_SYNTH_SRC_DIR"/rtl/*.sv; do
    module=$(basename -s .sv "$file")

    # Skip packages
    if echo "$module" | grep -q '_pkg$'; then
        continue
    fi

    sv2v \
        --define=SYNTHESIS \
        "${OT_DEP_PACKAGES[@]}" \
        "$LR_SYNTH_SRC_DIR"/rtl/*_pkg.sv \
        -I"$LR_SYNTH_SRC_DIR"/../prim/rtl \
        "$file" \
        > "$LR_SYNTH_OUT_DIR/generated/${module}.v"

    # Rename prim_sparse_fsm_flop instances. For some reason, sv2v decides to append a suffix.
    sed -i 's/prim_sparse_fsm_flop_.*/prim_sparse_fsm_flop \#(/g' \
        "$LR_SYNTH_OUT_DIR/generated/${module}.v"

    # Remove the StateEnumT parameter from prim_sparse_fsm_flop instances. Yosys doesn't seem to
    # support this.
    sed -i '/\.StateEnumT(logic \[.*/d' "$LR_SYNTH_OUT_DIR/generated/${module}.v"
    sed -i '/\.StateEnumT_aes_pkg.*(.*/d' "$LR_SYNTH_OUT_DIR/generated/${module}.v"
done

echo "=========================================================================="
echo "Generated Verilog files saved to: $LR_SYNTH_OUT_DIR/generated/"
echo "=========================================================================="
ls -1 "$LR_SYNTH_OUT_DIR/generated/"*.v 2>/dev/null | while read f; do echo "  $f"; done
echo ""

# Save file list to report
FILELIST_REPORT="$LR_SYNTH_OUT_DIR/reports/synthesis_filelist.txt"
{
    echo "# Synthesis File List for OpenTitan AES"
    echo "# Generated: $(date)"
    echo ""
    echo "# Top Module: $LR_SYNTH_TOP_MODULE"
    echo "# IP Name: $LR_SYNTH_IP_NAME"
    echo ""
    echo "## OpenTitan Dependency Sources"
    for file in "${OT_DEP_SOURCES[@]}"; do
        module=$(basename -s .sv "$file")
        if ! echo "$module" | grep -q '_pkg$'; then
            echo "$file"
        fi
    done
    echo ""
    echo "## Core AES Sources"
    for file in "$LR_SYNTH_SRC_DIR"/rtl/*.sv; do
        module=$(basename -s .sv "$file")
        if ! echo "$module" | grep -q '_pkg$'; then
            echo "$file"
        fi
    done
    echo ""
    echo "## Dependency Packages"
    for pkg in "${OT_DEP_PACKAGES[@]}"; do
        for f in $pkg; do
            if [ -f "$f" ]; then
                echo "$f"
            fi
        done
    done
    echo ""
    echo "## Generated Verilog Files"
    ls -1 "$LR_SYNTH_OUT_DIR/generated/"*.v 2>/dev/null
} > "$FILELIST_REPORT"
echo "File list saved to: $FILELIST_REPORT"
echo ""

#-------------------------------------------------------------------------
# run Yosys synthesis
#-------------------------------------------------------------------------
yosys -c ./tcl/yosys_run_synth.tcl |& teelog syn || {
    error "Failed to synthesize RTL with Yosys"
}

#-------------------------------------------------------------------------
# run static timing analysis
#-------------------------------------------------------------------------
if [[ $LR_SYNTH_TIMING_RUN == 1 ]] ; then
    sta ./tcl/sta_run_reports.tcl |& teelog sta || {
        error "Failed to run static timing analysis"
    }

    ./translate_timing_rpts.sh
fi

#-------------------------------------------------------------------------
# report kGE number
#-------------------------------------------------------------------------
python/get_kge.py $LR_SYNTH_CELL_LIBRARY_PATH $LR_SYNTH_OUT_DIR/reports/area.rpt
