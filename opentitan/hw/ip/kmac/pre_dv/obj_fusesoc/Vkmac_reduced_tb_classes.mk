# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vkmac_reduced_tb.mk for the caller.

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
	Vkmac_reduced_tb \
	Vkmac_reduced_tb___024root__DepSet_h9f08b532__0 \
	Vkmac_reduced_tb___024root__DepSet_h089a33c0__0 \
	Vkmac_reduced_tb___024root__DepSet_h089a33c0__1 \
	Vkmac_reduced_tb___024root__DepSet_h089a33c0__2 \
	Vkmac_reduced_tb___024root__DepSet_h089a33c0__3 \
	Vkmac_reduced_tb___024root__DepSet_h089a33c0__4 \
	Vkmac_reduced_tb_digestpp_dpi_pkg__DepSet_hcf6d557c__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vkmac_reduced_tb__ConstPool_0 \
	Vkmac_reduced_tb___024root__Slow \
	Vkmac_reduced_tb___024root__DepSet_h9f08b532__0__Slow \
	Vkmac_reduced_tb___024root__DepSet_h089a33c0__0__Slow \
	Vkmac_reduced_tb___024root__DepSet_h089a33c0__1__Slow \
	Vkmac_reduced_tb___024root__DepSet_h089a33c0__2__Slow \
	Vkmac_reduced_tb___024root__DepSet_h089a33c0__3__Slow \
	Vkmac_reduced_tb___024root__DepSet_h089a33c0__4__Slow \
	Vkmac_reduced_tb_digestpp_dpi_pkg__Slow \
	Vkmac_reduced_tb_digestpp_dpi_pkg__DepSet_hd83e93f2__0__Slow \
	Vkmac_reduced_tb_lc_ctrl_reg_pkg__Slow \
	Vkmac_reduced_tb_lc_ctrl_reg_pkg__DepSet_hbaee8aca__0__Slow \
	Vkmac_reduced_tb_csrng_reg_pkg__Slow \
	Vkmac_reduced_tb_csrng_reg_pkg__DepSet_he2068fb5__0__Slow \
	Vkmac_reduced_tb_edn_reg_pkg__Slow \
	Vkmac_reduced_tb_edn_reg_pkg__DepSet_hd62324c5__0__Slow \
	Vkmac_reduced_tb_keymgr_reg_pkg__Slow \
	Vkmac_reduced_tb_keymgr_reg_pkg__DepSet_hbae9fbe7__0__Slow \
	Vkmac_reduced_tb_kmac_reg_pkg__Slow \
	Vkmac_reduced_tb_kmac_reg_pkg__DepSet_hf3400d9d__0__Slow \
	Vkmac_reduced_tb_prim_sha2_pkg__Slow \
	Vkmac_reduced_tb_prim_sha2_pkg__DepSet_he7f28cbb__0__Slow \
	Vkmac_reduced_tb_sha3_pkg__Slow \
	Vkmac_reduced_tb_sha3_pkg__DepSet_hba59269f__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vkmac_reduced_tb__Dpi \
	Vkmac_reduced_tb__Trace__0 \
	Vkmac_reduced_tb__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vkmac_reduced_tb__Syms \
	Vkmac_reduced_tb__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_fst_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
