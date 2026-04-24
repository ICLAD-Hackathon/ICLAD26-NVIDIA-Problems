#!/usr/bin/env yosys
#
# Yosys synthesis script for OpenTitan ASCON with ASAP7 PDK
# Uses sv2v for SystemVerilog to Verilog conversion
#
# Usage:
#   yosys -c syn.tcl
#
# Environment variables (optional):
#   DESIGN_NAME           - Top module name (default: ascon)
#   ASAP7_LIB_DIR         - Path to ASAP7 NLDM liberty files (default: /workspace/techlib/asap7sc7p5t_28/LIB/NLDM)
#   VT                    - Voltage threshold: RVT, LVT, SLVT (default: RVT)
#   CORNER                - PVT corner: TT, FF, SS (default: TT)
#   ABC_AREA              - Set to 1 for area optimization, 0 for speed (default: 1 = area)
#   FLATTEN               - Set to 1 to flatten hierarchy (default: 1)
#   ABC_CLOCK_PERIOD_IN_PS - Clock period for ABC timing in ps (default: from SDC or 8000 ps)
#   SDC_FILE              - Path to SDC constraint file (default: constraint.sdc)
#   SKIP_SV2V             - Set to 1 to skip sv2v conversion (if already done)
#   POST_SYNTH_TCL        - Optional TCL file to source after synthesis
#
# Defaults for OpenTitan ASCON:
#   - SDC file: constraint.sdc (defines clk_i at 125 MHz / 8 ns)
#   - ABC optimization: area (default)
#   - Clock period: 8000 ps (8 ns, 125 MHz) from SDC
#   - Output directory: syn_results/
#
# Included files:
#   synth_util.tcl     - Utility functions (env_var_*, log_cmd, etc.)
#   synth_stdcells.tcl - Read liberty files
#   synth_abc.tcl      - ABC technology mapping with timing constraints
#   abc_area.script    - ABC area optimization script
#   abc_speed.script   - ABC speed optimization script
#   constraint.sdc     - SDC constraints for OpenTitan ASCON

yosys -import

# ==============================================================================
# Script directory and utility functions
# ==============================================================================

set script_dir [file dirname [file normalize [info script]]]

# Source utility functions
source [file join $script_dir synth_util.tcl]

# ==============================================================================
# Configuration
# ==============================================================================

set results_dir [file join $script_dir syn_results]
set reports_dir [file join $script_dir syn_results]
set generated_dir [file join $script_dir generated]

# Create output directories
file mkdir $results_dir
file mkdir $generated_dir

# Design configuration (configurable via environment variables)
set DESIGN_NAME [env_var_or_default DESIGN_NAME ascon]
set SKIP_SV2V [env_var_or_default SKIP_SV2V 0]

# ASAP7 library paths
set ASAP7_DIR [env_var_or_default ASAP7_LIB_DIR /workspace/techlib/asap7sc7p5t_28/LIB/NLDM]
set VT [env_var_or_default VT RVT]
set CORNER [env_var_or_default CORNER TT]
set ABC_AREA [env_var_or_default ABC_AREA 1]
set FLATTEN [env_var_or_default FLATTEN 1]

# SDC constraint file (default: constraint.sdc in script directory)
set SDC_FILE [env_var_or_default SDC_FILE [file join $script_dir constraint.sdc]]

# Clock period for ABC timing (default: read from SDC or 8000 ps = 125 MHz)
if {![env_var_exists_and_non_empty ABC_CLOCK_PERIOD_IN_PS]} {
  set ::env(SDC_FILE) $SDC_FILE
}

# Parse filelist
set VERILOG_FILELIST [env_var_or_default VERILOG_FILELIST [file join $script_dir ascon_yosys.f]]

# Initialize lists
set VERILOG_FILES [list]
set INCLUDE_DIRS [list]

# Resolve relative path from script directory
if {$VERILOG_FILELIST ne "" && ![file exists $VERILOG_FILELIST]} {
  set VERILOG_FILELIST [file normalize [file join $script_dir $VERILOG_FILELIST]]
}

