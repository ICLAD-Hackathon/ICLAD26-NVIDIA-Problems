# Running AES pre_dv testbenches with Verilator

This document describes how to build and run the **pre_dv** Verilator simulations under this directory. These are **standalone** flows (FuseSoC + Verilator + C++), separate from the main UVM environment under `dv/` (which targets commercial simulators).

## Prerequisites

- **FuseSoC** (e.g. `pip install fusesoc`) on `PATH`
- **Verilator** (OpenTitan currently expects ≥ 4.210; see tool checks in the FuseSoC log)
- **C/C++ toolchain** with C++11/C++17 as required by each core
- For **`aes_tb` only**: **OpenSSL** development headers and libraries (the reference crypto model links against libcrypto). Older OpenSSL releases may need the `EVP_CTRL_GCM_*` compatibility used in `model/crypto.c`.

Run FuseSoC from the **OpenTitan repository root** (`REPO_TOP`), with `--cores-root=.` so all `.core` files resolve. The helper script below does that for you.

## Quick start

From the AES IP directory:

```bash
cd /path/to/opentitan/hw/ip/aes
chmod +x run_verilator_tb.sh   # once, if needed

# Default: build and run the full-block bench (aes_tb)
./run_verilator_tb.sh

# Run one bench
./run_verilator_tb.sh --testbench=aes_sbox_tb

# Build and run every Verilator pre_dv bench in sequence
./run_verilator_tb.sh all
```

Other steps:

```bash
./run_verilator_tb.sh env              # print environment / tool versions
./run_verilator_tb.sh build            # compile only
./run_verilator_tb.sh run              # run existing binary (after build)
./run_verilator_tb.sh clean            # remove work directory (default: ./obj_fusesoc)
./run_verilator_tb.sh lint             # Verilator lint on the AES IP core
./run_verilator_tb.sh --dry-run all    # print commands without executing
```

Environment overrides:

| Variable    | Role |
|------------|------|
| `VERILATOR` | Path to `verilator` binary |
| `FUSESOC`   | FuseSoC launcher (default: `fusesoc`) |
| `WORK_ROOT` | FuseSoC `--work-root` (default: `$PWD/obj_fusesoc`) |

The simulation executable is produced under `WORK_ROOT` (often as `Vaes_<toplevel>`). Waveforms may be emitted as `.fst` when tracing is enabled in the `.core` file.

## What is exercised (functionality) vs. what this README covers

| Area | Location | Role |
|------|----------|------|
| **Verilator pre_dv** | `pre_dv/*_tb/` | C++/Verilator checks described below |
| **UVM DV** | `dv/` | Full block verification (VCS/Xcelium-oriented); not run by `run_verilator_tb.sh` |
| **Yosys LEC** | `pre_dv/aes_sbox_lec/` | Formal equivalence (Python/Yosys); **not** a Verilator simulation |
| **SCA / Alma** | `pre_sca/alma/` | Separate Verilator/C++ flows for analysis; not wired into this script |

## Verilator testbenches used for functional checking

Each row is a **FuseSoC core** built with `default_tool: verilator` and `toplevel` as listed. The **DUT** is the main RTL block under test; RTL is pulled in via `depend:` on `lowrisc:ip:aes`, `lowrisc:ip:aes_wrap`, etc., as declared in each `*_tb.core` (plus `lowrisc:prim_generic:all` for simulation-friendly primitives).

