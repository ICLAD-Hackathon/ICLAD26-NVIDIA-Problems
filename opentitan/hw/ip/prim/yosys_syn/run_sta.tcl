#
# OpenSTA timing analysis script for OpenTitan Prim post-synthesis timing reports
# Run after synthesis to get accurate WNS/TNS
#
# Usage:
#   sta run_sta.tcl
#
# Or with environment variables:
#   ASAP7_LIB_DIR=/path/to/libs VT=RVT CORNER=TT DESIGN_NAME=prim_crc32 sta run_sta.tcl
#
# Output files ($DESIGN_NAME from environment, e.g. prim_crc32):
#   reports/${DESIGN_NAME}_sta_timing_report.txt  - Main timing summary with tables
#   reports/${DESIGN_NAME}_sta_timing_paths.txt   - Detailed timing path reports
#   reports/${DESIGN_NAME}_sta_power_report.txt   - Power analysis report
#

# Configuration
set script_dir [file dirname [file normalize [info script]]]
set results_dir [file join $script_dir syn_results]
set reports_dir [file join $script_dir reports]

# Create reports directory
file mkdir $reports_dir

# Environment defaults
proc env_or_default { name default_val } {
  if {[info exists ::env($name)] && $::env($name) ne ""} {
    return $::env($name)
  }
  return $default_val
}

set ASAP7_DIR [env_or_default ASAP7_LIB_DIR /workspace/techlib/asap7sc7p5t_28/LIB/NLDM]
set VT [env_or_default VT RVT]
set CORNER [env_or_default CORNER TT]
set DESIGN_NAME [env_or_default DESIGN_NAME prim_crc32]

# Map corner
switch $CORNER {
  FF { set LIB_CORNER FF }
  SS { set LIB_CORNER SS }
  default { set LIB_CORNER TT }
}

puts "================================================================================"
puts "                    OpenSTA Timing Analysis"
puts "================================================================================"
puts "Design:     $DESIGN_NAME"
puts "Technology: ASAP7 ${VT} ${LIB_CORNER}"
puts ""

# Read liberty files
puts "Reading liberty files..."
set lib_files [list \
  [file join $ASAP7_DIR asap7sc7p5t_AO_${VT}_${LIB_CORNER}_nldm_211120.lib] \
  [file join $ASAP7_DIR asap7sc7p5t_INVBUF_${VT}_${LIB_CORNER}_nldm_220122.lib] \
  [file join $ASAP7_DIR asap7sc7p5t_OA_${VT}_${LIB_CORNER}_nldm_211120.lib] \
  [file join $ASAP7_DIR asap7sc7p5t_SIMPLE_${VT}_${LIB_CORNER}_nldm_211120.lib] \
  [file join $ASAP7_DIR asap7sc7p5t_SEQ_${VT}_${LIB_CORNER}_nldm_220123.lib] \
]

foreach lib $lib_files {
  if {[file exists $lib]} {
    read_liberty $lib
    puts "  Loaded: [file tail $lib]"
  } else {
    puts "  WARNING: Not found: $lib"
  }
}

# Read netlist - try syn_results first, then script_dir
set netlist_file [file join $results_dir ${DESIGN_NAME}_syn.v]
if {![file exists $netlist_file]} {
  set netlist_file [file join $script_dir ${DESIGN_NAME}_syn.v]
}
if {![file exists $netlist_file]} {
  set netlist_file [file join $script_dir results ${DESIGN_NAME}_syn.v]
}
puts "\nReading netlist: $netlist_file"
read_verilog $netlist_file
link_design $DESIGN_NAME

# Read SDC - dynamically select based on DESIGN_NAME
# Look for <DESIGN_NAME>_constraint.sdc first, then fall back to constraint.sdc
set design_sdc_file [file join $script_dir ${DESIGN_NAME}_constraint.sdc]
if {[file exists $design_sdc_file]} {
  set sdc_file [env_or_default SDC_FILE $design_sdc_file]
} else {
  set sdc_file [env_or_default SDC_FILE [file join $script_dir constraint.sdc]]
}

if {[file exists $sdc_file]} {
  puts "Reading SDC: $sdc_file"
  read_sdc $sdc_file
} else {
  puts "WARNING: SDC file not found, using default clock"
  # OpenTitan prim modules typically use clk_i (125 MHz = 8000 ps period)
  create_clock -name clk_i -period 8000 [get_ports clk_i]
}