if {$VERILOG_FILELIST ne "" && [file exists $VERILOG_FILELIST]} {
  puts "Parsing filelist: $VERILOG_FILELIST"
  set fp [open $VERILOG_FILELIST r]
  set filelist_content [read $fp]
  close $fp
  
  set filelist_dir [file dirname $VERILOG_FILELIST]
  
  # Parse include dirs (-I) and verilog files
  set inc_dirs [list]
  set vfiles [list]
  
  foreach line [split $filelist_content "\n"] {
    set line [string trim $line]
    # Skip empty lines and comments
    if {$line eq "" || [string match "#*" $line]} continue
    # Skip define flags
    if {[string match "-D*" $line]} continue
    if {[string match "-W*" $line]} continue
    if {[string match "--top*" $line]} continue
    
    # Include directory: -I<path> or -I <path>
    if {[regexp {^-I\s*(.+)$} $line match inc_dir]} {
      set inc_dir [string trim $inc_dir]
      set inc_dir [file normalize [file join $filelist_dir $inc_dir]]
      if {[file exists $inc_dir]} {
        lappend inc_dirs $inc_dir
      }
      continue
    }
    
    # Verilog file with -v flag
    if {[regexp {^-v\s+(.+)$} $line match vfile] || [regexp {^-v(.+)$} $line match vfile]} {
      set vfile [string trim $vfile]
      set vfile [file normalize [file join $filelist_dir $vfile]]
      if {[file exists $vfile]} {
        lappend vfiles $vfile
      } else {
        puts "  WARNING: File not found: $vfile"
      }
      continue
    }
    
    # Plain verilog file path (.v or .sv)
    if {[string match "*.v" $line] || [string match "*.sv" $line]} {
      set vfile [file normalize [file join $filelist_dir $line]]
      if {[file exists $vfile]} {
        lappend vfiles $vfile
      } else {
        puts "  WARNING: File not found: $vfile"
      }
    }
  }
  
  set INCLUDE_DIRS $inc_dirs
  set VERILOG_FILES $vfiles
  
  puts "  Found [llength $inc_dirs] include directories"
  puts "  Found [llength $vfiles] Verilog/SystemVerilog files"
}

puts "=============================================="
puts "Design:  $DESIGN_NAME"
puts "VT:      $VT"
puts "Corner:  $CORNER"
puts "ABC:     [expr {$ABC_AREA ? {area} : {speed}}]"
puts "Flatten: $FLATTEN"
puts "SDC:     $SDC_FILE"
puts "RTL Files: [llength $VERILOG_FILES]"
puts "=============================================="

# ==============================================================================
# sv2v conversion - Convert SystemVerilog to Verilog
# Following the pre_syn approach: convert each module separately with packages
# ==============================================================================

puts "\n=== sv2v Conversion ==="

# List of converted files for Yosys to read
set CONVERTED_FILES [list]

