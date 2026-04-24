# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vascon_sim.mk for the caller.

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
	Vascon_sim \
	Vascon_sim___024root__DepSet_hd8b4469e__0 \
	Vascon_sim___024root__DepSet_hd8b4469e__1 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vascon_sim__ConstPool_0 \
	Vascon_sim___024root__Slow \
	Vascon_sim___024root__DepSet_hd8b4469e__0__Slow \
	Vascon_sim___024root__DepSet_hd8b4469e__1__Slow \
	Vascon_sim___024root__DepSet_hd8b4469e__2__Slow \
	Vascon_sim_lc_ctrl_reg_pkg__Slow \
	Vascon_sim_lc_ctrl_reg_pkg__DepSet_h511d5547__0__Slow \
	Vascon_sim_csrng_reg_pkg__Slow \
	Vascon_sim_csrng_reg_pkg__DepSet_h8d6660f8__0__Slow \
	Vascon_sim_edn_reg_pkg__Slow \
	Vascon_sim_edn_reg_pkg__DepSet_h40d423d9__0__Slow \
	Vascon_sim_keymgr_reg_pkg__Slow \
	Vascon_sim_keymgr_reg_pkg__DepSet_h8c7e5770__0__Slow \
	Vascon_sim_ascon_reg_pkg__Slow \
	Vascon_sim_ascon_reg_pkg__DepSet_h1c8b4f26__0__Slow \
	Vascon_sim_prim_sha2_pkg__Slow \
	Vascon_sim_prim_sha2_pkg__DepSet_h19db80dc__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vascon_sim__Dpi \
	Vascon_sim__Trace__0 \
	Vascon_sim__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vascon_sim__Syms \
	Vascon_sim__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_fst_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