# ==============================================================================
# Output file paths
# ==============================================================================
set timing_report_file [file join $reports_dir ${DESIGN_NAME}_sta_timing_report.txt]
set timing_paths_file [file join $reports_dir ${DESIGN_NAME}_sta_timing_paths.txt]
set power_report_file [file join $reports_dir ${DESIGN_NAME}_sta_power_report.txt]

puts "\nGenerating reports:"
puts "  Timing summary: $timing_report_file"
puts "  Timing paths:   $timing_paths_file"
puts "  Power report:   $power_report_file"

# Open report files
set rpt [open $timing_report_file w]
set rpt_paths [open $timing_paths_file w]
set rpt_power [open $power_report_file w]

# ==============================================================================
# Helper procedures
# ==============================================================================

# Write to both stdout and main report file
proc tee { msg } {
  global rpt
  puts $msg
  puts $rpt $msg
}

# Write to specific file handle
proc fwrite { fh msg } {
  puts $fh $msg
}

# Write to both stdout and specific file handle
proc tee_fh { fh msg } {
  puts $msg
  puts $fh $msg
}

# Run STA command and capture output to temp file, then write to specified handle
proc sta_cmd_to_fh { fh cmd } {
  global reports_dir
  set tmpfile [file join $reports_dir .sta_tmp.txt]
  
  if {[catch {eval $cmd > $tmpfile} err]} {
    puts $fh "Error running: $cmd"
    return ""
  }
  
  if {[file exists $tmpfile]} {
    set f [open $tmpfile r]
    set content [read $f]
    close $f
    puts -nonewline $fh $content
    file delete $tmpfile
    return $content
  }
  return ""
}

# Run STA command and capture output to both stdout and file handle
proc tee_sta_cmd_fh { fh cmd } {
  global reports_dir
  set tmpfile [file join $reports_dir .sta_tmp.txt]
  
  if {[catch {eval $cmd > $tmpfile} err]} {
    puts "Error running: $cmd"
    puts $fh "Error running: $cmd"
    return ""
  }
  
  if {[file exists $tmpfile]} {
    set f [open $tmpfile r]
    set content [read $f]
    close $f
    puts -nonewline $content
    puts -nonewline $fh $content
    file delete $tmpfile
    return $content
  }
  return ""
}

# Legacy wrapper for main report
proc tee_sta_cmd { cmd } {
  global rpt
  return [tee_sta_cmd_fh $rpt $cmd]
}

# Extract numeric value from STA command output
proc get_sta_value { cmd } {
  global reports_dir
  set tmpfile [file join $reports_dir .sta_tmp.txt]
  
  if {[catch {eval $cmd > $tmpfile} err]} {
    return "N/A"
  }
  
  if {[file exists $tmpfile]} {
    set f [open $tmpfile r]
    set output [string trim [read $f]]
    close $f
    file delete $tmpfile
    
    if {[regexp {([-\d.eE+]+)\s*$} $output match val]} {
      return $val
    }
  }
  return "N/A"
}

# Format time value with unit conversion (ps to ns)
proc format_time_ps_ns { val_ps } {
  if {$val_ps eq "N/A" || $val_ps eq ""} {
    return "N/A"
  }
  set val_ns [format "%.4f" [expr {$val_ps / 1000.0}]]
  return "${val_ps} ps (${val_ns} ns)"
}

# ==============================================================================
# Set timing units
# ==============================================================================
if {[catch {set_cmd_units -time ps -capacitance ff -resistance ohm} err]} {
  puts "Note: Using default units from liberty file (ASAP7 uses ps)"
}

# ==============================================================================
# Collect design statistics
# ==============================================================================

# Count cells by type
set cell_count 0
set seq_count 0
set comb_count 0
array set cell_types {}

foreach inst [get_cells -hierarchical *] {
  set cell [get_property $inst ref_name]
  incr cell_count
  
  if {[info exists cell_types($cell)]} {
    incr cell_types($cell)
  } else {
    set cell_types($cell) 1
  }
  
  if {[regexp -nocase {DFF|ASYNC|SYNC|LATCH|REG|FF} $cell]} {
    incr seq_count
  } else {
    incr comb_count
  }
}

# ==============================================================================
# Collect timing metrics
# ==============================================================================

