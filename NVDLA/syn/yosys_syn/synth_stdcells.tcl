#
# Read standard cells and macros as blackbox inputs
# Extracted from OpenROAD-flow-scripts/flow/scripts/synth_stdcells.tcl
#
# Requires: LIB_FILES variable to be set before sourcing
#

foreach lib $LIB_FILES {
  if {[file exists $lib]} {
    # -ignore_miss_func: skip cells without function attr (e.g., ICG latches)
    read_liberty -ignore_miss_func $lib
    puts "  Loaded: [file tail $lib]"
  } else {
    puts "  WARNING: Library not found: $lib"
  }
}
