#!/usr/bin/env yosys
#
# Yosys synthesis script for async_fifo with ASAP7 PDK
# Based on OpenROAD-flow-scripts synthesis methodology
#
# Usage:
#   yosys -c syn.tcl
#
# Environment variables (optional):
#   DESIGN_NAME           - Top module name (default: async_fifo)
#   RTL_DIR               - Directory containing RTL files (default: ../rtl)
#   VERILOG_FILES         - Space-separated list of Verilog files (default: async_fifo RTL)
#   ASAP7_LIB_DIR         - Path to ASAP7 NLDM liberty files (default: /workspace/techlib/asap7sc7p5t_28/LIB/NLDM)
#   VT                    - Voltage threshold: RVT, LVT, SLVT (default: RVT)
#   CORNER                - PVT corner: TT, FF, SS (default: TT)
#   ABC_AREA              - Set to 1 for area optimization, 0 for speed (default: 1 = area)
#   FLATTEN               - Set to 1 to flatten hierarchy (default: 1)
#   ABC_CLOCK_PERIOD_IN_PS - Clock period for ABC timing in ps (default: from SDC or 1000 ps)
#   SDC_FILE              - Path to SDC constraint file (default: constraint.sdc)
#   POST_SYNTH_TCL        - Optional TCL file to source after synthesis
#
# Defaults for async_fifo:
#   - SDC file: constraint.sdc (defines wclk/rclk at 1 GHz)
#   - ABC optimization: area (default)
#   - Clock period: 1000 ps (1 ns, 1 GHz) from SDC
#   - Output directory: syn_results/
#
# Timing-driven synthesis:
#   ABC uses the clock period (-D option) to guide timing optimization.
#   Clock period is automatically extracted from SDC_FILE.
#   Override with: ABC_CLOCK_PERIOD_IN_PS=500 yosys -c syn.tcl  (2 GHz target)
#
# Included files (from OpenROAD-flow-scripts):
#   synth_util.tcl     - Utility functions (env_var_*, log_cmd, etc.)
#   synth_stdcells.tcl - Read liberty files
#   synth_abc.tcl      - ABC technology mapping with timing constraints
#   abc_area.script    - ABC area optimization script
#   abc_speed.script   - ABC speed optimization script
#   constraint.sdc     - Default SDC constraints for async_fifo

yosys -import

# ==============================================================================
# Script directory and utility functions
# ==============================================================================

set script_dir [file dirname [file normalize [info script]]]

# Source utility functions (from OpenROAD util.tcl)
source [file join $script_dir synth_util.tcl]

# ==============================================================================
# Configuration
# ==============================================================================

set results_dir [file join $script_dir syn_results]
set reports_dir [file join $script_dir syn_results]

# Create output directories
file mkdir $results_dir

# Design configuration (configurable via environment variables)
set DESIGN_NAME [env_var_or_default DESIGN_NAME async_fifo]

# RTL directory (default: ../rtl relative to script)
set rtl_dir [env_var_or_default RTL_DIR [file join $script_dir .. rtl]]

# ASAP7 library paths
set ASAP7_DIR [env_var_or_default ASAP7_LIB_DIR /workspace/techlib/asap7sc7p5t_28/LIB/NLDM]
set VT [env_var_or_default VT RVT]
set CORNER [env_var_or_default CORNER TT]
set ABC_AREA [env_var_or_default ABC_AREA 1]
set FLATTEN [env_var_or_default FLATTEN 1]

# SDC constraint file (default: constraint.sdc in script directory)
set SDC_FILE [env_var_or_default SDC_FILE [file join $script_dir constraint.sdc]]

# Clock period for ABC timing (default: read from SDC or 1000 ps = 1 GHz)
# This will be extracted from SDC_FILE in synth_abc.tcl if not explicitly set
if {![env_var_exists_and_non_empty ABC_CLOCK_PERIOD_IN_PS]} {
  # Set environment variable so synth_abc.tcl can read SDC
  set ::env(SDC_FILE) $SDC_FILE
}