# WNS/TNS Setup
set wns_setup [get_sta_value {report_wns}]
set tns_setup [get_sta_value {report_tns}]

# WNS/TNS Hold
set wns_hold [get_sta_value {report_wns -min}]
set tns_hold [get_sta_value {report_tns -min}]

# Worst slack
set worst_slack_setup [get_sta_value {report_worst_slack -max}]
set worst_slack_hold [get_sta_value {report_worst_slack -min}]

# ==============================================================================
# Collect clock information
# ==============================================================================
set clock_info {}
foreach clk [all_clocks] {
  set clk_name [get_name $clk]
  set period [get_property $clk period]
  set sources [get_property $clk sources]
  
  if {$period > 100} {
    set period_ns [expr {$period / 1000.0}]
    set freq_mhz [format "%.2f" [expr {1000000.0 / $period}]]
  } else {
    set period_ns $period
    set freq_mhz [format "%.2f" [expr {1000.0 / $period}]]
  }
  
  lappend clock_info [list $clk_name $period $period_ns $freq_mhz $sources]
}

# ==============================================================================
# Collect clock skew information
# ==============================================================================
set skew_setup_output [get_sta_value {report_clock_skew -setup}]
set skew_hold_output [get_sta_value {report_clock_skew -hold}]

# ==============================================================================
# Collect ERC metrics (slew, capacitance, fanout violations)
# ==============================================================================
set max_slew_slack "N/A"
set max_cap_slack "N/A"
set max_fanout_slack "N/A"
set max_slew_limit "N/A"
set max_cap_limit "N/A"
set max_fanout_limit "N/A"

catch {set max_slew_slack [sta::max_slew_check_slack]}
catch {set max_cap_slack [sta::max_capacitance_check_slack]}
catch {set max_fanout_slack [sta::max_fanout_check_slack]}
catch {set max_slew_limit [sta::max_slew_check_limit]}
catch {set max_cap_limit [sta::max_capacitance_check_limit]}
catch {set max_fanout_limit [sta::max_fanout_check_limit]}

set slew_violations 0
set cap_violations 0
set fanout_violations 0
catch {set slew_violations [sta::max_slew_violation_count]}
catch {set cap_violations [sta::max_capacitance_violation_count]}
catch {set fanout_violations [sta::max_fanout_violation_count]}

# ==============================================================================
# MAIN TIMING REPORT
# ==============================================================================

set report_date [clock format [clock seconds] -format {%Y-%m-%d %H:%M:%S}]

tee "================================================================================"
tee "                    OpenSTA TIMING REPORT"
tee "================================================================================"
tee ""
tee "Design:     $DESIGN_NAME"
tee "Technology: ASAP7 ${VT} ${LIB_CORNER}"
tee "Date:       $report_date"
tee ""

tee "--------------------------------------------------------------------------------"
tee "                         INPUT FILES"
tee "--------------------------------------------------------------------------------"
tee ""
tee "Synthesized Netlist: $netlist_file"
tee "SDC Constraints:     $sdc_file"
tee ""
tee "Liberty Files:"
foreach lib $lib_files {
  if {[file exists $lib]} {
    tee "  [file tail $lib]"
  }
}
tee ""

tee "--------------------------------------------------------------------------------"
tee "                         TIMING UNITS"
tee "--------------------------------------------------------------------------------"
tee ""
tee "  Time:        picoseconds (ps)"
tee "  Capacitance: femtofarads (fF)"
tee "  Resistance:  ohms"
tee ""

# ==============================================================================
# TIMING SUMMARY TABLE
# ==============================================================================

tee "================================================================================"
tee "                         TIMING SUMMARY TABLE"
tee "================================================================================"
tee ""
tee "+----------------------+------------------+------------------+"
tee "| Metric               | Setup (max)      | Hold (min)       |"
tee "+----------------------+------------------+------------------+"

# Format WNS
if {$wns_setup ne "N/A" && $wns_setup ne ""} {
  set wns_setup_str [format "%10.2f ps" $wns_setup]
} else {
  set wns_setup_str [format "%14s" "N/A"]
}
if {$wns_hold ne "N/A" && $wns_hold ne ""} {
  set wns_hold_str [format "%10.2f ps" $wns_hold]
} else {
  set wns_hold_str [format "%14s" "N/A"]
}
tee [format "| %-20s | %16s | %16s |" "WNS" $wns_setup_str $wns_hold_str]

