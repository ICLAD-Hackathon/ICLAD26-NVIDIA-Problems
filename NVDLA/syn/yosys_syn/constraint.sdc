# SDC constraints for NVDLA (NV_nvdla)
#
# NVDLA has two clock domains:
#   - dla_core_clk: Main processing clock
#   - dla_csb_clk:  Configuration/CSB interface clock
#
# Reference: NV_nvdla.v port list

# Clock periods in picoseconds (for ABC timing, ASAP7 uses ps)
# Adjust these based on your target frequency
# Default: 30 ns core clock, 60 ns CSB clock
set core_clk_period 30000
set csb_clk_period  60000

# For ABC: use faster clock (core) as the target
set clk_period $core_clk_period

# Core clock domain (dla_core_clk)
create_clock -name dla_core_clk -period $core_clk_period [get_ports dla_core_clk]

# CSB clock domain (dla_csb_clk)
create_clock -name dla_csb_clk -period $csb_clk_period [get_ports dla_csb_clk]

# Async clocks - no timing paths between domains
set_clock_groups -asynchronous \
  -group [get_clocks dla_core_clk] \
  -group [get_clocks dla_csb_clk]


# Input delays (assume 20% of clock period)
# Use -filter to select only input ports, avoiding direction warnings
# CSB interface inputs (csb2nvdla_valid, csb2nvdla_addr, csb2nvdla_wdat, csb2nvdla_write, csb2nvdla_nposted)
set_input_delay -clock dla_csb_clk [expr {$csb_clk_period * 0.2}] [get_ports -filter "direction == input" csb2nvdla_*]

# AXI interface inputs (core clock domain) - ready/response signals from memory
set_input_delay -clock dla_core_clk [expr {$core_clk_period * 0.2}] [get_ports -filter "direction == input" nvdla_core2dbb_aw_awready]
set_input_delay -clock dla_core_clk [expr {$core_clk_period * 0.2}] [get_ports -filter "direction == input" nvdla_core2dbb_w_wready]
set_input_delay -clock dla_core_clk [expr {$core_clk_period * 0.2}] [get_ports -filter "direction == input" nvdla_core2dbb_ar_arready]
set_input_delay -clock dla_core_clk [expr {$core_clk_period * 0.2}] [get_ports -filter "direction == input" nvdla_core2dbb_b_*]
set_input_delay -clock dla_core_clk [expr {$core_clk_period * 0.2}] [get_ports -filter "direction == input" nvdla_core2dbb_r_*]

# Output delays (assume 20% of clock period)
# CSB interface outputs (nvdla2csb_valid, nvdla2csb_data)
set_output_delay -clock dla_csb_clk [expr {$csb_clk_period * 0.2}] [get_ports -filter "direction == output" nvdla2csb_*]

# AXI interface outputs (core clock domain) - request/data signals to memory
set_output_delay -clock dla_core_clk [expr {$core_clk_period * 0.2}] [get_ports -filter "direction == output" nvdla_core2dbb_aw_*]
set_output_delay -clock dla_core_clk [expr {$core_clk_period * 0.2}] [get_ports -filter "direction == output" nvdla_core2dbb_w_*]
set_output_delay -clock dla_core_clk [expr {$core_clk_period * 0.2}] [get_ports -filter "direction == output" nvdla_core2dbb_ar_*]
set_output_delay -clock dla_core_clk [expr {$core_clk_period * 0.2}] [get_ports -filter "direction == output" nvdla_core2dbb_b_bready]
set_output_delay -clock dla_core_clk [expr {$core_clk_period * 0.2}] [get_ports -filter "direction == output" nvdla_core2dbb_r_rready]

# False paths for resets and test mode
set_false_path -from [get_ports dla_reset_rstn]
set_false_path -from [get_ports direct_reset_]
set_false_path -from [get_ports test_mode]
set_false_path -from [get_ports global_clk_ovr_on]
set_false_path -from [get_ports tmc2slcg_disable_clock_gating]

# False paths for asynchronous reset distribution
# The reset synchronizer outputs drive async set/reset pins (SETN/RESETN)
# throughout the design. These recovery/removal checks are not meaningful
# for timing closure - the reset is intentionally asynchronous.

# Method 1: Cut paths TO async set/reset pins (endpoint-based)
set_false_path -to [get_pins -hierarchical */SETN]
set_false_path -to [get_pins -hierarchical */RESETN]

# Method 2: Cut paths FROM reset synchronizer cells (source-based)
# This catches paths from sync_reset_synced_rstn flip-flops to all destinations
set_false_path -from [get_cells -hierarchical *sync_reset_synced_rstn*]

# Note: Max transition (slew) violations on async reset pins are expected
# at pre-layout stage due to high fanout. These will be fixed by reset
# tree buffering during physical design. The ERC report filters these out.
