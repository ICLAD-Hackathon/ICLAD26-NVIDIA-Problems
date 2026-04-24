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

error () {
    echo >&2 "$@"
    exit 1
}

teelog () {
    tee "$LR_SYNTH_OUT_DIR/log/$1.log"
}

#-------------------------------------------------------------------------
# Parse command-line arguments
#-------------------------------------------------------------------------
DRY_RUN=0
POSITIONAL_ARGS=()

while [[ $# -gt 0 ]]; do
    case $1 in
        --dry-run|--list-only|-n)
            DRY_RUN=1
            shift
            ;;
        -h|--help)
            echo "Usage: $0 [OPTIONS] [synth_out_dir]"
            echo ""
            echo "Options:"
            echo "  --dry-run, --list-only, -n   Print file list and exit without running synthesis"
            echo "  -h, --help                   Show this help message"
            echo ""
            echo "Environment Variables:"
            echo "  LR_SYNTH_CELL_LIBRARY_PATH   Path to cell library (.lib file)"
            echo "  LR_SYNTH_CELL_LIBRARY_NAME   Name of cell library (e.g., nangate, asap7)"
            exit 0
            ;;
        -*)
            error "Unknown option: $1. Use -h for help."
            ;;
        *)
            POSITIONAL_ARGS+=("$1")
            shift
            ;;
    esac
done

# Restore positional arguments
set -- "${POSITIONAL_ARGS[@]}"

if [ ! -f syn_setup.sh ]; then
    error "No syn_setup.sh file: see README.md for instructions"
fi

#-------------------------------------------------------------------------
# setup flow variables
#-------------------------------------------------------------------------
source syn_setup.sh