# Format TNS
if {$tns_setup ne "N/A" && $tns_setup ne ""} {
  set tns_setup_str [format "%10.2f ps" $tns_setup]
} else {
  set tns_setup_str [format "%14s" "N/A"]
}
if {$tns_hold ne "N/A" && $tns_hold ne ""} {
  set tns_hold_str [format "%10.2f ps" $tns_hold]
} else {
  set tns_hold_str [format "%14s" "N/A"]
}
tee [format "| %-20s | %16s | %16s |" "TNS" $tns_setup_str $tns_hold_str]

# Format Worst Slack
if {$worst_slack_setup ne "N/A" && $worst_slack_setup ne ""} {
  set ws_setup_str [format "%10.2f ps" $worst_slack_setup]
} else {
  set ws_setup_str [format "%14s" "N/A"]
}
if {$worst_slack_hold ne "N/A" && $worst_slack_hold ne ""} {
  set ws_hold_str [format "%10.2f ps" $worst_slack_hold]
} else {
  set ws_hold_str [format "%14s" "N/A"]
}
tee [format "| %-20s | %16s | %16s |" "Worst Slack" $ws_setup_str $ws_hold_str]

tee "+----------------------+------------------+------------------+"
tee ""

# Timing status
if {$wns_setup ne "N/A" && $wns_setup >= 0} {
  tee "  Setup Timing: PASSED (positive slack)"
} elseif {$wns_setup ne "N/A"} {
  tee "  Setup Timing: FAILED (negative slack: $wns_setup ps)"
} else {
  tee "  Setup Timing: UNKNOWN"
}

if {$wns_hold ne "N/A" && $wns_hold >= 0} {
  tee "  Hold Timing:  PASSED (positive slack)"
} elseif {$wns_hold ne "N/A"} {
  tee "  Hold Timing:  FAILED (negative slack: $wns_hold ps)"
} else {
  tee "  Hold Timing:  UNKNOWN"
}
tee ""

# ==============================================================================
# CLOCK TABLE
# ==============================================================================

tee "================================================================================"
tee "                         CLOCK DEFINITIONS TABLE"
tee "================================================================================"
tee ""
tee "+------------------+------------+------------+------------+"
tee "| Clock Name       | Period(ps) | Period(ns) | Freq(MHz)  |"
tee "+------------------+------------+------------+------------+"

foreach clk_entry $clock_info {
  set clk_name [lindex $clk_entry 0]
  set period_ps [lindex $clk_entry 1]
  set period_ns [lindex $clk_entry 2]
  set freq_mhz [lindex $clk_entry 3]
  
  tee [format "| %-16s | %10.2f | %10.4f | %10s |" $clk_name $period_ps $period_ns $freq_mhz]
}

tee "+------------------+------------+------------+------------+"
tee ""

# ==============================================================================
# CLOCK SKEW TABLE
# ==============================================================================

tee "================================================================================"
tee "                         CLOCK SKEW ANALYSIS"
tee "================================================================================"
tee ""
tee "Setup Clock Skew:"
tee_sta_cmd {report_clock_skew -setup}
tee ""
tee "Hold Clock Skew:"
tee_sta_cmd {report_clock_skew -hold}
tee ""

# ==============================================================================
# ERC VIOLATIONS TABLE
# ==============================================================================

tee "================================================================================"
tee "                         DESIGN RULE CHECK (ERC) TABLE"
tee "================================================================================"
tee ""
tee "+----------------------+------------------+------------------+------------------+"
tee "| Check Type           | Slack            | Limit            | Violations       |"
tee "+----------------------+------------------+------------------+------------------+"

# Max Slew
if {$max_slew_slack ne "N/A" && [string is double $max_slew_slack]} {
  set slew_slack_str [format "%12.2f ps" $max_slew_slack]
} else {
  set slew_slack_str [format "%14s" "N/A"]
}
if {$max_slew_limit ne "N/A" && [string is double $max_slew_limit] && $max_slew_limit < 1e30} {
  set slew_limit_str [format "%12.2f ps" $max_slew_limit]
} else {
  set slew_limit_str [format "%14s" "N/A"]
}
tee [format "| %-20s | %16s | %16s | %16d |" "Max Slew" $slew_slack_str $slew_limit_str $slew_violations]