| Testbench | FuseSoC core | Toplevel | What functionality is checked | Testbench sources | Primary DUT (module) | DUT / RTL definition |
|-----------|----------------|----------|-------------------------------|---------------------|------------------------|----------------------|
| `aes_sbox_tb` | `lowrisc:dv_verilator:aes_sbox_tb` | `aes_sbox_tb` | All S-box implementations (LUT, Canright, masked, DOM) agree on outputs | `pre_dv/aes_sbox_tb/rtl/aes_sbox_tb.sv`, `pre_dv/aes_sbox_tb/cpp/aes_sbox_tb.cc` | `aes_sbox_lut`, `aes_sbox_canright`, `aes_sbox_canright_masked`, `aes_sbox_canright_masked_noreuse`, `aes_sbox_dom` | `rtl/aes_sbox_*.sv`, `rtl/aes_sbox.sv` — bundled via **`aes.core`** |
| `aes_cipher_core_tb` | `lowrisc:dv_verilator:aes_cipher_core_tb` | `aes_cipher_core_tb` | Cipher datapath (SubBytes, ShiftRows, MixColumns, KeyExpand, etc.) | `pre_dv/aes_cipher_core_tb/rtl/aes_cipher_core_tb.sv`, `cpp/aes_cipher_core_tb.cc` | `aes_cipher_core` | `rtl/aes_cipher_core.sv` (+ submodules) — **`aes.core`** |
| `aes_wrap_tb` | `lowrisc:dv_verilator:aes_wrap_tb` | `aes_wrap_tb` | Wrapper-level behavior around the AES block (FI-oriented wrapper) | `pre_dv/aes_wrap_tb/rtl/aes_wrap_tb.sv`, `cpp/aes_wrap_tb.cc` | `aes_wrap` | `rtl/aes_wrap.sv` — **`aes_wrap.core`** (depends on `lowrisc:ip:aes`) |
| `aes_tb` | `lowrisc:dv_verilator:aes_tb` | `aes_tb` | Full **`aes`** via TL-UL: modes including GCM; HW outputs vs OpenSSL reference (DPI) | `pre_dv/aes_tb/rtl/*.sv`, `pre_dv/aes_tb/cpp/aes_tb.cc`, `pre_dv/aes_tb/data/*.svh` | `aes` (full IP) | `rtl/aes.sv` — **`aes.core`**; crypto DPI: `model/crypto.c`, `dv/aes_model_dpi/` |

### Canonical DUT file lists (FuseSoC)

- **Main AES accelerator (most RTL):**  
  `hw/ip/aes/aes.core` — name `lowrisc:ip:aes:1.0` — lists all `rtl/*.sv` files for the block.
- **Wrapper-only toplevel:**  
  `hw/ip/aes/aes_wrap.core` — name `lowrisc:ip:aes_wrap:1.0` — adds `rtl/aes_wrap.sv` on top of the AES dependencies.

Testbench `.core` files live next to the benches:

- `pre_dv/aes_sbox_tb/aes_sbox_tb.core`
- `pre_dv/aes_cipher_core_tb/aes_cipher_core_tb.core`
- `pre_dv/aes_wrap_tb/aes_wrap_tb.core`
- `pre_dv/aes_tb/aes_tb.core`

Each `depend:` entry (e.g. `lowrisc:ip:aes`) is resolved by FuseSoC to the corresponding `*.core` and its `files:` list.

### Default test vector for `aes_tb`

The GCM / bus stimulus file is selected by `REQUESTS_FILE` in `pre_dv/aes_tb/aes_tb.core` (default include such as `gcm_k128_a20_d60.svh` under `pre_dv/aes_tb/data/`). Edit that define in the `.core` to point at another `*.svh` in the same directory.

## Manual FuseSoC invocation (without the script)

From `REPO_TOP`:

```bash
export PATH="/path/to/verilator/bin:$PATH"
fusesoc --cores-root=. run --build --work-root=hw/ip/aes/obj_fusesoc \
  --target=default --tool=verilator lowrisc:dv_verilator:aes_sbox_tb
```

Then run the generated simulator under the chosen `work-root` (see `WORK_ROOT` above).

## See also

- Per-bench notes: `pre_dv/aes_tb/README.md`, `pre_dv/aes_sbox_tb/README.md`, etc.
- Main UVM environment: `dv/README.md`
- OpenTitan Verilator chip flow (different top-level): `hw/top_earlgrey/dv/verilator/`