# Handle output directory argument
if [ $# -eq 1 ]; then
    export LR_SYNTH_OUT_DIR=$1
elif [ $# -gt 1 ]; then
    error "Usage: $0 [OPTIONS] [synth_out_dir]"
fi

#-------------------------------------------------------------------------
# use sv2v to convert all SystemVerilog files to Verilog
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
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_mubi4_sender.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_fifo_sync_cnt.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_sec_anchor_buf.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_sec_anchor_flop.sv
    "$LR_SYNTH_SRC_DIR"/../prim_generic/rtl/prim_flop_2sync.sv
    "$LR_SYNTH_SRC_DIR"/../prim_generic/rtl/prim_flop.sv
    "$LR_SYNTH_SRC_DIR"/../prim_generic/rtl/prim_flop_en.sv
    "$LR_SYNTH_SRC_DIR"/../prim_generic/rtl/prim_and2.sv
    "$LR_SYNTH_SRC_DIR"/../prim_generic/rtl/prim_buf.sv
    "$LR_SYNTH_SRC_DIR"/../prim_generic/rtl/prim_xor2.sv
    "$LR_SYNTH_SRC_DIR"/../prim_generic/rtl/prim_xnor2.sv
    "$LR_SYNTH_SRC_DIR"/../tlul/rtl/tlul_adapter_sram.sv
    "$LR_SYNTH_SRC_DIR"/../tlul/rtl/tlul_sram_byte.sv
    "$LR_SYNTH_SRC_DIR"/../tlul/rtl/tlul_socket_1n.sv
    "$LR_SYNTH_SRC_DIR"/../tlul/rtl/tlul_err_resp.sv
    "$LR_SYNTH_SRC_DIR"/../tlul/rtl/tlul_fifo_sync.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_dom_and_2share.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_keccak.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_slicer.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_intr_hw.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_edn_req.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_fifo_sync.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_arbiter_fixed.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_packer.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_count.sv
    "$LR_SYNTH_SRC_DIR"/../prim/rtl/prim_double_lfsr.sv
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

# Get core source files
CORE_SOURCES=()
for file in "$LR_SYNTH_SRC_DIR"/rtl/*.sv; do
    module=$(basename -s .sv "$file")
    # Skip packages
    if echo "$module" | grep -q '_pkg$'; then
        continue
    fi
    CORE_SOURCES+=("$file")
done

# Get KMAC-specific packages
KMAC_PACKAGES=()
for file in "$LR_SYNTH_SRC_DIR"/rtl/*_pkg.sv; do
    if [ -f "$file" ]; then
        KMAC_PACKAGES+=("$file")
    fi
done

#-------------------------------------------------------------------------
# Print file list
#-------------------------------------------------------------------------
print_file_list() {
    echo "=========================================================================="
    echo "Synthesis Source Files for OpenTitan KMAC"
    echo "=========================================================================="
    echo ""
    echo "Top Module: $LR_SYNTH_TOP_MODULE"
    echo "IP Name:    $LR_SYNTH_IP_NAME"
    echo ""

    echo "--- OpenTitan Dependency Sources ---"
    dep_count=0
    for file in "${OT_DEP_SOURCES[@]}"; do
        echo "  $file"
        dep_count=$((dep_count + 1))
    done
    echo "  ($dep_count files)"
    echo ""

    echo "--- Core KMAC Sources ---"
    core_count=0
    for file in "${CORE_SOURCES[@]}"; do
        echo "  $file"
        core_count=$((core_count + 1))
    done
    echo "  ($core_count files)"
    echo ""

    echo "--- Dependency Packages ---"
    pkg_count=0
    # Expand globs and print
    for pattern in "${OT_DEP_PACKAGES[@]}"; do
        for file in $pattern; do
            if [ -f "$file" ]; then
                echo "  $file"
                pkg_count=$((pkg_count + 1))
            fi
        done
    done
    echo "  ($pkg_count files)"
    echo ""

    echo "--- KMAC-specific Packages ---"
    kmac_pkg_count=0
    for file in "${KMAC_PACKAGES[@]}"; do
        echo "  $file"
        kmac_pkg_count=$((kmac_pkg_count + 1))
    done
    echo "  ($kmac_pkg_count files)"
    echo ""

    total_count=$((dep_count + core_count))
    echo "=========================================================================="
    echo "Total: $total_count source files + packages"
    echo "=========================================================================="
}

# Print file list
print_file_list

# If dry-run mode, exit here
if [[ $DRY_RUN == 1 ]]; then
    echo ""
    echo "[DRY-RUN] Exiting without running synthesis."
    exit 0
fi

#-------------------------------------------------------------------------
# prepare output folders
#-------------------------------------------------------------------------
mkdir -p "$LR_SYNTH_OUT_DIR/generated"
mkdir -p "$LR_SYNTH_OUT_DIR/log"
mkdir -p "$LR_SYNTH_OUT_DIR/reports/timing"

rm -f syn_out/latest
ln -s "${LR_SYNTH_OUT_DIR#syn_out/}" syn_out/latest

#-------------------------------------------------------------------------
# Convert SystemVerilog to Verilog using sv2v
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
        -I"$LR_SYNTH_SRC_DIR"/../prim_generic/rtl \
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
        -I"$LR_SYNTH_SRC_DIR"/../prim_generic/rtl \
        "$file" \
        > "$LR_SYNTH_OUT_DIR/generated/${module}.v"

    # Rename prim_sparse_fsm_flop instances. For some reason, sv2v decides to append a suffix.
    sed -i 's/prim_sparse_fsm_flop_.*/prim_sparse_fsm_flop \#(/g' \
        "$LR_SYNTH_OUT_DIR/generated/${module}.v"

    # Remove the StateEnumT parameter from prim_sparse_fsm_flop instances. Yosys doesn't seem to
    # support this.
    sed -i '/\.StateEnumT(logic \[.*/d' "$LR_SYNTH_OUT_DIR/generated/${module}.v"
    sed -i '/\.StateEnumT_StateWidth(.*/d' "$LR_SYNTH_OUT_DIR/generated/${module}.v"
    sed -i '/\.StateEnumT_StateWidthPad(.*/d' "$LR_SYNTH_OUT_DIR/generated/${module}.v"
    sed -i '/\.StateEnumT_sha3_pkg.*(.*/d' "$LR_SYNTH_OUT_DIR/generated/${module}.v"
    sed -i '/\.StateEnumT_kmac_pkg.*(.*/d' "$LR_SYNTH_OUT_DIR/generated/${module}.v"
done

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
python/get_kge.py "$LR_SYNTH_CELL_LIBRARY_PATH" "$LR_SYNTH_OUT_DIR/reports/area.rpt"