# Max Capacitance
if {$max_cap_slack ne "N/A" && [string is double $max_cap_slack]} {
  set cap_slack_str [format "%12.2f fF" $max_cap_slack]
} else {
  set cap_slack_str [format "%14s" "N/A"]
}
if {$max_cap_limit ne "N/A" && [string is double $max_cap_limit] && $max_cap_limit < 1e30} {
  set cap_limit_str [format "%12.2f fF" $max_cap_limit]
} else {
  set cap_limit_str [format "%14s" "N/A"]
}
tee [format "| %-20s | %16s | %16s | %16d |" "Max Capacitance" $cap_slack_str $cap_limit_str $cap_violations]

# Max Fanout
if {$max_fanout_slack ne "N/A" && [string is double $max_fanout_slack]} {
  set fanout_slack_str [format "%12.2f" $max_fanout_slack]
} else {
  set fanout_slack_str [format "%14s" "N/A"]
}
if {$max_fanout_limit ne "N/A" && [string is double $max_fanout_limit] && $max_fanout_limit < 1e30} {
  set fanout_limit_str [format "%12.2f" $max_fanout_limit]
} else {
  set fanout_limit_str [format "%14s" "N/A"]
}
tee [format "| %-20s | %16s | %16s | %16d |" "Max Fanout" $fanout_slack_str $fanout_limit_str $fanout_violations]

tee "+----------------------+------------------+------------------+------------------+"
tee ""

# ERC Detailed Report
if {$slew_violations > 0 || $cap_violations > 0 || $fanout_violations > 0} {
  tee "ERC Violators:"
  tee_sta_cmd {report_check_types -max_slew -max_capacitance -max_fanout -violators}
  tee ""
}

# ==============================================================================
# CELL COUNT TABLE
# ==============================================================================

tee "================================================================================"
tee "                         CELL COUNT TABLE"
tee "================================================================================"
tee ""
tee "+----------------------+------------------+"
tee "| Category             | Count            |"
tee "+----------------------+------------------+"
tee [format "| %-20s | %16d |" "Total Cells" $cell_count]
tee [format "| %-20s | %16d |" "Sequential" $seq_count]
tee [format "| %-20s | %16d |" "Combinational" $comb_count]
tee "+----------------------+------------------+"
tee ""

tee "Cell Type Breakdown (top 20):"
tee "+------------------------------------------+------------+"
tee "| Cell Type                                | Count      |"
tee "+------------------------------------------+------------+"

set sorted_cells {}
foreach {cell count} [array get cell_types] {
  lappend sorted_cells [list $cell $count]
}
set sorted_cells [lsort -index 1 -integer -decreasing $sorted_cells]

set idx 0
foreach item $sorted_cells {
  if {$idx >= 20} break
  set cell [lindex $item 0]
  set count [lindex $item 1]
  tee [format "| %-40s | %10d |" $cell $count]
  incr idx
}
tee "+------------------------------------------+------------+"
tee ""

# ==============================================================================
# References to other reports
# ==============================================================================

tee "================================================================================"
tee "                         ADDITIONAL REPORTS"
tee "================================================================================"
tee ""
tee "  Detailed Timing Paths: $timing_paths_file"
tee "  Power Analysis:        $power_report_file"
tee "  Yosys Synthesis:       [file join $results_dir ${DESIGN_NAME}_synth_final_report.txt]"
tee ""

tee "================================================================================"
tee "                         END OF TIMING REPORT"
tee "================================================================================"

close $rpt

# ==============================================================================
# TIMING PATHS REPORT (separate file)
# ==============================================================================

puts "\nGenerating detailed timing paths report..."

fwrite $rpt_paths "================================================================================"
fwrite $rpt_paths "                    OpenSTA DETAILED TIMING PATHS REPORT"
fwrite $rpt_paths "================================================================================"
fwrite $rpt_paths ""
fwrite $rpt_paths "Design:     $DESIGN_NAME"
fwrite $rpt_paths "Technology: ASAP7 ${VT} ${LIB_CORNER}"
fwrite $rpt_paths "Date:       $report_date"
fwrite $rpt_paths ""

fwrite $rpt_paths "================================================================================"
fwrite $rpt_paths "                    SETUP TIMING PATHS (MAX DELAY)"
fwrite $rpt_paths "================================================================================"
fwrite $rpt_paths ""
fwrite $rpt_paths "Top 10 Critical Setup Paths:"
fwrite $rpt_paths "--------------------------------------------------------------------------------"
sta_cmd_to_fh $rpt_paths {report_checks -path_delay max -format full_clock_expanded -digits 4 -endpoint_count 10}
fwrite $rpt_paths ""

