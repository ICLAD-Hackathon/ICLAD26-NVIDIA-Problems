# OpenTitan KMAC Yosys Filelist
# For synthesis with ASAP7 PDK
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
# Dependency Packages
# Must be listed in dependency order - packages that others depend on first
# ==============================================================================

# prim packages (base packages, no external dependencies)
../../prim/rtl/prim_util_pkg.sv
../../prim/rtl/prim_mubi_pkg.sv
../../prim/rtl/prim_secded_pkg.sv
../../prim/rtl/prim_alert_pkg.sv
../../prim/rtl/prim_subreg_pkg.sv
../../prim/rtl/prim_ascon_pkg.sv
../../prim/rtl/prim_cipher_pkg.sv
../../prim/rtl/prim_count_pkg.sv
../../prim/rtl/prim_esc_pkg.sv
../../prim/rtl/prim_pad_wrapper_pkg.sv
../../prim/rtl/prim_sha2_pkg.sv
../../prim/rtl/prim_trivium_pkg.sv

# tlul packages
../../tlul/rtl/tlul_pkg.sv

# lc_ctrl packages
../../lc_ctrl/rtl/lc_ctrl_pkg.sv
../../lc_ctrl/rtl/lc_ctrl_reg_pkg.sv
../../lc_ctrl/rtl/lc_ctrl_state_pkg.sv

# top_earlgrey packages (note: top_earlgrey is under hw/, not hw/ip/)
../../../top_earlgrey/rtl/ibex_pmp_reset_pkg.sv
../../../top_earlgrey/rtl/jtag_id_pkg.sv
../../../top_earlgrey/rtl/prim_xilinx_pkg.sv
../../../top_earlgrey/rtl/scan_role_pkg.sv
../../../top_earlgrey/rtl/top_pkg.sv

# entropy_src packages (needed by edn_pkg)
../../entropy_src/rtl/entropy_src_ack_sm_pkg.sv
../../entropy_src/rtl/entropy_src_main_sm_pkg.sv
../../entropy_src/rtl/entropy_src_pkg.sv
../../entropy_src/rtl/entropy_src_reg_pkg.sv

# csrng packages (needed by edn_pkg)
../../csrng/rtl/csrng_pkg.sv
../../csrng/rtl/csrng_reg_pkg.sv

# edn packages (depends on entropy_src_pkg and csrng_pkg)
../../edn/rtl/edn_pkg.sv
../../edn/rtl/edn_reg_pkg.sv

# keymgr packages
../../keymgr/rtl/keymgr_pkg.sv
../../keymgr/rtl/keymgr_reg_pkg.sv

# KMAC/SHA3 packages
../rtl/sha3_pkg.sv
../rtl/kmac_pkg.sv
../rtl/kmac_reg_pkg.sv

# ==============================================================================
# OpenTitan Dependency Sources
# ==============================================================================

# tlul sources
../../tlul/rtl/tlul_adapter_reg.sv
../../tlul/rtl/tlul_err.sv
../../tlul/rtl/tlul_cmd_intg_chk.sv
../../tlul/rtl/tlul_rsp_intg_gen.sv
../../tlul/rtl/tlul_data_integ_dec.sv
../../tlul/rtl/tlul_data_integ_enc.sv
../../tlul/rtl/tlul_adapter_sram.sv
../../tlul/rtl/tlul_sram_byte.sv
../../tlul/rtl/tlul_socket_1n.sv
../../tlul/rtl/tlul_err_resp.sv
../../tlul/rtl/tlul_fifo_sync.sv

# prim sources
../../prim/rtl/prim_secded_inv_64_57_dec.sv
../../prim/rtl/prim_secded_inv_64_57_enc.sv
../../prim/rtl/prim_secded_inv_39_32_dec.sv
../../prim/rtl/prim_secded_inv_39_32_enc.sv
../../prim/rtl/prim_sparse_fsm_flop.sv
../../prim/rtl/prim_subreg.sv
../../prim/rtl/prim_subreg_ext.sv
../../prim/rtl/prim_subreg_shadow.sv
../../prim/rtl/prim_subreg_arb.sv
../../prim/rtl/prim_alert_sender.sv
../../prim/rtl/prim_diff_decode.sv
../../prim/rtl/prim_lc_sync.sv
../../prim/rtl/prim_sync_reqack_data.sv
../../prim/rtl/prim_sync_reqack.sv
../../prim/rtl/prim_trivium.sv
../../prim/rtl/prim_packer_fifo.sv
../../prim/rtl/prim_lfsr.sv
../../prim/rtl/prim_cdc_rand_delay.sv
../../prim/rtl/prim_reg_we_check.sv
../../prim/rtl/prim_onehot_check.sv
../../prim/rtl/prim_mubi4_sender.sv
../../prim/rtl/prim_fifo_sync_cnt.sv
../../prim/rtl/prim_sec_anchor_buf.sv
../../prim/rtl/prim_sec_anchor_flop.sv
../../prim/rtl/prim_dom_and_2share.sv
../../prim/rtl/prim_keccak.sv
../../prim/rtl/prim_slicer.sv
../../prim/rtl/prim_intr_hw.sv
../../prim/rtl/prim_edn_req.sv
../../prim/rtl/prim_fifo_sync.sv
../../prim/rtl/prim_arbiter_fixed.sv
../../prim/rtl/prim_packer.sv
../../prim/rtl/prim_count.sv
../../prim/rtl/prim_double_lfsr.sv

# prim_generic sources (technology-independent implementations)
../../prim_generic/rtl/prim_flop_2sync.sv
../../prim_generic/rtl/prim_flop.sv
../../prim_generic/rtl/prim_flop_en.sv
../../prim_generic/rtl/prim_and2.sv
../../prim_generic/rtl/prim_buf.sv
../../prim_generic/rtl/prim_xor2.sv
../../prim_generic/rtl/prim_xnor2.sv

# ==============================================================================
# Core KMAC Sources
# ==============================================================================

../rtl/keccak_round.sv
../rtl/keccak_2share.sv
../rtl/sha3pad.sv
../rtl/sha3.sv
../rtl/kmac_core.sv
../rtl/kmac_app.sv
../rtl/kmac_entropy.sv
../rtl/kmac_errchk.sv
../rtl/kmac_msgfifo.sv
../rtl/kmac_reduced.sv
../rtl/kmac_staterd.sv
../rtl/kmac_reg_top.sv
../rtl/kmac.sv
