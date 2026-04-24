# SDC constraints for sha512
# Single clock design
#

# Clock period in picoseconds (for ABC timing, ASAP7 uses ps)
# 1400 ps
set clk_period 1500

# Main clock
create_clock -name clk -period $clk_period [get_ports clk]

# Input delays (assume 20% of clock period)
set input_delay [expr {$clk_period * 0.2}]
set_input_delay -clock clk $input_delay [get_ports {reset_n cs we address* write_data*}]

# Output delays (assume 20% of clock period)
set output_delay [expr {$clk_period * 0.2}]
set_output_delay -clock clk $output_delay [get_ports {read_data* error}]

# False path for reset
set_false_path -from [get_ports reset_n]
