# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vaes_tb.mk for the caller.

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
	Vaes_tb \
	Vaes_tb___024root__DepSet_hadd3466e__0 \
	Vaes_tb___024root__DepSet_hadd3466e__1 \
	Vaes_tb___024root__DepSet_hadd3466e__2 \
	Vaes_tb___024root__DepSet_hadd3466e__3 \
	Vaes_tb___024root__DepSet_h46619f57__0 \
	Vaes_tb___024root__DepSet_h46619f57__1 \
	Vaes_tb_aes_model_dpi_pkg__DepSet_hed435109__0 \
	Vaes_tb_prim_onehot_mux__W80_I3__DepSet_h4a4df05e__0 \
	Vaes_tb_prim_onehot_mux__W80_I3__DepSet_h4a4df05e__1 \
	Vaes_tb_prim_onehot_check__O3_ABz3_Sz3__DepSet_h21de0694__0 \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__0 \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__1 \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__2 \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__3 \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__4 \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__5 \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__6 \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__7 \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__8 \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__9 \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__10 \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__11 \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__12 \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__13 \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__14 \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__15 \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__16 \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__17 \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__18 \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__19 \
	Vaes_tb_aes_sbox__S4__DepSet_h9f0413a6__0 \
	Vaes_tb_aes_sbox__S4__DepSet_h9f0413a6__1 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vaes_tb__ConstPool_0 \
	Vaes_tb___024root__Slow \
	Vaes_tb___024root__DepSet_hadd3466e__0__Slow \
	Vaes_tb___024root__DepSet_hadd3466e__1__Slow \
	Vaes_tb___024root__DepSet_hadd3466e__2__Slow \
	Vaes_tb___024root__DepSet_h46619f57__0__Slow \
	Vaes_tb___024root__DepSet_h46619f57__1__Slow \
	Vaes_tb___024root__DepSet_h46619f57__2__Slow \
	Vaes_tb_lc_ctrl_reg_pkg__Slow \
	Vaes_tb_lc_ctrl_reg_pkg__DepSet_h6e924f59__0__Slow \
	Vaes_tb_csrng_reg_pkg__Slow \
	Vaes_tb_csrng_reg_pkg__DepSet_hc158e1f7__0__Slow \
	Vaes_tb_edn_reg_pkg__Slow \
	Vaes_tb_edn_reg_pkg__DepSet_h538c73de__0__Slow \
	Vaes_tb_keymgr_reg_pkg__Slow \
	Vaes_tb_keymgr_reg_pkg__DepSet_h2ba168ff__0__Slow \
	Vaes_tb___024unit__Slow \
	Vaes_tb___024unit__DepSet_h2d6e0830__0__Slow \
	Vaes_tb_aes_model_dpi_pkg__Slow \
	Vaes_tb_aes_model_dpi_pkg__DepSet_h05f1887e__0__Slow \
	Vaes_tb_aes_tb_pkg__Slow \
	Vaes_tb_aes_tb_pkg__DepSet_he6eba0ee__0__Slow \
	Vaes_tb_aes_tb_pkg__DepSet_he6eba0ee__1__Slow \
	Vaes_tb_prim_sha2_pkg__Slow \
	Vaes_tb_prim_sha2_pkg__DepSet_hbc012917__0__Slow \
	Vaes_tb_prim_onehot_mux__W80_I3__Slow \
	Vaes_tb_prim_onehot_mux__W80_I3__DepSet_h66f7e947__0__Slow \
	Vaes_tb_prim_onehot_check__O3_ABz3_Sz3__Slow \
	Vaes_tb_prim_onehot_check__O3_ABz3_Sz3__DepSet_hd2646001__0__Slow \
	Vaes_tb_aes_sbox__S4__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__0__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__1__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__2__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__3__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__4__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__5__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__6__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__7__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__8__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__9__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__10__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__11__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__12__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__13__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__14__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__15__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__16__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__17__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__18__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__19__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h1271ca31__20__Slow \
	Vaes_tb_aes_sbox__S4__DepSet_h9f0413a6__0__Slow \
	Vaes_tb_aes_reg_pkg__Slow \
	Vaes_tb_aes_reg_pkg__DepSet_h56e61ed7__0__Slow \
	Vaes_tb_aes_sbox_canright_pkg__Slow \
	Vaes_tb_aes_sbox_canright_pkg__DepSet_hbd3157a8__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vaes_tb__Dpi \
	Vaes_tb__Trace__0 \
	Vaes_tb__Trace__1 \
	Vaes_tb__Trace__2 \
	Vaes_tb__Trace__3 \
	Vaes_tb__Trace__4 \
	Vaes_tb__Trace__5 \
	Vaes_tb__Trace__6 \
	Vaes_tb__Trace__7 \
	Vaes_tb__Trace__8 \
	Vaes_tb__Trace__9 \
	Vaes_tb__Trace__10 \
	Vaes_tb__Trace__11 \
	Vaes_tb__Trace__12 \
	Vaes_tb__Trace__13 \
	Vaes_tb__Trace__14 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vaes_tb__Syms \
	Vaes_tb__Trace__0__Slow \
	Vaes_tb__Trace__1__Slow \
	Vaes_tb__Trace__2__Slow \
	Vaes_tb__Trace__3__Slow \
	Vaes_tb__Trace__4__Slow \
	Vaes_tb__Trace__5__Slow \
	Vaes_tb__Trace__6__Slow \
	Vaes_tb__Trace__7__Slow \
	Vaes_tb__Trace__8__Slow \
	Vaes_tb__Trace__9__Slow \
	Vaes_tb__Trace__10__Slow \
	Vaes_tb__Trace__11__Slow \
	Vaes_tb__Trace__12__Slow \
	Vaes_tb__Trace__13__Slow \
	Vaes_tb__Trace__14__Slow \
	Vaes_tb__Trace__15__Slow \
	Vaes_tb__Trace__16__Slow \
	Vaes_tb__Trace__17__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_fst_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
