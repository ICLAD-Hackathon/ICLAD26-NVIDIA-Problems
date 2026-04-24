# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vprim_ascon_duplex_tb.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vprim_ascon_duplex_tb \
	Vprim_ascon_duplex_tb___024root__DepSet_h7adb943d__0 \
	Vprim_ascon_duplex_tb___024root__DepSet_h7adb943d__1 \
	Vprim_ascon_duplex_tb_ascon_model_dpi_pkg__DepSet_h0d6a9308__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vprim_ascon_duplex_tb__ConstPool_0 \
	Vprim_ascon_duplex_tb___024root__Slow \
	Vprim_ascon_duplex_tb___024root__DepSet_h22703fed__0__Slow \
	Vprim_ascon_duplex_tb___024root__DepSet_h7adb943d__0__Slow \
	Vprim_ascon_duplex_tb_lc_ctrl_reg_pkg__Slow \
	Vprim_ascon_duplex_tb_lc_ctrl_reg_pkg__DepSet_h88e0e1ba__0__Slow \
	Vprim_ascon_duplex_tb_ascon_model_dpi_pkg__Slow \
	Vprim_ascon_duplex_tb_ascon_model_dpi_pkg__DepSet_h8fc12f98__0__Slow \
	Vprim_ascon_duplex_tb_prim_sha2_pkg__Slow \
	Vprim_ascon_duplex_tb_prim_sha2_pkg__DepSet_hb3874464__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vprim_ascon_duplex_tb__Dpi \
	Vprim_ascon_duplex_tb__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vprim_ascon_duplex_tb__Syms \
	Vprim_ascon_duplex_tb__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_fst_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
