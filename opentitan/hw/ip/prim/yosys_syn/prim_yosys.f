# OpenTitan Prim Library Yosys Filelist
# For synthesis with ASAP7 PDK
#
# This filelist includes ALL prim modules for flexibility.
# Set DESIGN_NAME to choose which module to synthesize as top.
#
# Example top modules:
#   prim_fifo_sync      - Synchronous FIFO
#   prim_arbiter_fixed  - Fixed priority arbiter
#   prim_lfsr           - Linear feedback shift register
#   prim_count          - Secure counter
#   prim_keccak         - Keccak permutation
#   prim_sha2           - SHA2 hash core
#   prim_present        - PRESENT cipher
#   prim_prince         - PRINCE cipher
#   prim_aes_sbox       - AES S-Box
#
# Run from yosys_syn directory:
#   source env.sh
#   DESIGN_NAME=prim_fifo_sync yosys -c syn.tcl

# Include directories
-I../rtl
-I../../prim_generic/rtl
-I../../lc_ctrl/rtl
-I../../tlul/rtl
-I../../edn/rtl
-I../../entropy_src/rtl
-I../../csrng/rtl
-I../../keymgr/rtl
-I../../../top_earlgrey/rtl

# ==============================================================================
# Prim Packages (12 packages)
# Must be listed in dependency order
# ==============================================================================

../rtl/prim_util_pkg.sv
../rtl/prim_mubi_pkg.sv
../rtl/prim_secded_pkg.sv
../rtl/prim_alert_pkg.sv
../rtl/prim_subreg_pkg.sv
../rtl/prim_ascon_pkg.sv
../rtl/prim_cipher_pkg.sv
../rtl/prim_count_pkg.sv
../rtl/prim_esc_pkg.sv
../rtl/prim_pad_wrapper_pkg.sv
../rtl/prim_sha2_pkg.sv
../rtl/prim_trivium_pkg.sv

# External dependency packages (for modules that use them)
../../lc_ctrl/rtl/lc_ctrl_pkg.sv
../../lc_ctrl/rtl/lc_ctrl_reg_pkg.sv
../../lc_ctrl/rtl/lc_ctrl_state_pkg.sv
../../tlul/rtl/tlul_pkg.sv
../../entropy_src/rtl/entropy_src_pkg.sv
../../entropy_src/rtl/entropy_src_reg_pkg.sv
../../entropy_src/rtl/entropy_src_ack_sm_pkg.sv
../../entropy_src/rtl/entropy_src_main_sm_pkg.sv
../../csrng/rtl/csrng_pkg.sv
../../csrng/rtl/csrng_reg_pkg.sv
../../edn/rtl/edn_pkg.sv
../../edn/rtl/edn_reg_pkg.sv
../../keymgr/rtl/keymgr_pkg.sv
../../keymgr/rtl/keymgr_reg_pkg.sv
../../../top_earlgrey/rtl/top_pkg.sv
../../../top_earlgrey/rtl/ibex_pmp_reset_pkg.sv
../../../top_earlgrey/rtl/jtag_id_pkg.sv
../../../top_earlgrey/rtl/prim_xilinx_pkg.sv
../../../top_earlgrey/rtl/scan_role_pkg.sv

# ==============================================================================
# prim_generic sources (technology-independent implementations)
# ==============================================================================

../../prim_generic/rtl/prim_flop_2sync.sv
../../prim_generic/rtl/prim_flop.sv
../../prim_generic/rtl/prim_flop_en.sv
../../prim_generic/rtl/prim_and2.sv
../../prim_generic/rtl/prim_buf.sv
../../prim_generic/rtl/prim_xor2.sv
../../prim_generic/rtl/prim_xnor2.sv

# ==============================================================================
# Prim Modules (146 modules)
# ==============================================================================

# Alert and Escape modules
../rtl/prim_alert_receiver.sv
../rtl/prim_alert_sender.sv
../rtl/prim_alert_to_diff.sv
../rtl/prim_diff_decode.sv
../rtl/prim_diff_encode.sv
../rtl/prim_diff_to_alert.sv
../rtl/prim_esc_receiver.sv
../rtl/prim_esc_sender.sv

# Arbiter modules
../rtl/prim_arbiter_fixed.sv
../rtl/prim_arbiter_ppc.sv
../rtl/prim_arbiter_tree.sv
../rtl/prim_arbiter_tree_dup.sv
../rtl/prim_sram_arbiter.sv