fwrite $rpt_paths "================================================================================"
fwrite $rpt_paths "                    HOLD TIMING PATHS (MIN DELAY)"
fwrite $rpt_paths "================================================================================"
fwrite $rpt_paths ""
fwrite $rpt_paths "Top 10 Critical Hold Paths:"
fwrite $rpt_paths "--------------------------------------------------------------------------------"
sta_cmd_to_fh $rpt_paths {report_checks -path_delay min -format full_clock_expanded -digits 4 -endpoint_count 10}
fwrite $rpt_paths ""

# Register-to-Register paths
fwrite $rpt_paths "================================================================================"
fwrite $rpt_paths "                    REGISTER-TO-REGISTER PATHS"
fwrite $rpt_paths "================================================================================"
fwrite $rpt_paths ""

if {[llength [all_registers]] > 0} {
  fwrite $rpt_paths "Setup (Max Delay) - Register to Register:"
  fwrite $rpt_paths "--------------------------------------------------------------------------------"
  sta_cmd_to_fh $rpt_paths {report_checks -path_delay max -from [all_registers] -to [all_registers] -format full_clock_expanded -digits 4 -endpoint_count 5}
  fwrite $rpt_paths ""
  
  fwrite $rpt_paths "Hold (Min Delay) - Register to Register:"
  fwrite $rpt_paths "--------------------------------------------------------------------------------"
  sta_cmd_to_fh $rpt_paths {report_checks -path_delay min -from [all_registers] -to [all_registers] -format full_clock_expanded -digits 4 -endpoint_count 5}
  fwrite $rpt_paths ""
} else {
  fwrite $rpt_paths "No registers found in design."
  fwrite $rpt_paths ""
}

# Input to Register paths
fwrite $rpt_paths "================================================================================"
fwrite $rpt_paths "                    INPUT-TO-REGISTER PATHS"
fwrite $rpt_paths "================================================================================"
fwrite $rpt_paths ""
fwrite $rpt_paths "Setup (Max Delay) - Input to Register:"
fwrite $rpt_paths "--------------------------------------------------------------------------------"
sta_cmd_to_fh $rpt_paths {report_checks -path_delay max -from [all_inputs] -to [all_registers] -format full_clock_expanded -digits 4 -endpoint_count 5}
fwrite $rpt_paths ""

# Register to Output paths
fwrite $rpt_paths "================================================================================"
fwrite $rpt_paths "                    REGISTER-TO-OUTPUT PATHS"
fwrite $rpt_paths "================================================================================"
fwrite $rpt_paths ""
fwrite $rpt_paths "Setup (Max Delay) - Register to Output:"
fwrite $rpt_paths "--------------------------------------------------------------------------------"
sta_cmd_to_fh $rpt_paths {report_checks -path_delay max -from [all_registers] -to [all_outputs] -format full_clock_expanded -digits 4 -endpoint_count 5}
fwrite $rpt_paths ""

# Unconstrained endpoints
fwrite $rpt_paths "================================================================================"
fwrite $rpt_paths "                    UNCONSTRAINED ENDPOINTS"
fwrite $rpt_paths "================================================================================"
fwrite $rpt_paths ""
sta_cmd_to_fh $rpt_paths {report_checks -unconstrained -format end -digits 4}
fwrite $rpt_paths ""

fwrite $rpt_paths "================================================================================"
fwrite $rpt_paths "                    END OF TIMING PATHS REPORT"
fwrite $rpt_paths "================================================================================"

close $rpt_paths

# ==============================================================================
# POWER REPORT (separate file)
# ==============================================================================

puts "Generating power analysis report..."

fwrite $rpt_power "================================================================================"
fwrite $rpt_power "                    OpenSTA POWER ANALYSIS REPORT"
fwrite $rpt_power "================================================================================"
fwrite $rpt_power ""
fwrite $rpt_power "Design:     $DESIGN_NAME"
fwrite $rpt_power "Technology: ASAP7 ${VT} ${LIB_CORNER}"
fwrite $rpt_power "Date:       $report_date"
fwrite $rpt_power ""

