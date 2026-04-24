#!/bin/bash
#
# Environment variable settings for async_fifo synthesis
#
# Usage:
#   source env.sh
#   yosys -c syn.tcl
#
# Or run directly:
#   source env.sh && yosys -c syn.tcl
#

# ==============================================================================
# Design Configuration
# ==============================================================================

# Top module name
export DESIGN_NAME=async_fifo

# RTL source directory (relative to script or absolute path)
# Default: ../rtl (relative to syn.tcl location)
export RTL_DIR=../rtl

# RTL source files (space-separated list)
# If not set, syn.tcl uses default async_fifo files
# export VERILOG_FILES="${RTL_DIR}/async_fifo.v ${RTL_DIR}/fifomem.v ${RTL_DIR}/rptr_empty.v ${RTL_DIR}/sync_r2w.v ${RTL_DIR}/sync_w2r.v ${RTL_DIR}/wptr_full.v"

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

# SDC constraint file (default: constraint.sdc in syn directory)
# export SDC_FILE=constraint.sdc

# Clock period for ABC timing (in picoseconds)
# If not set, will be extracted from SDC_FILE
# Default: 1000 ps = 1 ns = 1 GHz
# export ABC_CLOCK_PERIOD_IN_PS=1000

# ==============================================================================
# Optional Hooks
# ==============================================================================

# Post-synthesis TCL script to source (optional)
# export POST_SYNTH_TCL=post_synth.tcl

# ==============================================================================
# Print current configuration
# ==============================================================================

echo "========================================"
echo "async_fifo Synthesis Environment"
echo "========================================"
echo "DESIGN_NAME:      ${DESIGN_NAME}"
echo "RTL_DIR:          ${RTL_DIR}"
echo "ASAP7_LIB_DIR:    ${ASAP7_LIB_DIR}"
echo "VT:               ${VT}"
echo "CORNER:           ${CORNER}"
echo "ABC_AREA:         ${ABC_AREA} ($([ ${ABC_AREA} -eq 1 ] && echo 'area' || echo 'speed'))"
echo "FLATTEN:          ${FLATTEN}"
echo "SDC_FILE:         ${SDC_FILE:-constraint.sdc (default)}"
echo "========================================"