# FIFO modules
../rtl/prim_fifo_async.sv
../rtl/prim_fifo_async_simple.sv
../rtl/prim_fifo_async_sram_adapter.sv
../rtl/prim_fifo_sync.sv
../rtl/prim_fifo_sync_cnt.sv

# Counter and LFSR modules
../rtl/prim_count.sv
../rtl/prim_lfsr.sv
../rtl/prim_double_lfsr.sv
../rtl/prim_xoshiro256pp.sv

# Clock and sync modules
../rtl/prim_clock_gating_sync.sv
../rtl/prim_clock_meas.sv
../rtl/prim_clock_timeout.sv
../rtl/prim_pulse_sync.sv
../rtl/prim_sync_reqack.sv
../rtl/prim_sync_reqack_data.sv
../rtl/prim_sync_slow_fast.sv
../rtl/prim_multibit_sync.sv

# CDC modules
../rtl/prim_cdc_rand_delay.sv
../rtl/prim_reg_cdc.sv
../rtl/prim_reg_cdc_arb.sv

# Filter modules
../rtl/prim_filter.sv
../rtl/prim_filter_ctr.sv
../rtl/prim_edge_detector.sv

# Lifecycle control modules
../rtl/prim_lc_and_hardened.sv
../rtl/prim_lc_combine.sv
../rtl/prim_lc_dec.sv
../rtl/prim_lc_or_hardened.sv
../rtl/prim_lc_sender.sv
../rtl/prim_lc_sync.sv

# Multi-bit integrity modules (MuBi)
../rtl/prim_mubi4_dec.sv
../rtl/prim_mubi4_sender.sv
../rtl/prim_mubi4_sync.sv
../rtl/prim_mubi8_dec.sv
../rtl/prim_mubi8_sender.sv
../rtl/prim_mubi8_sync.sv
../rtl/prim_mubi12_dec.sv
../rtl/prim_mubi12_sender.sv
../rtl/prim_mubi12_sync.sv
../rtl/prim_mubi16_dec.sv
../rtl/prim_mubi16_sender.sv
../rtl/prim_mubi16_sync.sv
../rtl/prim_mubi20_dec.sv
../rtl/prim_mubi20_sender.sv
../rtl/prim_mubi20_sync.sv
../rtl/prim_mubi24_dec.sv
../rtl/prim_mubi24_sender.sv
../rtl/prim_mubi24_sync.sv
../rtl/prim_mubi28_dec.sv
../rtl/prim_mubi28_sender.sv
../rtl/prim_mubi28_sync.sv
../rtl/prim_mubi32_dec.sv
../rtl/prim_mubi32_sender.sv
../rtl/prim_mubi32_sync.sv

# One-hot modules
../rtl/prim_onehot_check.sv
../rtl/prim_onehot_enc.sv
../rtl/prim_onehot_mux.sv

# Packer modules
../rtl/prim_packer.sv
../rtl/prim_packer_fifo.sv
../rtl/prim_slicer.sv
../rtl/prim_msb_extend.sv

# SECDED (Single Error Correction, Double Error Detection) modules
../rtl/prim_secded_22_16_dec.sv
../rtl/prim_secded_22_16_enc.sv
../rtl/prim_secded_28_22_dec.sv
../rtl/prim_secded_28_22_enc.sv
../rtl/prim_secded_39_32_dec.sv
../rtl/prim_secded_39_32_enc.sv
../rtl/prim_secded_64_57_dec.sv
../rtl/prim_secded_64_57_enc.sv
../rtl/prim_secded_72_64_dec.sv
../rtl/prim_secded_72_64_enc.sv
../rtl/prim_secded_hamming_22_16_dec.sv
../rtl/prim_secded_hamming_22_16_enc.sv
../rtl/prim_secded_hamming_39_32_dec.sv
../rtl/prim_secded_hamming_39_32_enc.sv
../rtl/prim_secded_hamming_72_64_dec.sv
../rtl/prim_secded_hamming_72_64_enc.sv
../rtl/prim_secded_hamming_76_68_dec.sv
../rtl/prim_secded_hamming_76_68_enc.sv
../rtl/prim_secded_inv_22_16_dec.sv
../rtl/prim_secded_inv_22_16_enc.sv
../rtl/prim_secded_inv_28_22_dec.sv
../rtl/prim_secded_inv_28_22_enc.sv
../rtl/prim_secded_inv_39_32_dec.sv
../rtl/prim_secded_inv_39_32_enc.sv
../rtl/prim_secded_inv_64_57_dec.sv
../rtl/prim_secded_inv_64_57_enc.sv
../rtl/prim_secded_inv_72_64_dec.sv
../rtl/prim_secded_inv_72_64_enc.sv
../rtl/prim_secded_inv_hamming_22_16_dec.sv
../rtl/prim_secded_inv_hamming_22_16_enc.sv
../rtl/prim_secded_inv_hamming_39_32_dec.sv
../rtl/prim_secded_inv_hamming_39_32_enc.sv
../rtl/prim_secded_inv_hamming_72_64_dec.sv
../rtl/prim_secded_inv_hamming_72_64_enc.sv
../rtl/prim_secded_inv_hamming_76_68_dec.sv
../rtl/prim_secded_inv_hamming_76_68_enc.sv

