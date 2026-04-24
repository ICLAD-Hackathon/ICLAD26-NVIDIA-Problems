#!/bin/bash
#
# Environment variable settings for sha512 synthesis
#
# Usage:
#   source env.sh
#   yosys -c syn.tcl
#

# ==============================================================================
# Design Configuration
# ==============================================================================

# Top module name
export DESIGN_NAME=sha512

# RTL source directory (relative to syn/ directory)
export RTL_DIR=../src/rtl

# RTL source files (space-separated list, using absolute-style paths)
export VERILOG_FILES="../src/rtl/sha512.v ../src/rtl/sha512_core.v ../src/rtl/sha512_w_mem.v ../src/rtl/sha512_k_constants.v ../src/rtl/sha512_h_constants.v"

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

# Flatten hierarchy: 1 = yes, 0 = no
export FLATTEN=1

# ==============================================================================
# Timing Constraints
# ==============================================================================

# SDC constraint file
export SDC_FILE=constraint.sdc

# Clock period in picoseconds (for ABC timing)
# 5000 ps = 5 ns = 200 MHz (adjust as needed)
# export ABC_CLOCK_PERIOD_IN_PS=5000

# ==============================================================================
# Print current configuration
# ==============================================================================

echo "========================================"
echo "sha512 Synthesis Environment"
echo "========================================"
echo "DESIGN_NAME:      ${DESIGN_NAME}"
echo "RTL_DIR:          ${RTL_DIR}"
echo "VERILOG_FILES:    ${VERILOG_FILES}"
echo "ASAP7_LIB_DIR:    ${ASAP7_LIB_DIR}"
echo "VT:               ${VT}"
echo "CORNER:           ${CORNER}"
echo "ABC_AREA:         ${ABC_AREA} ($([ ${ABC_AREA} -eq 1 ] && echo 'area' || echo 'speed'))"
echo "FLATTEN:          ${FLATTEN}"
echo "SDC_FILE:         ${SDC_FILE}"
echo "========================================"
