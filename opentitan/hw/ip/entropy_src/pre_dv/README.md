# entropy_src pre_dv Testbench

## Status: OUTDATED

The testbench `entropy_src_tb.sv` in this directory was written for an **older version** of the `entropy_src` module and is **not compatible** with the current RTL.

### Incompatibilities

The testbench expects this interface:

```systemverilog
module entropy_src #(
  parameter EsFifoDepth = 32
) (
  input  logic clk_i,
  input  logic rst_ni,
  input  tlul_pkg::tl_h2d_t tl_i,
  output tlul_pkg::tl_d2h_t tl_o,
  output logic es_entropy_valid_o,      // OLD signal name
  output logic es_entropy_fifo_err_o    // OLD signal name
);
```

The current RTL (`../rtl/entropy_src.sv`) has a much more complex interface:

```systemverilog
module entropy_src #(
  parameter logic [NumAlerts-1:0] AlertAsyncOn = {NumAlerts{1'b1}},
  parameter int unsigned AlertSkewCycles = 1,
  parameter int RngBusWidth = 4,
  parameter int RngBusBitSelWidth = 2,
  parameter int HealthTestWindowWidth = 18,
  parameter int EsFifoDepth = 3,
  parameter int DistrFifoDepth = 3,
  parameter bit Stub = 1'b0
) (
  input  logic clk_i,
  input  logic rst_ni,
  input  tlul_pkg::tl_h2d_t tl_i,
  output tlul_pkg::tl_d2h_t tl_o,
  // OTP Interface
  input  mubi8_t otp_en_entropy_src_fw_read_i,
  input  mubi8_t otp_en_entropy_src_fw_over_i,
  output logic rng_fips_o,
  // Entropy Interface
  input  entropy_src_hw_if_req_t entropy_src_hw_if_i,
  output entropy_src_hw_if_rsp_t entropy_src_hw_if_o,
  // RNG Interface
  output logic entropy_src_rng_enable_o,
  input  logic entropy_src_rng_valid_i,
  input  logic [RngBusWidth-1:0] entropy_src_rng_bits_i,
  // External Health Test Interface
  output logic entropy_src_xht_valid_o,
  // ... many more signals ...
  // Alerts
  input  prim_alert_pkg::alert_rx_t [NumAlerts-1:0] alert_rx_i,
  output prim_alert_pkg::alert_tx_t [NumAlerts-1:0] alert_tx_o,
  // Interrupts (renamed from es_entropy_valid_o)
  output logic intr_es_entropy_valid_o,
  output logic intr_es_health_test_failed_o,
  output logic intr_es_observe_fifo_ready_o,
  output logic intr_es_fatal_err_o
);
```

### Key Differences

| Aspect | Old (testbench expects) | Current RTL |
|--------|------------------------|-------------|
| Signal `es_entropy_valid_o` | Yes | No (renamed to `intr_es_entropy_valid_o`) |
| Signal `es_entropy_fifo_err_o` | Yes | No (removed) |
| OTP interface | No | Required |
| RNG interface | No | Required |
| Alert interface | No | Required |
| External health test | No | Required |

### Options

1. **Use the UVM testbench** (`../dv/tb/tb.sv`) with VCS/Xcelium via dvsim:
   ```bash
   $REPO_TOP/util/dvsim/dvsim.py \
     $REPO_TOP/hw/ip/entropy_src/dv/entropy_src_sim_cfg.hjson -i entropy_src_smoke
   ```

2. **Use Verilator for lint only** (current capability):
   ```bash
   ./run_verilator_tb.sh lint
   ```

3. **Update the testbench** to match the current RTL interface (requires significant effort).

### Historical Note

This testbench appears to be from an early development phase of the entropy_src IP, before the full feature set (RNG integration, health tests, OTP controls, alerts) was implemented.
