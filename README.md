# ICLAD RTL Design Collection

This repository contains optimized IP designs with Verilator testbenches and Yosys synthesis flows.

## Available IPs

| IP | Location | Description |
|----|----------|-------------|
| async_fifo | `async_fifo/` | Asynchronous FIFO with dual-clock domain crossing |
| sha512 | `sha512/` | SHA-512 cryptographic hash function |
| NVDLA | `NVDLA/` | NVIDIA Deep Learning Accelerator (nv_small configuration) |
| AES | `opentitan/hw/ip/aes/` | OpenTitan AES encryption/decryption block |
| ASCON | `opentitan/hw/ip/ascon/` | OpenTitan ASCON lightweight authenticated cipher |
| PRIM | `opentitan/hw/ip/prim/` | OpenTitan primitive library (base components) |
| KMAC | `opentitan/hw/ip/kmac/` | OpenTitan Keccak Message Authentication Code |

## Prerequisites

Use the Docker development environment for a reproducible toolchain. See [ENV_PREPARATION.md](ENV_PREPARATION.md) for setup instructions.

```bash
docker build -t iclad-dev:v1 .
docker run --rm -it -v "$(pwd):/workspace" -w /workspace iclad-dev:v1
```

## Running Verilator Testbenches

Each IP has a `run_verilator_tb.sh` script for simulation.

### async_fifo

```bash
cd async_fifo
./run_iverilog_tb.sh all
```

Steps: `env`, `lint`, `build`, `sim`, `sim-svut`, `clean`

### sha512

```bash
cd sha512
./run_iverilog_tb.sh all
```

### NVDLA

NVDLA uses a different verification flow via `run_all_trace_tests.sh`:

```bash
cd NVDLA
./run_verilator_tb.sh
```

### OpenTitan IPs

**AES:**
```bash
cd opentitan/hw/ip/aes
./run_verilator_tb.sh all
```

Available testbenches: `aes_tb`, `aes_cipher_core_tb`, `aes_sbox_tb`, `aes_wrap_tb`

**ASCON:**
```bash
cd opentitan/hw/ip/ascon/pre_dv
./run_verilator_tb.sh all
```

**PRIM:**
```bash
cd opentitan/hw/ip/prim/pre_dv
./run_verilator_tb.sh all
```

**KMAC:**
```bash
cd opentitan/hw/ip/kmac/pre_dv
./run_verilator_tb.sh all
```

## Running Synthesis

Each IP has a `run_syn.sh` script in its `yosys_syn/` directory for Yosys synthesis with OpenSTA timing analysis.

### Basic Usage

```bash
cd <ip>/yosys_syn
./run_syn.sh          # Run synthesis + STA (default)
./run_syn.sh syn      # Run synthesis only
./run_syn.sh sta      # Run STA only (requires prior synthesis)
./run_syn.sh all      # Run synthesis + STA
./run_syn.sh clean    # Clean generated files
./run_syn.sh dry-run  # Show commands without executing
```

### Synthesis Paths

| IP | Synthesis Script |
|----|------------------|
| async_fifo | `async_fifo/yosys_syn/run_syn.sh` |
| sha512 | `sha512/yosys_syn/run_syn.sh` |
| NVDLA | `NVDLA/syn/yosys_syn/run_syn.sh` |
| AES | `opentitan/hw/ip/aes/yosys_syn/run_syn.sh` |
| ASCON | `opentitan/hw/ip/ascon/yosys_syn/run_syn.sh` |
| PRIM | `opentitan/hw/ip/prim/yosys_syn/run_syn.sh` |
| KMAC | `opentitan/hw/ip/kmac/yosys_syn/run_syn.sh` |

### Synthesis Options (Environment Variables)

| Variable | Values | Default | Description |
|----------|--------|---------|-------------|
| `VT` | `RVT`, `LVT`, `SLVT` | `RVT` | Voltage threshold |
| `CORNER` | `TT`, `FF`, `SS` | `TT` | PVT corner |
| `ABC_AREA` | `0`, `1` | varies | 0=speed optimization, 1=area optimization |
| `DRY_RUN` | `0`, `1` | `0` | Enable dry-run mode |

Example with options:
```bash
VT=LVT CORNER=FF ABC_AREA=1 ./run_syn.sh all
```

## Quick Reference

### Run all Verilator tests for an IP
```bash
./run_verilator_tb.sh all
```

### Run synthesis + STA for an IP
```bash
cd <ip>/yosys_syn
./run_syn.sh
```

### Common Verilator script options
- `--dry-run`, `-n` - Print commands without executing
- `--help`, `-h` - Show help message
- `env` - Show environment configuration
- `clean` - Remove build artifacts
