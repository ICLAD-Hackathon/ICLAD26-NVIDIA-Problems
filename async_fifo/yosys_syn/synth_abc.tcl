#
# ABC technology mapping with timing constraints
# Based on OpenROAD-flow-scripts synth_preamble.tcl methodology
#
# Requires these variables to be set before sourcing:
#   - script_dir
#   - ASAP7_DIR, VT, LIB_CORNER
#   - LIB_FILES (list of all liberty files)
#   - ABC_AREA (0 or 1)
#   - ABC_DRIVER_CELL, ABC_LOAD_IN_FF
#   - DONT_USE_CELLS
#
# Optional timing variables:
#   - ABC_CLOCK_PERIOD_IN_PS (clock period in picoseconds, e.g., 1000 = 1ns)
#   - SDC_FILE (path to SDC file to extract clock period)
#

# Create ABC constraints file (from OpenROAD synth_preamble.tcl)
set abc_constr_file [file join $script_dir abc.constr]
set constr [open $abc_constr_file w]
puts $constr "set_driving_cell $ABC_DRIVER_CELL"
puts $constr "set_load $ABC_LOAD_IN_FF"
close $constr

# Select ABC script (from OpenROAD synth_preamble.tcl)
if {$ABC_AREA} {
  puts "Using ABC area script."
  set abc_script_file [file join $script_dir abc_area.script]
} else {
  puts "Using ABC speed script."
  set abc_script_file [file join $script_dir abc_speed.script]
}

# Fallback: create script inline if not found
if {![file exists $abc_script_file]} {
  set abc_script_file [file join $script_dir abc.script]
  set fp [open $abc_script_file w]
  if {$ABC_AREA} {
    # From OpenROAD abc_area.script
    puts $fp "strash"
    puts $fp "dch"
    puts $fp "map -B 0.9"
    puts $fp "topo"
    puts $fp "stime -c"
    puts $fp "buffer -c"
    puts $fp "upsize -c"
    puts $fp "dnsize -c"
  } else {
    # Simplified speed script (full abc_speed.script uses ABC9 commands)
    puts $fp "strash"
    puts $fp "dch"
    puts $fp "map"
    puts $fp "topo"
    puts $fp "stime -c"
    puts $fp "buffer -c"
    puts $fp "upsize -c"
    puts $fp "dnsize -c"
  }
  close $fp
}

# Build library arguments for ABC (from OpenROAD synth_preamble.tcl)
# OpenROAD passes multiple -liberty arguments directly to ABC
set abc_lib_args ""
foreach lib $LIB_FILES {
  if {[file exists $lib]} {
    append abc_lib_args "-liberty $lib "
  }
}

# Build dont_use arguments (from OpenROAD synth_preamble.tcl)
set abc_dont_use_args [list]
foreach pattern $DONT_USE_CELLS {
  lappend abc_dont_use_args -dont_use $pattern
}

# Build full ABC arguments (from OpenROAD synth_preamble.tcl)
set abc_args [list -script $abc_script_file \
  {*}$abc_lib_args {*}$abc_dont_use_args -constr $abc_constr_file]

# Add timing constraint: clock period in picoseconds (from OpenROAD synth_preamble.tcl)
# ABC uses -D option for delay target
set clock_period ""

# Option 1: Direct environment variable
if {[env_var_exists_and_non_empty ABC_CLOCK_PERIOD_IN_PS]} {
  set clock_period $::env(ABC_CLOCK_PERIOD_IN_PS)
  puts "Using clock period from ABC_CLOCK_PERIOD_IN_PS: ${clock_period} ps"
}

# Option 2: Read from SDC file (OpenROAD style)
if {$clock_period eq "" && [env_var_exists_and_non_empty SDC_FILE]} {
  if {[file exists $::env(SDC_FILE)]} {
    # Try to extract clock period from SDC
    set fp [open $::env(SDC_FILE) r]
    set sdc_content [read $fp]
    close $fp
    
    # Priority 1: Look for clk_period variable (in ps) - set by our SDC for ABC
    # First check if it's a direct value: set clk_period 4000
    if {[regexp {set\s+clk_period\s+(\d+)} $sdc_content match period]} {
      set clock_period [expr {int($period)}]
      puts "Extracted clock period from SDC clk_period: ${clock_period} ps"
    } elseif {[regexp {set\s+clk_period\s+[$](\w+)} $sdc_content match var_name]} {
      # It's a variable reference like $wclk_period - find the actual value
      if {[regexp "set\\s+${var_name}\\s+(\\d+)" $sdc_content match period]} {
        set clock_period [expr {int($period)}]
        puts "Extracted clock period from SDC \$${var_name}: ${clock_period} ps"
      }
    }
    
    # Priority 2: Look for wclk_period or wclk_period_ps (faster clock for dual-clock designs)
    if {$clock_period eq "" && [regexp {set\s+wclk_period(?:_ps)?\s+(\d+)} $sdc_content match period]} {
      set clock_period [expr {int($period)}]
      puts "Extracted clock period from SDC wclk_period: ${clock_period} ps"
    }
    
    # Priority 3: Parse create_clock -period (in ns, convert to ps)
    # Use the smallest (fastest) clock period found
    if {$clock_period eq ""} {
      set min_period_ns 999999
      set re {create_clock\s+[^;]*-period\s+[\$]?(\d+\.?\d*)}
      foreach {match period} [regexp -all -inline $re $sdc_content] {
        # Skip if it's a variable reference (starts with letter)
        if {[string is double -strict $period] && $period < $min_period_ns} {
          set min_period_ns $period
        }
      }
      if {$min_period_ns < 999999} {
        set clock_period [expr {int($min_period_ns * 1000)}]
        puts "Extracted clock period from SDC create_clock: ${min_period_ns} ns = ${clock_period} ps"
      }
    }
  }
}

# Error if no clock period found
if {$clock_period eq ""} {
  puts "ERROR: No clock period found!"
  puts "  Please specify clock period via one of:"
  puts "    1. Environment variable ABC_CLOCK_PERIOD_IN_PS (in picoseconds)"
  puts "    2. SDC file with 'set clk_period <value>' or 'set wclk_period <value>'"
  puts "    3. SDC file with 'create_clock -period <value>' (in ns)"
  error "Clock period is required for ABC timing-driven synthesis"
}

# Export clock period to environment variable so syn.tcl report can use it
set ::env(ABC_CLOCK_PERIOD_IN_PS) $clock_period

# Add -D option to ABC args for timing-driven optimization
lappend abc_args -D $clock_period

# Run ABC
puts "Running ABC with [llength $LIB_FILES] liberty files..."
puts "  ABC clock constraint: -D ${clock_period} (period in ps)"
puts "  Script: [file tail $abc_script_file]"
puts "  Constraints: [file tail $abc_constr_file]"
log_cmd abc {*}$abc_args
