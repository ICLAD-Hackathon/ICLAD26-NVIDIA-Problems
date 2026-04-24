#!/bin/bash
#
# Environment setup for OpenTitan ASCON Yosys synthesis
#
# Usage:
#   source env.sh
#   yosys -c syn.tcl
#

# ==============================================================================
# Design Configuration
# ==============================================================================

# Top module name
export DESIGN_NAME=${DESIGN_NAME:-ascon}

# Verilog filelist
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
export VERILOG_FILELIST=${VERILOG_FILELIST:-${SCRIPT_DIR}/ascon_yosys.f}

# ==============================================================================
# Technology Configuration (ASAP7)
# ==============================================================================

# ASAP7 NLDM liberty directory
export ASAP7_LIB_DIR=${ASAP7_LIB_DIR:-/workspace/techlib/asap7sc7p5t_28/LIB/NLDM}

# Voltage threshold: RVT, LVT, SLVT
export VT=${VT:-RVT}

# PVT corner: TT, FF, SS
export CORNER=${CORNER:-TT}

# ==============================================================================
# Synthesis Configuration
# ==============================================================================

# ABC optimization mode: 1=area, 0=speed
export ABC_AREA=0

# Flatten hierarchy: 1=yes, 0=no
export FLATTEN=${FLATTEN:-1}

# SDC constraint file
export SDC_FILE=${SDC_FILE:-${SCRIPT_DIR}/constraint.sdc}

# ==============================================================================
# Print Configuration
# ==============================================================================

echo "=============================================="
echo "OpenTitan ASCON Yosys Synthesis Environment"
echo "=============================================="
echo "Design:        $DESIGN_NAME"
echo "Filelist:      $VERILOG_FILELIST"
echo "Tech:          ASAP7 $VT $CORNER"
echo "ABC Mode:      $([ "$ABC_AREA" = "1" ] && echo "Area" || echo "Speed")"
echo "Flatten:       $([ "$FLATTEN" = "1" ] && echo "Yes" || echo "No")"
echo "SDC:           $SDC_FILE"
echo "=============================================="
echo ""
echo "Run synthesis with:"
echo "  yosys -c syn.tcl"
echo ""