# Crypto modules
../rtl/prim_present.sv
../rtl/prim_prince.sv
../rtl/prim_subst_perm.sv
../rtl/prim_keccak.sv
../rtl/prim_dom_and_2share.sv
../rtl/prim_trivium.sv
../rtl/prim_crc32.sv
../rtl/prim_gf_mult.sv

# ASCON modules
../rtl/prim_ascon_duplex.sv
../rtl/prim_ascon_round.sv
../rtl/prim_ascon_sbox.sv

# SHA2 modules
../rtl/prim_sha2.sv
../rtl/prim_sha2_32.sv
../rtl/prim_sha2_pad.sv

# Memory modules
../rtl/prim_ram_1p_adv.sv
../rtl/prim_ram_1p_scr.sv
../rtl/prim_ram_1r1w_adv.sv
../rtl/prim_ram_1r1w_async_adv.sv
../rtl/prim_ram_2p_adv.sv
../rtl/prim_ram_2p_async_adv.sv
../rtl/prim_rom_adv.sv

# Subreg modules
../rtl/prim_subreg.sv
../rtl/prim_subreg_arb.sv
../rtl/prim_subreg_ext.sv
../rtl/prim_subreg_shadow.sv

# Security anchor modules
../rtl/prim_sec_anchor_buf.sv
../rtl/prim_sec_anchor_const.sv
../rtl/prim_sec_anchor_flop.sv

# Other utility modules
../rtl/prim_blanker.sv
../rtl/prim_edn_req.sv
../rtl/prim_gate_gen.sv
../rtl/prim_intr_hw.sv
../rtl/prim_leading_one_ppc.sv
../rtl/prim_max_tree.sv
../rtl/prim_racl_error_arb.sv
../rtl/prim_reg_we_check.sv
../rtl/prim_sparse_fsm_flop.sv
../rtl/prim_sum_tree.sv
../rtl/prim_sdc_example.sv

# ==============================================================================
# Excluded files (skipped during sv2v conversion):
# ==============================================================================
#
# Macro-only files (no synthesizable modules):
#   ../rtl/prim_flop_macros.sv  - Contains only `define macros
#   ../rtl/prim_assert.sv       - Contains only assertion macros
#
# RAM/ROM modules (use technology-specific black boxes):
#   ../rtl/prim_ram_1p_adv.sv       - Requires prim_ram_1p_pkg (SRAM compiler)
#   ../rtl/prim_ram_1p_scr.sv       - Requires prim_ram_1p_pkg (scrambled SRAM)
#   ../rtl/prim_ram_1r1w_adv.sv     - Requires prim_ram_2p_pkg (dual-port SRAM)
#   ../rtl/prim_ram_1r1w_async_adv.sv - Requires prim_ram_2p_pkg (async dual-port)
#   ../rtl/prim_ram_2p_adv.sv       - Requires prim_ram_2p_pkg (2-port SRAM)
#   ../rtl/prim_ram_2p_async_adv.sv - Requires prim_ram_2p_pkg (async 2-port)
#   ../rtl/prim_rom_adv.sv          - Requires prim_rom_pkg (ROM macro)
#
# Modules with missing external packages:
#   ../rtl/prim_racl_error_arb.sv   - Requires top_racl_pkg (RACL system)
