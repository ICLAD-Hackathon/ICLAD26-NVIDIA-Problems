#!/bin/bash
#
# Environment variable settings for NVDLA synthesis with Yosys
#
# Usage:
#   source env.sh
#   yosys -c syn.tcl
#

# ==============================================================================
# Design Configuration
# ==============================================================================

# Top module name
export DESIGN_NAME=NV_nvdla

# RTL base directory (relative to yosys_syn/)
export RTL_DIR=../../outdir/nv_small/vmod

# Include directories for Verilog `include
export INCLUDE_DIRS="${RTL_DIR}/include ${RTL_DIR}/nvdla/bdma ${RTL_DIR}/nvdla/cacc ${RTL_DIR}/nvdla/car ${RTL_DIR}/nvdla/cbuf ${RTL_DIR}/nvdla/cdma ${RTL_DIR}/nvdla/cdp ${RTL_DIR}/nvdla/cmac ${RTL_DIR}/nvdla/csc ${RTL_DIR}/nvdla/glb ${RTL_DIR}/nvdla/nocif ${RTL_DIR}/nvdla/pdp ${RTL_DIR}/nvdla/retiming ${RTL_DIR}/nvdla/rubik ${RTL_DIR}/nvdla/sdp ${RTL_DIR}/nvdla/top ${RTL_DIR}/nvdla/csb_master ${RTL_DIR}/nvdla/cfgrom ${RTL_DIR}/rams/synth ${RTL_DIR}/vlibs"

# RTL source files - use comprehensive filelist for Yosys
# (Verilator filelist only has top module; Yosys needs all files)
export VERILOG_FILELIST=nvdla_yosys.f

# ==============================================================================
# Technology Configuration
# ==============================================================================

# ASAP7 liberty file directory
export ASAP7_LIB_DIR=/workspace/techlib/asap7sc7p5t_28/LIB/NLDM

# Voltage threshold: RVT, LVT, SLVT
export VT=RVT

# PVT corner: TT, FF, SS
export CORNER=TT

# ==============================================================================
# Synthesis Options
# ==============================================================================

# ABC optimization mode: 1 = area, 0 = speed
export ABC_AREA=0

# Flatten hierarchy: 1 = yes, 0 = no (NVDLA is large, may want 0)
export FLATTEN=0

# ==============================================================================
# Timing Constraints
# ==============================================================================

# SDC constraint file
export SDC_FILE=constraint.sdc

# ==============================================================================
# Print current configuration
# ==============================================================================

echo "========================================"
echo "NVDLA Yosys Synthesis Environment"
echo "========================================"
echo "DESIGN_NAME:      ${DESIGN_NAME}"
echo "RTL_DIR:          ${RTL_DIR}"
echo "ASAP7_LIB_DIR:    ${ASAP7_LIB_DIR}"
echo "VT:               ${VT}"
echo "CORNER:           ${CORNER}"
echo "ABC_AREA:         ${ABC_AREA} ($([ ${ABC_AREA} -eq 1 ] && echo 'area' || echo 'speed'))"
echo "FLATTEN:          ${FLATTEN}"
echo "SDC_FILE:         ${SDC_FILE}"
echo "========================================"
