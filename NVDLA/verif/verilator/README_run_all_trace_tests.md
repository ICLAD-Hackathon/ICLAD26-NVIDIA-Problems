# run_all_trace_tests.sh

A script to run Verilator trace tests for NVDLA verification.

## Prerequisites

Build the Verilator simulator before running tests:

```bash
cd /path/to/NVDLA
./tools/bin/tmake -build verilator
```

## Basic Usage

```bash
cd verif/verilator
./run_all_trace_tests.sh
```

By default, this runs only `dc_` and `img_` prefixed tests (23 tests total).

## Running More Tests

### Run ALL trace tests (except excluded ones)

Set `TEST_PREFIXES` to empty to include all test prefixes:

```bash
TEST_PREFIXES= ./run_all_trace_tests.sh
```

This runs tests from all categories: `dc_`, `img_`, `cdp_`, `pdp_`, `sdp_` (85 tests total for nv_small).

### Run specific test categories

Specify which prefixes to include (space-separated):

```bash
# Run only SDP tests
TEST_PREFIXES="sdp_" ./run_all_trace_tests.sh

# Run CDP and PDP tests
TEST_PREFIXES="cdp_ pdp_" ./run_all_trace_tests.sh

# Run all convolution-related tests
TEST_PREFIXES="dc_ img_" ./run_all_trace_tests.sh
```

### Available test prefixes for nv_small

| Prefix | Description | Count |
|--------|-------------|-------|
| `dc_`  | Direct Convolution | 13 |
| `img_` | Image input convolution | 10 |
| `cdp_` | Channel Data Processor | 23 |
| `pdp_` | Planar Data Processor | 15 |
| `sdp_` | Single Data Processor | 24 |

## Environment Variables

| Variable | Default | Description |
|----------|---------|-------------|
| `PROJECT` | `nv_small` | Target project (e.g., `nv_small`, `nv_small_256`, `nv_large`) |
| `OUTDIR` | `outdir` | Build output directory |
| `TEST_PREFIXES` | `dc_ img_` | Space-separated prefixes to include. Set empty for all tests. |
| `EXCLUDE_TESTS` | *(see below)* | Space-separated test names to skip |
| `TEST_TIMEOUT_SEC` | `3600` | Max wall-clock seconds per test (1 hour) |
| `NVDLA_MAX_TICKS` | *(unset)* | Optional tick limit passed to simulator |

### Default excluded tests

These tests require `SDP_EW_ENABLE` which is disabled in `nv_small`:

- `sdp_3x3x32_ew_lo_lin_int8`
- `sdp_3x3x33_ew_int8_reg_0`
- `sdp_3x3x33_ew_le_exp_int8`
- `sdp_3x3x33_ew_le_lin_int8`

To run these tests anyway (they will fail on nv_small):

```bash
EXCLUDE_TESTS= TEST_PREFIXES="sdp_" ./run_all_trace_tests.sh
```

## Command-line Options

| Option | Description |
|--------|-------------|
| `--list-only`, `-l` | List matching test names without running |
| `--dry-run`, `-n` | Show what would run without executing |
| `-h`, `--help` | Show help message |

## Examples

```bash
# List all available tests
TEST_PREFIXES= ./run_all_trace_tests.sh --list-only

# Dry run to see what would execute
TEST_PREFIXES= ./run_all_trace_tests.sh --dry-run

# Run with longer timeout (2 hours per test)
TEST_TIMEOUT_SEC=7200 ./run_all_trace_tests.sh

# Run for a different project
PROJECT=nv_small_256 ./run_all_trace_tests.sh

# Run all tests with custom output directory
TEST_PREFIXES= OUTDIR=my_build ./run_all_trace_tests.sh
```

## Output

The script produces:
- Per-test progress with `[PASS]`, `[FAIL]`, or `[SKIP]` status
- A summary table at the end
- Exit code 0 if all tests pass, 1 if any fail

Example output:
```
PROJECT=nv_small  TRACE_ROOT=.../trace_tests/nv_small  (23 tests)
TEST_PREFIXES=dc_ img_ (name must start with one of these)
EXCLUDE_TESTS: 4 test(s) excluded
TEST_TIMEOUT_SEC=3600 (per test; exceeded => failed)
---
========== TEST: dc_1x1x1024_5x5x1024x1024_int8_0 ==========
...
[PASS] dc_1x1x1024_5x5x1024x1024_int8_0

---------------------------------------------
TEST                           RESULT    DETAIL
---------------------------------------------
dc_1x1x1024_5x5x1024x1024_int8_0  PASS
...
---------------------------------------------

Done: 23 passed, 0 failed
      PROJECT=nv_small  skipped=0
```
