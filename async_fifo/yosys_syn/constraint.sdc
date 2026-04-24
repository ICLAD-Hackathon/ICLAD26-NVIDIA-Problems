# SDC constraints for async_fifo
# This is a dual-clock design with separate read and write clock domains
#
# IMPORTANT: ASAP7 liberty files use picoseconds (ps) as time unit.
# All timing values in this SDC must be in ps to match the liberty.

# Clock periods in picoseconds for 7nm
# wclk: 300 ps = 0.3 ns (simulation: always #2 wclk <= ~wclk)
# rclk: 450 ps = 0.45 ns (simulation: always #3 rclk <= ~rclk)
set wclk_period 300
set rclk_period 450

# For ABC: use faster clock (wclk) as the target
set clk_period $wclk_period

# Write clock domain (250 MHz, 400 ps)
create_clock -name wclk -period $wclk_period [get_ports wclk]

# Read clock domain (166.67 MHz, 600 ps)
create_clock -name rclk -period $rclk_period [get_ports rclk]

# Async clocks - no timing paths between domains
# (CDC is handled by synchronizers in the RTL)
set_clock_groups -asynchronous \
  -group [get_clocks wclk] \
  -group [get_clocks rclk]

# Input delays (assume 20% of clock period, in ps)
set_input_delay -clock wclk [expr {$wclk_period * 0.2}] [get_ports {winc wdata* wrst_n}]
set_input_delay -clock rclk [expr {$rclk_period * 0.2}] [get_ports {rinc rrst_n}]

# Output delays (assume 20% of clock period, in ps)
set_output_delay -clock wclk [expr {$wclk_period * 0.2}] [get_ports {wfull awfull}]
set_output_delay -clock rclk [expr {$rclk_period * 0.2}] [get_ports {rdata* rempty arempty}]

# False paths for reset synchronization
set_false_path -from [get_ports wrst_n]
set_false_path -from [get_ports rrst_n]
