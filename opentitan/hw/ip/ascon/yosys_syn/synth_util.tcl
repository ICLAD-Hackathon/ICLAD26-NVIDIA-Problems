#
# Utility functions for Yosys synthesis
# Extracted from OpenROAD-flow-scripts/flow/scripts/util.tcl
#

# Check if environment variable exists and is non-empty
proc env_var_exists_and_non_empty { env_var } {
  return [expr { [info exists ::env($env_var)] && ![string equal $::env($env_var) ""] }]
}

# Check if environment variable equals a specific value
proc env_var_equals { env_var value } {
  return [expr { [info exists ::env($env_var)] && $::env($env_var) == $value }]
}

# Get environment variable or return empty string
proc env_var_or_empty { env_var } {
  if { [env_var_exists_and_non_empty $env_var] } {
    return $::env($env_var)
  }
  return ""
}

# Get environment variable or return default value
proc env_var_or_default { name default_val } {
  if {[env_var_exists_and_non_empty $name]} {
    return $::env($name)
  }
  return $default_val
}

# Append environment variable to a list with prefix (for building command args)
# has_arg=1: append "$prefix $value", has_arg=0: append "$prefix" only if var=1
proc append_env_var { list_name var_name prefix has_arg } {
  upvar $list_name list
  if {
    (!$has_arg && [env_var_equals $var_name 1]) ||
    ($has_arg && [env_var_exists_and_non_empty $var_name])
  } {
    lappend list $prefix
    if { $has_arg } {
      lappend list $::env($var_name)
    }
  }
}

# Log command with timing
proc log_cmd { cmd args } {
  # Log the command, escape arguments with spaces
  set log_cmd "$cmd[join [lmap arg $args { format " %s" [expr { [string match {* *} $arg] ? "\"$arg\"" : "$arg" }] }] ""]"
  puts $log_cmd
  set start [clock seconds]
  set result [uplevel 1 [list $cmd {*}$args]]
  set time [expr { [clock seconds] - $start }]
  if { $time >= 5 } {
    puts "Took $time seconds: $log_cmd"
  }
  return $result
}

# Source a TCL file specified by environment variable if it exists
proc source_env_var_if_exists { env_var } {
  if { [env_var_exists_and_non_empty $env_var] } {
    log_cmd source $::env($env_var)
  }
}

# Extract cell names from liberty (requires cells loaded via read_liberty)
proc get_liberty_cell_names { } {
  return [tee -q -s result.string select -list-mod =A:liberty_cell]
}
