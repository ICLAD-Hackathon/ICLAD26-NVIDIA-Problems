# SDC constraints for prim_crc32
#
# ASAP7 uses picoseconds (ps) as time unit.

# Clock period in picoseconds
set clk_period 300

# Main clock
create_clock -name clk_i -period $clk_period [get_ports clk_i]

# Input delays (20% of clock period)
# Note: Apply only to input ports, excluding clocks
set_input_delay -clock clk_i [expr {$clk_period * 0.2}] [get_ports -filter "direction == input && name !~ clk*" *]

# Output delays (20% of clock period)
set_output_delay -clock clk_i [expr {$clk_period * 0.2}] [all_outputs]

# False path for reset
if {[llength [get_ports -quiet rst_ni]] > 0} {
  set_false_path -from [get_ports rst_ni]
}