if {$SKIP_SV2V} {
  puts "  Skipping sv2v conversion (SKIP_SV2V=1)"
  puts "  Using existing files in: $generated_dir"
  
  # Use existing converted files
  foreach f [glob -nocomplain [file join $generated_dir *.v]] {
    lappend CONVERTED_FILES $f
  }
} else {
  puts "  Running sv2v conversion (pre_syn style: one file per module)..."
  
  # Create output directory
  file mkdir $generated_dir
  
  # Separate package files from module files
  set pkg_files [list]
  set mod_files [list]
  
  foreach f $VERILOG_FILES {
    if {[string match "*_pkg.sv" $f] || [string match "*_pkg.v" $f]} {
      lappend pkg_files $f
    } else {
      lappend mod_files $f
    }
  }
  
  puts "  Package files: [llength $pkg_files] (used for type resolution)"
  puts "  Module files:  [llength $mod_files] (to be converted)"
  
  # Build include directory arguments for sv2v
  set sv2v_inc_args ""
  foreach inc_dir $INCLUDE_DIRS {
    append sv2v_inc_args "-I$inc_dir "
  }
  
  # Build package arguments for sv2v (packages passed to each conversion for type resolution)
  set sv2v_pkg_args ""
  foreach pkg $pkg_files {
    append sv2v_pkg_args "$pkg "
  }
  
  # Convert each module file separately (like pre_syn does)
  set convert_count 0
  set error_count 0
  
  foreach file $mod_files {
    set module [file rootname [file tail $file]]
    set out_file [file join $generated_dir ${module}.v]
    
    # Build sv2v command: packages first, then the single module file
    set sv2v_cmd "sv2v --define=SYNTHESIS --define=YOSYS $sv2v_inc_args $sv2v_pkg_args $file"
    
    # Run sv2v via exec
    if {[catch {
      exec sh -c "$sv2v_cmd > $out_file 2>&1"
    } err]} {
      # Check if output file has content despite error
      if {[file exists $out_file] && [file size $out_file] > 100} {
        # Check if it's actually an error message
        set fp [open $out_file r]
        set first_line [gets $fp]
        close $fp
        if {[string match "sv2v:*" $first_line]} {
          puts "  ERROR: $module - $first_line"
          incr error_count
          continue
        }
      } else {
        puts "  ERROR: $module - sv2v failed"
        incr error_count
        continue
      }
    }
    
    # Verify output file is valid
    if {[file exists $out_file] && [file size $out_file] > 0} {
      # Post-process this file immediately (like pre_syn sed commands)
      set fp [open $out_file r]
      set content [read $fp]
      close $fp
      
      set modified 0
      
      # Fix 1: Rename prim_sparse_fsm_flop module suffix (only in the module definition file)
      if {$module eq "prim_sparse_fsm_flop"} {
        if {[regexp {module prim_sparse_fsm_flop_} $content]} {
          regsub {module prim_sparse_fsm_flop_\w+\s*\(} $content {module prim_sparse_fsm_flop (} content
          set modified 1
        }
      }
      
      # Fix 2: Rename prim_sparse_fsm_flop instances in all files
      if {[regexp {prim_sparse_fsm_flop_\w+} $content]} {
        regsub -all {prim_sparse_fsm_flop_\w+\s+#\(} $content {prim_sparse_fsm_flop #(} content
        set modified 1
      }
      
      # Fix 3: Remove StateEnumT parameter lines (like pre_syn sed)
      # Handles various patterns:
      #   .StateEnumT(logic [...])
      #   .StateEnumT_StateWidth(...)
      #   .StateEnumT_StateWidthPad(...)
      #   .StateEnumT_sha3_pkg...(...)
      #   .StateEnumT_kmac_pkg...(...)
      #   .StateEnumT_aes_pkg...(...)
      #   .StateEnumT_prim_ascon_pkg...(...)
      #   .StateEnumT_ascon_pkg...(...)
      if {[regexp {\.StateEnumT\(logic \[} $content]} {
        regsub -all {[^\n]*\.StateEnumT\(logic \[[^\n]*\n} $content {} content
        set modified 1
      }
      if {[regexp {\.StateEnumT_StateWidth\(} $content]} {
        regsub -all {[^\n]*\.StateEnumT_StateWidth\([^\n]*\n} $content {} content
        set modified 1
      }
      if {[regexp {\.StateEnumT_StateWidthPad\(} $content]} {
        regsub -all {[^\n]*\.StateEnumT_StateWidthPad\([^\n]*\n} $content {} content
        set modified 1
      }
      if {[regexp {\.StateEnumT_sha3_pkg} $content]} {
        regsub -all {[^\n]*\.StateEnumT_sha3_pkg[^\n]*\n} $content {} content
        set modified 1
      }
      if {[regexp {\.StateEnumT_kmac_pkg} $content]} {
        regsub -all {[^\n]*\.StateEnumT_kmac_pkg[^\n]*\n} $content {} content
        set modified 1
      }
      if {[regexp {\.StateEnumT_aes_pkg} $content]} {
        regsub -all {[^\n]*\.StateEnumT_aes_pkg[^\n]*\n} $content {} content
        set modified 1
      }
      if {[regexp {\.StateEnumT_prim_ascon_pkg} $content]} {
        regsub -all {[^\n]*\.StateEnumT_prim_ascon_pkg[^\n]*\n} $content {} content
        set modified 1
      }
      if {[regexp {\.StateEnumT_ascon_pkg} $content]} {
        regsub -all {[^\n]*\.StateEnumT_ascon_pkg[^\n]*\n} $content {} content
        set modified 1
      }
      
      # Write back if modified
      if {$modified} {
        set fp [open $out_file w]
        puts -nonewline $fp $content
        close $fp
      }
      
      lappend CONVERTED_FILES $out_file
      incr convert_count
      
      if {$convert_count <= 5} {
        puts "  Converted: [file tail $file] -> [file tail $out_file]"
      } elseif {$convert_count == 6} {
        puts "  ... (converting remaining files)"
      }
    }
  }
  
  puts "  Successfully converted: $convert_count files"
  if {$error_count > 0} {
    puts "  Errors: $error_count files failed"
  }
  puts "  Output directory: $generated_dir"
}

# Post-processing is now done per-file during sv2v conversion (see above)
# This matches the pre_syn approach where sed is applied immediately after each conversion
puts "\n=== Post-processing complete (done during conversion) ==="
puts "  Total converted files: [llength $CONVERTED_FILES]"

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
set LIB_FILES [list \
  [file join $ASAP7_DIR asap7sc7p5t_AO_${VT}_${LIB_CORNER}_nldm_211120.lib] \
  [file join $ASAP7_DIR asap7sc7p5t_INVBUF_${VT}_${LIB_CORNER}_nldm_220122.lib] \
  [file join $ASAP7_DIR asap7sc7p5t_OA_${VT}_${LIB_CORNER}_nldm_211120.lib] \
  [file join $ASAP7_DIR asap7sc7p5t_SIMPLE_${VT}_${LIB_CORNER}_nldm_211120.lib] \
  $DFF_LIB_FILE \
]

# ASAP7 cell names
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
# Read standard cell libraries
# ==============================================================================

puts "\n=== Reading liberty files ==="
source [file join $script_dir synth_stdcells.tcl]

# ==============================================================================
# Read converted Verilog files
# ==============================================================================

puts "\n=== Reading converted Verilog files ==="

if {[llength $CONVERTED_FILES] == 0} {
  error "No converted Verilog files found! Check sv2v conversion."
}

# Read all converted Verilog files
set read_count 0
foreach file $CONVERTED_FILES {
  if {![file exists $file]} {
    puts "  WARNING: File not found: $file"
    continue
  }
  if {[catch {read_verilog $file} err]} {
    puts "  ERROR reading $file: $err"
  } else {
    incr read_count
    if {$read_count <= 10 || $read_count == [llength $CONVERTED_FILES]} {
      puts "  Read: [file tail $file]"
    } elseif {$read_count == 11} {
      puts "  ... (reading remaining files)"
    }
  }
}
puts "  Total files read: $read_count"

# ==============================================================================
# Hierarchy check and elaboration
# ==============================================================================

puts "\n=== Elaborating design ==="
hierarchy -check -top $DESIGN_NAME

# ==============================================================================
# Coarse-level synthesis
# ==============================================================================

puts "\n=== Running synthesis ==="
if {$FLATTEN} {
  log_cmd synth -flatten -top $DESIGN_NAME -run :fine
} else {
  log_cmd synth -top $DESIGN_NAME -run :fine
}

# Run the fine stage without ABC
log_cmd synth -top $DESIGN_NAME -run fine: -noabc

# ==============================================================================
# Technology mapping
# ==============================================================================

puts "\n=== Technology mapping ==="

# Optimize the design
opt -purge

# Technology mapping of flip-flops
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
# ABC technology mapping
# ==============================================================================

puts "\n=== ABC mapping ==="
source [file join $script_dir synth_abc.tcl]

# ==============================================================================
# Post-ABC cleanup
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
tee -o [file join $reports_dir ${DESIGN_NAME}_synth_check.txt] check

# Build lib args for stat
set lib_args [list]
foreach lib $LIB_FILES {
  if {[file exists $lib]} {
    lappend lib_args -liberty $lib
  }
}

# Statistics with liberty
tee -o [file join $reports_dir ${DESIGN_NAME}_synth_stat.txt] stat {*}$lib_args

# Verify mapped design
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

set final_report_file [file join $reports_dir ${DESIGN_NAME}_synth_final_report.txt]
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
puts $rpt "Original SV Files:       [llength $VERILOG_FILES]"
puts $rpt "Converted V Files:       [llength $CONVERTED_FILES]"
puts $rpt "Generated Directory:     $generated_dir"
puts $rpt ""

# Get clock period used
set clock_period_ps [env_var_or_default ABC_CLOCK_PERIOD_IN_PS 8000]
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
set total_area 0
set seq_area 0
set comb_area 0
set cell_count 0

set found_top 0
set last_area_line ""
set last_seq_line ""

foreach line [split $stat_output "\n"] {
  if {[regexp {Chip area for.*module[^:]*:\s+([\d.]+)} $line match area]} {
    set total_area $area
    set last_area_line $line
    set found_top 1
  } elseif {$found_top && [regexp {of which used for sequential elements:\s+([\d.]+)\s+\(([\d.]+)%\)} $line match seq pct]} {
    set seq_area $seq
    set comb_area [expr {$total_area - $seq_area}]
    set last_seq_line $line
  }
}

# Count total cells
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
puts $rpt "  sta run_sta.tcl"
puts $rpt ""

puts $rpt "--------------------------------------------------------------------------------"
puts $rpt "                          POWER ESTIMATION"
puts $rpt "--------------------------------------------------------------------------------"
puts $rpt "NOTE: Actual power requires simulation + power analysis tools"
puts $rpt ""
set est_power_uw [expr {$cell_count * 0.7}]
puts $rpt "Estimated Total Cells:   $cell_count"
puts $rpt "Rough Power Estimate:    ~[format "%.1f" $est_power_uw] uW @ ${target_freq_mhz} MHz (rough estimate)"
puts $rpt ""

puts $rpt "--------------------------------------------------------------------------------"
puts $rpt "                           OUTPUT FILES"
puts $rpt "--------------------------------------------------------------------------------"
puts $rpt "Synthesized Netlist:     $output_verilog"
puts $rpt "Synthesis Stats:         [file join $reports_dir ${DESIGN_NAME}_synth_stat.txt]"
puts $rpt "Synthesis Check:         [file join $reports_dir ${DESIGN_NAME}_synth_check.txt]"
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
puts "sv2v CONVERSION:"
puts "  Original SV files: [llength $VERILOG_FILES]"
puts "  Converted V files: [llength $CONVERTED_FILES]"
puts "  Output directory:  $generated_dir"
puts ""
puts "AREA:"
puts "  Total Cells:       $cell_count"
puts "  Total Area:        [format "%.3f" $total_area] (liberty units)"
puts "  Sequential:        [format "%.3f" $seq_area] ([format "%.1f" [expr {$seq_area * 100.0 / ($total_area + 0.001)}]]%)"
puts "  Combinational:     [format "%.3f" $comb_area] ([format "%.1f" [expr {$comb_area * 100.0 / ($total_area + 0.001)}]]%)"
puts ""
puts "TIMING:"
puts "  Target Period:     ${clock_period_ps} ps"
puts "  WNS/TNS:           Run 'sta run_sta.tcl' for accurate timing"
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