fwrite $rpt_power "================================================================================"
fwrite $rpt_power "                         POWER SUMMARY TABLE"
fwrite $rpt_power "================================================================================"
fwrite $rpt_power ""
fwrite $rpt_power "Note: Power values are estimates based on liberty file characterization."
fwrite $rpt_power "      For accurate power, provide switching activity via VCD/SAIF files."
fwrite $rpt_power ""

fwrite $rpt_power "--------------------------------------------------------------------------------"
fwrite $rpt_power "                    DESIGN POWER REPORT"
fwrite $rpt_power "--------------------------------------------------------------------------------"
fwrite $rpt_power ""
sta_cmd_to_fh $rpt_power {report_power}
fwrite $rpt_power ""

fwrite $rpt_power "--------------------------------------------------------------------------------"
fwrite $rpt_power "                    TOP POWER CONSUMING INSTANCES"
fwrite $rpt_power "--------------------------------------------------------------------------------"
fwrite $rpt_power ""
fwrite $rpt_power "Top 20 Power Consuming Instances:"
fwrite $rpt_power ""
catch {sta_cmd_to_fh $rpt_power {report_power -instances -highest_power_instances 20}}
fwrite $rpt_power ""

# Power breakdown by cell type (estimate)
fwrite $rpt_power "================================================================================"
fwrite $rpt_power "                    POWER BREAKDOWN BY CELL CATEGORY"
fwrite $rpt_power "================================================================================"
fwrite $rpt_power ""
fwrite $rpt_power "+----------------------+------------+---------------------+"
fwrite $rpt_power "| Category             | Cell Count | Est. Power Contrib. |"
fwrite $rpt_power "+----------------------+------------+---------------------+"
fwrite $rpt_power [format "| %-20s | %10d | %17s%% |" "Sequential" $seq_count [format "%.1f" [expr {100.0 * $seq_count / max($cell_count, 1)}]]]
fwrite $rpt_power [format "| %-20s | %10d | %17s%% |" "Combinational" $comb_count [format "%.1f" [expr {100.0 * $comb_count / max($cell_count, 1)}]]]
fwrite $rpt_power "+----------------------+------------+---------------------+"
fwrite $rpt_power ""

fwrite $rpt_power "Note: Power contribution percentages are rough estimates based on cell count."
fwrite $rpt_power "      Actual power depends on switching activity and cell-specific power models."
fwrite $rpt_power ""

# Clock information for power context
fwrite $rpt_power "================================================================================"
fwrite $rpt_power "                    CLOCK INFORMATION (Power Context)"
fwrite $rpt_power "================================================================================"
fwrite $rpt_power ""
fwrite $rpt_power "+------------------+------------+------------+"
fwrite $rpt_power "| Clock Name       | Freq(MHz)  | Registers  |"
fwrite $rpt_power "+------------------+------------+------------+"

foreach clk_entry $clock_info {
  set clk_name [lindex $clk_entry 0]
  set freq_mhz [lindex $clk_entry 3]
  fwrite $rpt_power [format "| %-16s | %10s | %10d |" $clk_name $freq_mhz $seq_count]
}

fwrite $rpt_power "+------------------+------------+------------+"
fwrite $rpt_power ""

fwrite $rpt_power "Power Scaling Notes:"
fwrite $rpt_power "  - Dynamic power scales linearly with frequency"
fwrite $rpt_power "  - Dynamic power scales with V^2"
fwrite $rpt_power "  - Leakage power is frequency-independent"
fwrite $rpt_power ""

fwrite $rpt_power "================================================================================"
fwrite $rpt_power "                    END OF POWER REPORT"
fwrite $rpt_power "================================================================================"

close $rpt_power

# ==============================================================================
# Final summary
# ==============================================================================

puts ""
puts "================================================================================"
puts "                    ANALYSIS COMPLETE"
puts "================================================================================"
puts ""
puts "Reports generated:"
puts "  1. Timing Summary:  $timing_report_file"
puts "  2. Timing Paths:    $timing_paths_file"
puts "  3. Power Analysis:  $power_report_file"
puts ""
puts "Quick Results:"
puts "  WNS Setup: $wns_setup ps"
puts "  WNS Hold:  $wns_hold ps"
puts "  TNS Setup: $tns_setup ps"
puts "  Cells:     $cell_count ($seq_count seq, $comb_count comb)"
puts ""

exit