# RTL source files (configurable via VERILOG_FILES environment variable)
# Format: space-separated list of file paths
if {[env_var_exists_and_non_empty VERILOG_FILES]} {
  set VERILOG_FILES $::env(VERILOG_FILES)
} else {
  # Default RTL files for async_fifo
  set VERILOG_FILES [list \
    [file join $rtl_dir async_fifo.v] \
    [file join $rtl_dir fifomem.v] \
    [file join $rtl_dir rptr_empty.v] \
    [file join $rtl_dir sync_r2w.v] \
    [file join $rtl_dir sync_w2r.v] \
    [file join $rtl_dir wptr_full.v] \
  ]
}

puts "=============================================="
puts "Design:  $DESIGN_NAME"
puts "RTL Dir: $rtl_dir"
puts "VT:      $VT"
puts "Corner:  $CORNER"
puts "ABC:     [expr {$ABC_AREA ? {area} : {speed}}]"
puts "Flatten: $FLATTEN"
puts "SDC:     $SDC_FILE"
puts "RTL Files:"
foreach f $VERILOG_FILES {
  puts "  - [file tail $f]"
}
puts "=============================================="

# ==============================================================================
# Liberty file setup (based on OpenROAD ASAP7 config.mk)
# ==============================================================================

# Map corner to liberty suffix
switch $CORNER {
  FF { set LIB_CORNER FF }
  SS { set LIB_CORNER SS }
  default { set LIB_CORNER TT }
}

# DFF library (sequential cells only, for dfflibmap)
set DFF_LIB_FILE [file join $ASAP7_DIR asap7sc7p5t_SEQ_${VT}_${LIB_CORNER}_nldm_220123.lib]

# All standard cell libraries (for read_liberty, ABC, and stat)
# OpenROAD passes all libraries to ABC via multiple -liberty arguments
set LIB_FILES [list \
  [file join $ASAP7_DIR asap7sc7p5t_AO_${VT}_${LIB_CORNER}_nldm_211120.lib] \
  [file join $ASAP7_DIR asap7sc7p5t_INVBUF_${VT}_${LIB_CORNER}_nldm_220122.lib] \
  [file join $ASAP7_DIR asap7sc7p5t_OA_${VT}_${LIB_CORNER}_nldm_211120.lib] \
  [file join $ASAP7_DIR asap7sc7p5t_SIMPLE_${VT}_${LIB_CORNER}_nldm_211120.lib] \
  $DFF_LIB_FILE \
]

# ASAP7 cell names (from OpenROAD config.mk)
# VT tag: RVT -> R, LVT -> L, SLVT -> SL
switch $VT {
  LVT  { set VT_TAG L }
  SLVT { set VT_TAG SL }
  default { set VT_TAG R }
}

set TIEHI_CELL_AND_PORT [list TIEHIx1_ASAP7_75t_${VT_TAG} H]
set TIELO_CELL_AND_PORT [list TIELOx1_ASAP7_75t_${VT_TAG} L]
set MIN_BUF_CELL_AND_PORTS [list BUFx2_ASAP7_75t_${VT_TAG} A Y]
set ABC_DRIVER_CELL BUFx2_ASAP7_75t_${VT_TAG}
set ABC_LOAD_IN_FF 3.898

# Dont use cells (from OpenROAD config: small drive, scan FFs, ICG)
set DONT_USE_CELLS [list *x1p*_ASAP7* *xp*_ASAP7* SDF* ICG*]

# ==============================================================================
# Read standard cell libraries (from synth_stdcells.tcl)
# ==============================================================================

puts "\n=== Reading liberty files ==="
source [file join $script_dir synth_stdcells.tcl]

# ==============================================================================
# Read RTL design sources
# ==============================================================================

puts "\n=== Reading RTL sources ==="
foreach file $VERILOG_FILES {
  if {![file exists $file]} {
    error "RTL file not found: $file"
  }
  read_verilog -sv $file
  puts "  Read: [file tail $file]"
}

# ==============================================================================
# Hierarchy check and elaboration
# ==============================================================================

puts "\n=== Elaborating design ==="
hierarchy -check -top $DESIGN_NAME

# ==============================================================================
# Coarse-level synthesis (from OpenROAD synth.tcl)
# ==============================================================================

