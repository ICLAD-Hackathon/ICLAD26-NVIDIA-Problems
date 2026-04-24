#!/usr/bin/env bash

./tools/bin/tmake -clean -build vmod
./tools/bin/tmake -build verilator

cd verif/verilator
TEST_PREFIXES= ./run_all_trace_tests.sh --list-only
TEST_PREFIXES= ./run_all_trace_tests.sh
