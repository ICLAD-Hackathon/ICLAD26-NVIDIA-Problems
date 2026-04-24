#!/bin/bash
#
# Environment setup for OpenTitan Prim Library Yosys synthesis
#
# Usage:
#   source env.sh
#   yosys -c syn.tcl
#
# Or with a specific module:
#   DESIGN_NAME=prim_crc32 source env.sh
#   yosys -c syn.tcl
#
# Primary synthesis targets (modules with pre_dv tests; also used by run_syn.sh batch):
#   prim_crc32          - CRC32 computation module
#   prim_ascon_duplex   - ASCON duplex cipher
#   prim_trivium        - Trivium stream cipher
#
# CDC / synchronizer primitives (pre_dv exists; not synthesized as top in run_syn.sh):
#   prim_sync_reqack    - REQ/ACK synchronizer (use as submodule or dedicated flow)
#   prim_flop_2sync     - 2-stage synchronizer (prim_generic; same)
#
# Other available modules (examples):
#   prim_fifo_sync      - Synchronous FIFO
#   prim_arbiter_fixed  - Fixed priority arbiter
#   prim_lfsr           - Linear feedback shift register
#   prim_count          - Secure counter
#   prim_keccak         - Keccak permutation
#   prim_sha2           - SHA2 hash core
#   prim_present        - PRESENT cipher
#   prim_prince         - PRINCE cipher
#   prim_dom_and_2share - Domain-oriented masking AND gate

# ==============================================================================
# Design Configuration
# ==============================================================================

# Top module name (default: prim_crc32 - a primary pre_dv tested module)
# Note: Set DESIGN_NAME before sourcing this file, or export it after
export DESIGN_NAME="${DESIGN_NAME:-prim_crc32}"

# Verilog filelist
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
export VERILOG_FILELIST=${VERILOG_FILELIST:-${SCRIPT_DIR}/prim_yosys.f}

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
export ABC_AREA=${ABC_AREA:-1}

# Flatten hierarchy: 1=yes, 0=no
export FLATTEN=${FLATTEN:-1}

# SDC constraint file - dynamically select based on DESIGN_NAME
# Look for <DESIGN_NAME>_constraint.sdc first, then fall back to constraint.sdc
if [ -f "${SCRIPT_DIR}/${DESIGN_NAME}_constraint.sdc" ]; then
  export SDC_FILE=${SDC_FILE:-${SCRIPT_DIR}/${DESIGN_NAME}_constraint.sdc}
else
  export SDC_FILE=${SDC_FILE:-${SCRIPT_DIR}/constraint.sdc}
fi

# ==============================================================================
# Print Configuration
# ==============================================================================

echo "=============================================="
echo "OpenTitan Prim Library Yosys Synthesis"
echo "=============================================="
echo "Design:        $DESIGN_NAME"
echo "Filelist:      $VERILOG_FILELIST"
echo "Tech:          ASAP7 $VT $CORNER"
echo "ABC Mode:      $([ "$ABC_AREA" = "1" ] && echo "Area" || echo "Speed")"
echo "Flatten:       $([ "$FLATTEN" = "1" ] && echo "Yes" || echo "No")"
echo "SDC:           $SDC_FILE"
echo "=============================================="
echo ""
echo "To synthesize a different module:"
echo "  export DESIGN_NAME=prim_trivium"
echo "  source env.sh && yosys -c syn.tcl"
echo ""
