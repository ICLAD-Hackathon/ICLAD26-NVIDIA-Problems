#!/usr/bin/env yosys
#
# Run from this directory:
#   yosys -c fifo.tcl
# (Shebang is optional; some systems need:  env -S yosys -c ./fifo.tcl)
#
# Extract ASAP7 .lib from .7z first, e.g.:
#   cd $ASAP7_LIB_DIR && 7z x '*.lib.7z'
#
# Override install path:
#   ASAP7_LIB_DIR=/path/to/NLDM yosys -c fifo.tcl

yosys -import

set script_dir [file dirname [file normalize [info script]]]
set rtl_dir [file join $script_dir .. rtl]

if {[info exists ::env(ASAP7_LIB_DIR)]} {
  set ASAP7_DIR $::env(ASAP7_LIB_DIR)
} else {
  set ASAP7_DIR /workspace/techlib/asap7sc7p5t_28/LIB/NLDM
}

set DESIGN_NAME async_fifo

# RTL sources (same set as fifo.ys)
set VERILOG_FILES [list \
  [file join $rtl_dir async_fifo.v] \
  [file join $rtl_dir fifomem.v] \
  [file join $rtl_dir rptr_empty.v] \
  [file join $rtl_dir sync_r2w.v] \
  [file join $rtl_dir sync_w2r.v] \
  [file join $rtl_dir wptr_full.v] \
]

# One matching PVT + VT on every file (do not mix SS/TT/FF or RVT/LVT in one run).
# Swap *_RVT_TT_* → *_RVT_SS_* (etc.) consistently on all six lines below.
set LIB_FILES [list \
  [file join $ASAP7_DIR asap7sc7p5t_SEQ_RVT_TT_nldm_220123.lib] \
  [file join $ASAP7_DIR asap7sc7p5t_SIMPLE_RVT_TT_nldm_211120.lib] \
  [file join $ASAP7_DIR asap7sc7p5t_AO_RVT_TT_nldm_211120.lib] \
  [file join $ASAP7_DIR asap7sc7p5t_OA_RVT_TT_nldm_211120.lib] \
  [file join $ASAP7_DIR asap7sc7p5t_INVBUF_RVT_TT_nldm_220122.lib] \
]

# dfflibmap accepts a single -liberty in practice; flops live in SEQ only.
set DFF_LIB_FILE [lindex $LIB_FILES 0]

foreach file $VERILOG_FILES {
  if {![file exists $file]} {
    puts "ERROR: RTL not found: $file"
    exit 1
  }
  read_verilog -sv $file
}

foreach lib $LIB_FILES {
  if {[file exists $lib]} {
    read_liberty $lib
    puts "Loaded library: $lib"
  } else {
    puts "WARNING: Library not found (extract .7z?): $lib"
  }
}

hierarchy -check -top $DESIGN_NAME
synth -top $DESIGN_NAME

techmap +/adff2dff.v
opt

if {![file exists $DFF_LIB_FILE]} {
  puts "ERROR: SEQ liberty required for dfflibmap: $DFF_LIB_FILE"
  exit 1
}
dfflibmap -liberty $DFF_LIB_FILE

set abc_lib_args [list]
foreach lib $LIB_FILES {
  if {[file exists $lib]} {
    lappend abc_lib_args -liberty $lib
  }
}

abc {*}$abc_lib_args -script {+strash;scorr;dcorr;retime;dch,-f;map}

opt_clean -purge
setundef -zero

write_verilog -noattr -noexpr -nohex -nodec [file join $script_dir async_fifo_syn.v]

puts "Wrote [file join $script_dir async_fifo_syn.v]"