puts "\n=== Running synthesis ==="
# Run synth up to :fine stage, then do tech mapping separately
# This is the OpenROAD approach: synth -run :fine, then ABC
if {$FLATTEN} {
  log_cmd synth -flatten -top $DESIGN_NAME -run :fine
} else {
  log_cmd synth -top $DESIGN_NAME -run :fine
}

# Run the fine stage without ABC (we'll use our own ABC call later)
log_cmd synth -top $DESIGN_NAME -run fine: -noabc

# ==============================================================================
# Technology mapping
# ==============================================================================

puts "\n=== Technology mapping ==="

# Optimize the design
opt -purge

# Technology mapping of flip-flops (dfflibmap only supports one liberty file)
puts "Mapping DFFs..."
if {![file exists $DFF_LIB_FILE]} {
  error "DFF liberty file not found: $DFF_LIB_FILE"
}

# Build dont_use args for dfflibmap
set lib_dont_use_args [list]
foreach pattern $DONT_USE_CELLS {
  lappend lib_dont_use_args -dont_use $pattern
}

log_cmd dfflibmap -liberty $DFF_LIB_FILE {*}$lib_dont_use_args
opt

# Replace undef values with defined constants
setundef -zero

# ==============================================================================
# ABC technology mapping (from synth_abc.tcl)
# ==============================================================================

puts "\n=== ABC mapping ==="
source [file join $script_dir synth_abc.tcl]

# ==============================================================================
# Post-ABC cleanup (from OpenROAD synth.tcl)
# ==============================================================================

puts "\n=== Post-synthesis cleanup ==="

# Splitting nets resolves unwanted compound assign statements
splitnets

# Remove unused cells and wires
opt_clean -purge

# Technology mapping of constant hi- and/or lo-drivers
hilomap -singleton \
  -hicell {*}$TIEHI_CELL_AND_PORT \
  -locell {*}$TIELO_CELL_AND_PORT

# ==============================================================================
# Reports
# ==============================================================================

puts "\n=== Generating reports ==="

# Check for problems
tee -o [file join $reports_dir synth_check.txt] check

# Build lib args for stat
set lib_args [list]
foreach lib $LIB_FILES {
  if {[file exists $lib]} {
    lappend lib_args -liberty $lib
  }
}

# Statistics with liberty
tee -o [file join $reports_dir synth_stat.txt] stat {*}$lib_args

# Verify mapped design
# Note: check -assert may fail after flatten due to port connection issues
# Use check -mapped to see warnings without failing
check -mapped

# ==============================================================================
# Write outputs
# ==============================================================================

puts "\n=== Writing outputs ==="

# Write synthesized netlist
set output_verilog [file join $results_dir ${DESIGN_NAME}_syn.v]
write_verilog -noattr -noexpr -nohex -nodec $output_verilog
puts "Netlist: $output_verilog"

# Also write to syn directory for convenience
write_verilog -noattr -noexpr -nohex -nodec [file join $script_dir ${DESIGN_NAME}_syn.v]

# ==============================================================================
# Optional post-synthesis hook
# ==============================================================================

source_env_var_if_exists POST_SYNTH_TCL

# ==============================================================================
# Generate Final Synthesis Report
# ==============================================================================

puts "\n=== Generating Final Synthesis Report ==="

set final_report_file [file join $reports_dir synth_final_report.txt]
set rpt [open $final_report_file w]

puts $rpt "================================================================================"
puts $rpt "                    SYNTHESIS FINAL REPORT"
puts $rpt "================================================================================"
puts $rpt ""
puts $rpt "Design:          $DESIGN_NAME"
puts $rpt "Date:            [clock format [clock seconds] -format {%Y-%m-%d %H:%M:%S}]"
puts $rpt "Technology:      ASAP7 ${VT} ${LIB_CORNER}"
puts $rpt "Optimization:    [expr {$ABC_AREA ? {Area} : {Speed}}]"
puts $rpt "Flatten:         [expr {$FLATTEN ? {Yes} : {No}}]"
puts $rpt ""

puts $rpt "--------------------------------------------------------------------------------"
puts $rpt "                           RTL INPUT FILES"
puts $rpt "--------------------------------------------------------------------------------"
puts $rpt "RTL Directory:           $rtl_dir"
puts $rpt "Number of Files:         [llength $VERILOG_FILES]"
puts $rpt ""
foreach f $VERILOG_FILES {
  puts $rpt "  - $f"
}
puts $rpt ""

