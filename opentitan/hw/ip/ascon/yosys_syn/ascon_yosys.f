# OpenTitan ASCON Yosys Filelist
# Based on pre_dv/obj_fusesoc/lowrisc_dv_verilator_ascon_sim_0.1.vc
#
# Top Module: ascon
#
# Run from yosys_syn directory:
#   source env.sh
#   yosys -c syn.tcl

# Include directories
-I../rtl
-I../../prim/rtl
-I../../prim_generic/rtl
-I../../tlul/rtl
-I../../lc_ctrl/rtl
-I../../edn/rtl
-I../../keymgr/rtl
-I../../csrng/rtl
-I../../entropy_src/rtl
-I../../../top_earlgrey/rtl

# ==============================================================================
# Dependency Packages (from pre_dv .vc file)
# Must be listed in dependency order
# ==============================================================================

# top-level packages (required by tlul modules)
../../../top_earlgrey/rtl/top_pkg.sv

# prim packages (base packages, no external dependencies)
../../prim/rtl/prim_util_pkg.sv
../../prim/rtl/prim_mubi_pkg.sv
../../prim/rtl/prim_secded_pkg.sv
../../prim/rtl/prim_alert_pkg.sv
../../prim/rtl/prim_subreg_pkg.sv
../../prim/rtl/prim_count_pkg.sv
../../prim/rtl/prim_ascon_pkg.sv

# tlul packages
../../tlul/rtl/tlul_pkg.sv

# lc_ctrl packages
../../lc_ctrl/rtl/lc_ctrl_state_pkg.sv
../../lc_ctrl/rtl/lc_ctrl_reg_pkg.sv
../../lc_ctrl/rtl/lc_ctrl_pkg.sv

# entropy_src packages
../../entropy_src/rtl/entropy_src_pkg.sv

# csrng packages
../../csrng/rtl/csrng_reg_pkg.sv
../../csrng/rtl/csrng_pkg.sv

# edn packages
../../edn/rtl/edn_reg_pkg.sv
../../edn/rtl/edn_pkg.sv

# keymgr packages
../../keymgr/rtl/keymgr_reg_pkg.sv
../../keymgr/rtl/keymgr_pkg.sv

# ASCON packages
../rtl/ascon_pkg.sv
../rtl/ascon_reg_pkg.sv

# ==============================================================================
# OpenTitan Dependency Sources
# Only modules actually instantiated by ASCON
# ==============================================================================

# tlul sources (used by ascon_reg_top)
../../tlul/rtl/tlul_cmd_intg_chk.sv
../../tlul/rtl/tlul_rsp_intg_gen.sv
../../tlul/rtl/tlul_data_integ_dec.sv
../../tlul/rtl/tlul_data_integ_enc.sv
../../tlul/rtl/tlul_adapter_reg.sv
../../tlul/rtl/tlul_err.sv

# prim sources (used by ascon_reg_top)
../../prim/rtl/prim_secded_inv_64_57_dec.sv
../../prim/rtl/prim_secded_inv_64_57_enc.sv
../../prim/rtl/prim_secded_inv_39_32_dec.sv
../../prim/rtl/prim_secded_inv_39_32_enc.sv
../../prim/rtl/prim_subreg.sv
../../prim/rtl/prim_subreg_ext.sv
../../prim/rtl/prim_subreg_shadow.sv
../../prim/rtl/prim_subreg_arb.sv
../../prim/rtl/prim_reg_we_check.sv
../../prim/rtl/prim_onehot_check.sv
../../prim/rtl/prim_sparse_fsm_flop.sv

# prim sources (used by ascon.sv)
../../prim/rtl/prim_alert_sender.sv
../../prim/rtl/prim_diff_decode.sv
../../prim/rtl/prim_sync_reqack_data.sv
../../prim/rtl/prim_sync_reqack.sv
../../prim/rtl/prim_lc_sync.sv
../../prim/rtl/prim_sec_anchor_buf.sv
../../prim/rtl/prim_sec_anchor_flop.sv

# prim_ascon sources (used by ascon_core)
../../prim/rtl/prim_ascon_duplex.sv
../../prim/rtl/prim_ascon_round.sv
../../prim/rtl/prim_ascon_sbox.sv
../../prim/rtl/prim_count.sv

# prim_generic sources (technology-independent implementations)
../../prim_generic/rtl/prim_flop_2sync.sv
../../prim_generic/rtl/prim_flop.sv
../../prim_generic/rtl/prim_flop_en.sv
../../prim_generic/rtl/prim_and2.sv
../../prim_generic/rtl/prim_buf.sv
../../prim_generic/rtl/prim_xor2.sv
../../prim_generic/rtl/prim_xnor2.sv

# ==============================================================================
# Core ASCON Sources
# ==============================================================================

../rtl/ascon_reg_top.sv
../rtl/ascon_core.sv
../rtl/ascon.sv
