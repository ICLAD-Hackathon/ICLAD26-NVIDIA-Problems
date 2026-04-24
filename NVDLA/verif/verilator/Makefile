# Makefile
# Build system for Verilator testbench
# NVDLA Open Source Project
#
# Copyright (c) 2017 NVIDIA Corporation.  Licensed under the NVDLA Open
# Hardware License.  For more information, see the "LICENSE" file that came
# with this distribution.

DEPTH = ../..
include $(DEPTH)/tools/make/common.make

# C++ compiler for verilated code: use tree.make GCC/CXX (e.g. gcc-11), not CLANG (often llvm-4).
# Override on the make command line: make VERILATOR_CXX=/path/to/g++
VERILATOR_CC ?= $(GCC)
VERILATOR_CXX ?= $(CXX)

default: $(DEPTH)/$(OUTDIR)/$(PROJECT)/verilator/VNV_nvdla

VERILATOR_PARAMS ?= --compiler gcc --output-split 250000000 -Wno-WIDTH -Wno-IMPLICIT -Wno-MULTIDRIVEN -Wno-UNOPTFLAT -CFLAGS "-std=c++14"
# Perhaps you need to trace?
#   VERILATOR_PARAMS += --trace --trace-depth 7 --trace-max-array 8

# Perhaps you want to optimize?
#   VERILATOR_PARAMS += -O3
#   VMAKE_PARAMS += OPT_FAST=-O

# We end up hardcoding this, because the .f file applies only to nv_full,
# living in outdir, right now.  Otherwise, you're on your own...
$(DEPTH)/outdir/$(PROJECT)/verilator/VNV_nvdla.mk: verilator_$(PROJECT).f ../../outdir/$(PROJECT)/vmod # and a lot of RTL...
	$(VERILATOR) $(VERILATOR_PARAMS) --cc --exe -f verilator_$(PROJECT).f --Mdir ../../outdir/$(PROJECT)/verilator/ nvdla.cpp --compiler gcc --output-split 250000000

# Second makefile is read after VNV_nvdla.mk (so after include verilated.mk).  Appending to
# VNV_nvdla.mk only when Verilator re-runs misses incremental C++ builds; -f strip always applies.
VERILATED_STRIP_CET_MK := $(abspath $(DEPTH)/verif/verilator/verilated_strip_cet.mk)

$(DEPTH)/$(OUTDIR)/$(PROJECT)/verilator/VNV_nvdla: $(DEPTH)/$(OUTDIR)/$(PROJECT)/verilator/VNV_nvdla.mk nvdla.cpp
	rm -f $(DEPTH)/$(OUTDIR)/$(PROJECT)/verilator/nvdla.cpp
	cp nvdla.cpp $(DEPTH)/$(OUTDIR)/$(PROJECT)/verilator/nvdla.cpp
	$(MAKE) -C $(DEPTH)/$(OUTDIR)/$(PROJECT)/verilator -f VNV_nvdla.mk -f $(VERILATED_STRIP_CET_MK) CC=$(VERILATOR_CC) CXX=$(VERILATOR_CXX) VM_PARALLEL_BUILDS=1 $(VMAKE_PARAMS)

$(DEPTH)/$(OUTDIR)/$(PROJECT)/verilator/test/%/trace.bin: $(DEPTH)/verif/tests/trace_tests/$(PROJECT)/%/ new_trace_to_verilator.py
	rm -rf $@
	mkdir -p $(dir $@)
	cd $(dir $@) && $(abspath $(DEPTH))/verif/tools/nvdla_trace_parser.py --file_path $(abspath $</$*.cfg)
	PYTHONPATH=$(DEPTH)/outdir/$(PROJECT)/spec/manual $(PYTHON) new_trace_to_verilator.py $(dir $@) $@

run: $(DEPTH)/$(OUTDIR)/$(PROJECT)/verilator/test/$(TEST)/trace.bin $(DEPTH)/$(OUTDIR)/$(PROJECT)/verilator/VNV_nvdla
	cd $(DEPTH)/$(OUTDIR)/$(PROJECT)/verilator/test/$(TEST) && ../../VNV_nvdla trace.bin

# List trace test names (subdirs of verif/tests/trace_tests/$(PROJECT)/)
list-tests:
	@echo "Trace tests for PROJECT=$(PROJECT):"
	@ls -1 $(DEPTH)/verif/tests/trace_tests/$(PROJECT) 2>/dev/null || { echo "(none)"; exit 1; }
