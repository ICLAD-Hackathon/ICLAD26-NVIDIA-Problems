# SDC constraints for OpenTitan ASCON
#
# IMPORTANT: ASAP7 liberty files use picoseconds (ps) as time unit.
# All timing values in this SDC must be in ps to match the liberty.
#

# Clock period in picoseconds
set clk_period 100

# Main clock (8000 ps = 8 ns = 125 MHz)
create_clock -name clk_i -period $clk_period [get_ports clk_i]

# EDN clock (same as main clock for simplicity in synthesis)
if {[llength [get_ports -quiet clk_edn_i]] > 0} {
  create_clock -name clk_edn_i -period $clk_period [get_ports clk_edn_i]
  
  # Asynchronous clock groups (clk_i and clk_edn_i may be from different sources)
  set_clock_groups -asynchronous \
    -group [get_clocks clk_i] \
    -group [get_clocks clk_edn_i]
}

# Input delays (20% of clock period, in ps)
# Note: Apply only to input ports, excluding clocks
set_input_delay -clock clk_i [expr {$clk_period * 0.2}] [get_ports -filter "direction == input && name !~ clk*" *]

# Output delays (20% of clock period, in ps)
set_output_delay -clock clk_i [expr {$clk_period * 0.2}] [all_outputs]

# False paths for resets
if {[llength [get_ports -quiet rst_ni]] > 0} {
  set_false_path -from [get_ports rst_ni]
}
if {[llength [get_ports -quiet rst_edn_ni]] > 0} {
  set_false_path -from [get_ports rst_edn_ni]
}
if {[llength [get_ports -quiet rst_shadowed_ni]] > 0} {
  set_false_path -from [get_ports rst_shadowed_ni]
}

# False paths for life cycle signals (quasi-static)
if {[llength [get_ports -quiet lc_escalate_en_i]] > 0} {
  set_false_path -from [get_ports lc_escalate_en_i]
}