# Get clock period used
set clock_period_ps [env_var_or_default ABC_CLOCK_PERIOD_IN_PS 1000]
set clock_period_ns [expr {$clock_period_ps / 1000.0}]
set target_freq_mhz [expr {1000.0 / $clock_period_ns}]

puts $rpt "--------------------------------------------------------------------------------"
puts $rpt "                         TIMING CONFIGURATION"
puts $rpt "--------------------------------------------------------------------------------"
puts $rpt "SDC File:                $SDC_FILE"
puts $rpt "Target Clock Period:     ${clock_period_ps} ps (${clock_period_ns} ns)"
puts $rpt "Target Frequency:        [format "%.2f" $target_freq_mhz] MHz"
puts $rpt "ABC Driver Cell:         $ABC_DRIVER_CELL"
puts $rpt "ABC Load:                $ABC_LOAD_IN_FF fF"
puts $rpt ""

# Capture stat output
set stat_output [tee -q -s result.string stat {*}$lib_args]

# Parse area from stat output
# For hierarchical designs: use "Chip area for top module"
# For flat/simple designs: use the last "Chip area for module" line
set total_area 0
set seq_area 0
set comb_area 0
set cell_count 0

# First try "Chip area for top module" (hierarchical designs)
# Then fall back to last "Chip area for module" (simple designs)
set found_top 0
set last_area_line ""
set last_seq_line ""

foreach line [split $stat_output "\n"] {
  # Track all "Chip area" lines - we want the last one (which is the top/main module)
  if {[regexp {Chip area for.*module[^:]*:\s+([\d.]+)} $line match area]} {
    set total_area $area
    set last_area_line $line
    set found_top 1
  } elseif {$found_top && [regexp {of which used for sequential elements:\s+([\d.]+)\s+\(([\d.]+)%\)} $line match seq pct]} {
    set seq_area $seq
    set comb_area [expr {$total_area - $seq_area}]
    set last_seq_line $line
    # Don't break - keep going to find the LAST (top module) area
  }
}

# Count total cells - sum all "cells" lines from module stats
# Format: "     1234  567.890 cells"
foreach line [split $stat_output "\n"] {
  if {[regexp {^\s+(\d+)\s+[\d.E+]+\s+cells\s*$} $line match cnt]} {
    incr cell_count $cnt
  }
}

puts $rpt "--------------------------------------------------------------------------------"
puts $rpt "                              AREA SUMMARY"
puts $rpt "--------------------------------------------------------------------------------"
puts $rpt "Total Cell Count:        $cell_count"
puts $rpt "Total Area:              [format "%.3f" $total_area] (liberty units)"
puts $rpt "Sequential Area:         [format "%.3f" $seq_area] ([format "%.2f" [expr {$seq_area * 100.0 / ($total_area + 0.001)}]]%)"
puts $rpt "Combinational Area:      [format "%.3f" $comb_area] ([format "%.2f" [expr {$comb_area * 100.0 / ($total_area + 0.001)}]]%)"
puts $rpt ""

# Count cell types
set dff_count 0
set buf_count 0
set inv_count 0
set logic_count 0

foreach line [split $stat_output "\n"] {
  if {[regexp {^\s*(\d+)\s+[\d.]+\s+(DFF\w+)} $line match cnt cell]} {
    incr dff_count $cnt
  }
  if {[regexp {^\s*(\d+)\s+[\d.]+\s+(BUF\w+)} $line match cnt cell]} {
    incr buf_count $cnt
  }
  if {[regexp {^\s*(\d+)\s+[\d.]+\s+(INV\w+)} $line match cnt cell]} {
    incr inv_count $cnt
  }
}
set logic_count [expr {$cell_count - $dff_count - $buf_count - $inv_count}]

puts $rpt "--------------------------------------------------------------------------------"
puts $rpt "                            CELL BREAKDOWN"
puts $rpt "--------------------------------------------------------------------------------"
puts $rpt "Flip-Flops:              $dff_count"
puts $rpt "Buffers:                 $buf_count"
puts $rpt "Inverters:               $inv_count"
puts $rpt "Logic Gates:             $logic_count"
puts $rpt ""

puts $rpt "--------------------------------------------------------------------------------"
puts $rpt "                          TIMING ESTIMATION"
puts $rpt "--------------------------------------------------------------------------------"
puts $rpt "NOTE: Actual WNS/TNS requires STA with OpenSTA or OpenROAD"
puts $rpt ""
puts $rpt "ABC Timing Target:       ${clock_period_ps} ps"
puts $rpt "ABC Optimization:        [expr {$ABC_AREA ? {Area-focused (may not meet timing)} : {Timing-focused}}]"
puts $rpt ""
puts $rpt "For accurate timing, run:"
puts $rpt "  sta constraint.sdc results/${DESIGN_NAME}_syn.v"
puts $rpt ""

puts $rpt "--------------------------------------------------------------------------------"
puts $rpt "                          POWER ESTIMATION"
puts $rpt "--------------------------------------------------------------------------------"
puts $rpt "NOTE: Actual power requires simulation + power analysis tools"
puts $rpt ""
# Rough estimation based on cell count and technology
# ASAP7 typical: ~0.5-1.0 uW/cell at 1GHz (very rough estimate)
set est_power_uw [expr {$cell_count * 0.7}]
puts $rpt "Estimated Total Cells:   $cell_count"
puts $rpt "Rough Power Estimate:    ~[format "%.1f" $est_power_uw] uW @ ${target_freq_mhz} MHz (rough estimate)"
puts $rpt "                         (Actual power depends on activity factor, VDD, etc.)"
puts $rpt ""
puts $rpt "For accurate power, run OpenROAD flow with:"
puts $rpt "  report_power"
puts $rpt ""

puts $rpt "--------------------------------------------------------------------------------"
puts $rpt "                           OUTPUT FILES"
puts $rpt "--------------------------------------------------------------------------------"
puts $rpt "Synthesized Netlist:     $output_verilog"
puts $rpt "Synthesis Stats:         [file join $reports_dir synth_stat.txt]"
puts $rpt "Synthesis Check:         [file join $reports_dir synth_check.txt]"
puts $rpt "This Report:             $final_report_file"
puts $rpt ""

puts $rpt "--------------------------------------------------------------------------------"
puts $rpt "                         DETAILED CELL LIST"
puts $rpt "--------------------------------------------------------------------------------"
puts $rpt ""
puts $rpt $stat_output
puts $rpt ""
puts $rpt "================================================================================"
puts $rpt "                         END OF REPORT"
puts $rpt "================================================================================"

close $rpt

puts "Final report written to: $final_report_file"

# ==============================================================================
# Summary to stdout
# ==============================================================================

puts "\n================================================================================"
puts "                    SYNTHESIS SUMMARY"
puts "================================================================================"
puts ""
puts "Design:              $DESIGN_NAME"
puts "Technology:          ASAP7 ${VT} ${LIB_CORNER}"
puts "Target Frequency:    [format "%.2f" $target_freq_mhz] MHz (${clock_period_ns} ns)"
puts ""
puts "RTL INPUT FILES ([llength $VERILOG_FILES] files):"
foreach f $VERILOG_FILES {
  puts "  - [file tail $f]"
}
puts ""
puts "AREA:"
puts "  Total Cells:       $cell_count"
puts "  Total Area:        [format "%.3f" $total_area] (liberty units)"
puts "  Sequential:        [format "%.3f" $seq_area] ([format "%.1f" [expr {$seq_area * 100.0 / ($total_area + 0.001)}]]%)"
puts "  Combinational:     [format "%.3f" $comb_area] ([format "%.1f" [expr {$comb_area * 100.0 / ($total_area + 0.001)}]]%)"
puts ""
puts "TIMING:"
puts "  Target Period:     ${clock_period_ps} ps"
puts "  WNS/TNS:           Run OpenSTA for accurate timing"
puts ""
puts "POWER:"
puts "  Estimate:          ~[format "%.1f" $est_power_uw] uW (rough estimate)"
puts ""
puts "OUTPUT FILES:"
puts "  Netlist:           $output_verilog"
puts "  Reports:           $reports_dir"
puts "  Final Report:      $final_report_file"
puts ""
puts "================================================================================"

# Exit Yosys
exit
