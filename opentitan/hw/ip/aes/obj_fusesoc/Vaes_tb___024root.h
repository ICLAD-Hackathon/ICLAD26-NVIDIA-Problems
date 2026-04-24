// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaes_tb.h for the primary calling header

#ifndef VERILATED_VAES_TB___024ROOT_H_
#define VERILATED_VAES_TB___024ROOT_H_  // guard

#include "verilated.h"

class Vaes_tb__Syms;
class Vaes_tb_lc_ctrl_reg_pkg;
class Vaes_tb_csrng_reg_pkg;
class Vaes_tb_edn_reg_pkg;
class Vaes_tb_keymgr_reg_pkg;
class Vaes_tb_aes_model_dpi_pkg;
class Vaes_tb_aes_tb_pkg;
class Vaes_tb_prim_sha2_pkg;
class Vaes_tb_aes_reg_pkg;
class Vaes_tb_aes_sbox_canright_pkg;
class Vaes_tb_aes_sbox__S4;
class Vaes_tb_prim_onehot_check__O3_ABz3_Sz3;
class Vaes_tb_prim_onehot_mux__W80_I3;

VL_MODULE(Vaes_tb___024root) {
  public:
    // CELLS
    Vaes_tb_lc_ctrl_reg_pkg* __PVT__lc_ctrl_reg_pkg;
    Vaes_tb_csrng_reg_pkg* __PVT__csrng_reg_pkg;
    Vaes_tb_edn_reg_pkg* __PVT__edn_reg_pkg;
    Vaes_tb_keymgr_reg_pkg* __PVT__keymgr_reg_pkg;
    Vaes_tb_aes_model_dpi_pkg* __PVT__aes_model_dpi_pkg;
    Vaes_tb_aes_tb_pkg* __PVT__aes_tb_pkg;
    Vaes_tb_prim_sha2_pkg* __PVT__prim_sha2_pkg;
    Vaes_tb_aes_reg_pkg* __PVT__aes_reg_pkg;
    Vaes_tb_aes_sbox_canright_pkg* __PVT__aes_sbox_canright_pkg;
    Vaes_tb_aes_sbox__S4* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij;
    Vaes_tb_aes_sbox__S4* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__0__KET____DOT__u_aes_sbox_i;
    Vaes_tb_aes_sbox__S4* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__1__KET____DOT__u_aes_sbox_i;
    Vaes_tb_aes_sbox__S4* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i;
    Vaes_tb_aes_sbox__S4* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i;
    Vaes_tb_prim_onehot_check__O3_ABz3_Sz3* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_check_add_in_sel;
    Vaes_tb_prim_onehot_mux__W80_I3* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in;
    Vaes_tb_prim_onehot_check__O3_ABz3_Sz3* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_check_add_in_sel;
    Vaes_tb_prim_onehot_mux__W80_I3* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in;
    Vaes_tb_prim_onehot_check__O3_ABz3_Sz3* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__u_prim_onehot_check_gf_mult1_in_sel;
    Vaes_tb_prim_onehot_mux__W80_I3* __PVT__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__u_prim_onehot_mux_gf_mult1_op_b;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_OUT8(test_done_o,0,0);
        VL_OUT8(test_passed_o,0,0);
        CData/*0:0*/ aes_tb__DOT__bus_wait;
        CData/*0:0*/ aes_tb__DOT__error;
        CData/*0:0*/ aes_tb__DOT__test_passed_q;
        CData/*0:0*/ aes_tb__DOT__test_done_q;
        CData/*5:0*/ aes_tb__DOT__aes_mode_q;
        CData/*5:0*/ aes_tb__DOT__gcm_phase_q;
        CData/*3:0*/ aes_tb__DOT____Vcellout__u_aes__alert_tx_o;
        CData/*0:0*/ aes_tb__DOT__check_out;
        CData/*0:0*/ aes_tb__DOT__check_data;
        CData/*0:0*/ aes_tb__DOT__check_tag;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__idle_o;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__alert;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__edn_req_hold_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__edn_req_hold_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__edn_req;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__edn_ack;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__entropy_masking_req;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__entropy_clearing_ack;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__entropy_masking_ack;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT____Vcellout__u_aes_core__alert_fatal_o;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__alert_test;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__reg_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__reg_re;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__reg_error;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__addrmiss;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__wr_err;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__intg_err;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__reg_we_err;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__err_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__alert_test_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__key_share0_0_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__key_share0_1_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__key_share0_2_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__key_share0_3_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__key_share0_4_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__key_share0_5_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__key_share0_6_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__key_share0_7_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__key_share1_0_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__key_share1_1_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__key_share1_2_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__key_share1_3_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__key_share1_4_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__key_share1_5_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__key_share1_6_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__key_share1_7_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__iv_0_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__iv_1_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__iv_2_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__iv_3_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_0_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_1_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_2_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_3_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_shadowed_re;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_shadowed_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_re;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_key_touch_forces_reseed_storage_err;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_key_touch_forces_reseed_update_err;
    };
    struct {
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_force_masks_storage_err;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_force_masks_update_err;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_regwen_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__trigger_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_gcm_shadowed_re;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_gcm_shadowed_we;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__alert_test_flds_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_0_qe;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_1_qe;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_2_qe;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__data_in_3_qe;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_shadowed_flds_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_aux_shadowed_gated_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_start__q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_key_iv_data_in_clear__q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_data_out_clear__q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_prng_reseed__q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_status_idle__q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_status_output_lost__q;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__ctrl_gcm_shadowed_flds_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__rst_done;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_chk__DOT__err;
        CData/*6:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__syndrome_o;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__data_err;
        CData/*6:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__47__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__46__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__45__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__44__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__43__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__42__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__41__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__40__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__39__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__38__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__37__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__36__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__35__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__34__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__33__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__32__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__31__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__0__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__47__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__46__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__45__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__44__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__43__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__42__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__41__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__40__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__39__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__38__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__37__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__36__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__35__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__34__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__33__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__32__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__31__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__23__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__22__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__21__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__20__KET__;
    };
    struct {
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__19__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__18__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__17__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__16__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__15__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__10__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__9__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__8__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__7__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__4__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__3__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__1__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__0__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__gen_no_addr_check_strict__DOT__unused_and_tree;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__a_ack;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__error_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__err_internal;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__instr_error;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rd_req;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_wr_err;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__instr_type_err;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_data_in_0__DOT__wr_en;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_data_in_1__DOT__wr_en;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_data_in_2__DOT__wr_en;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_data_in_3__DOT__wr_en;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__phase_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__shadow_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__committed_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__shadow_wd;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__shadow_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__committed_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__wr_data;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__phase_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__shadow_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__committed_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__shadow_wd;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__shadow_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__committed_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__wr_data;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_regwen__DOT__q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_regwen__DOT__wr_data;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_trigger_start__DOT__wr_en;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_trigger_start__DOT__wr_data;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_trigger_key_iv_data_in_clear__DOT__wr_en;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_trigger_key_iv_data_in_clear__DOT__wr_data;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_trigger_data_out_clear__DOT__wr_en;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_trigger_data_out_clear__DOT__wr_data;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_trigger_prng_reseed__DOT__wr_en;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_trigger_prng_reseed__DOT__wr_data;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_status_stall__DOT__q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_status_output_valid__DOT__q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_status_input_ready__DOT__q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_status_alert_recov_ctrl_update_err__DOT__q;
    };
    struct {
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_status_alert_fatal_fault__DOT__q;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_prim_lc_sync__DOT__lc_en;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_prim_lc_sync__DOT__gen_buffs__BRA__0__KET____DOT__lc_en_out;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_prim_lc_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__intq;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_ack;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_handshake;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__req_sync__DOT__intq;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__ack_sync__DOT__intq;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_qe;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_phase;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_gcm_qe;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_gcm_phase;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_err_update;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_err_storage;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_err_storage_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_err_storage_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__sp_enc_err_q;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_in;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_in_sel_ctrl;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__add_state_in;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__add_state_in_sel_ctrl;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_out;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_sel_ctrl;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_qe;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_ctrl;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_sel_err;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_sel_ctrl;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_qe;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__add_state_out;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__add_state_out_sel_ctrl;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_re;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_sel_ctrl;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_in_ready;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_out_valid;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__ghash_alert;
        IData/*23:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_we_o;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_cipher_core__data_in_mask_o;
        IData/*23:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_control__iv_we_o;
        VlWide<3>/*77:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__sp2v_sig;
        VlWide<3>/*77:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__sp2v_sig_chk_raw;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__ghash_clear;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__seed_valid;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__gen_buffer__DOT__buffer_valid_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__gen_buffer__DOT__buffer_valid_q;
        VlWide<12>/*383:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__matrix_rotrev_indices;
        VlWide<12>/*383:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_in_indices;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_max_len_sva__DOT__perturbed_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_max_len_sva__DOT__perturbed_q;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__ctr_slice_idx;
        IData/*23:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__ctr_we_o_rev;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__sp_enc_err;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__mr_err;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__sp_ready;
    };
    struct {
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__sp_ctr_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__mr_alert;
        SData/*8:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__mr_ctr_slice_idx;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__ready;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__alert;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__ctr_we;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__aes_ctr_ns;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_d;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_q;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__ready;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__alert;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__ctr_we;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__aes_ctr_ns;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_d;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_q;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__ready;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__alert;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__ctr_we;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__aes_ctr_ns;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_d;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_q;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_sel_ctrl;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_rk_sel_ctrl;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_sel_ctrl;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_sel_err;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_sel_ctrl;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_expand_op;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_words_sel_ctrl;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_words_sel_err;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__round_key_sel_ctrl;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__cfg_valid;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__sp_enc_err_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__op_err;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_sub_bytes_q;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__data_in_mask;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__u_aes_sub_bytes__mask_o;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__u_aes_sub_bytes__data_o;
        SData/*8:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__sp2v_sig;
        SData/*8:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__sp2v_sig_chk_raw;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__sp2v_sig_err;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_shift_rows__data_o;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__data_o;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_shift_rows__data_o;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__data_o;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__data_o;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__data_o;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__out_req;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__rcon_d;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__rcon_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__use_rcon;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__rnd_type;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__use_rot_word;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__sub_word_out_req;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__rnd_ctr;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__prng_reseed_q;
    };
    struct {
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__key_clear_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__data_out_clear_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__mux_sel_err;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__mr_err;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_enc_err;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__rnd_ctr_err;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_in_ready;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_out_valid;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_state_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_en;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_sub_bytes_out_ack;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_key_full_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_key_dec_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_key_expand_en;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_key_expand_out_ack;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_crypt_d;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp_dec_key_gen_d;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__mr_alert;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__mr_prng_update;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__mr_prng_reseed_req;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__mr_key_expand_clear;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__mr_prng_reseed_d;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__mr_key_clear_d;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__mr_data_out_clear_d;
        SData/*14:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__mr_state_sel;
        SData/*14:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__mr_add_rk_sel;
        SData/*14:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__mr_key_full_sel;
        SData/*8:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__mr_key_dec_sel;
        SData/*14:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__mr_key_words_sel;
        SData/*8:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__mr_round_key_sel;
        SData/*11:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__mr_rnd_ctr;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__crypt_q_raw;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__sp2v_sig_err;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__in_ready;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__out_valid;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__prng_update;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__prng_reseed_req;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__state_sel;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__state_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__sub_bytes_en;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__sub_bytes_out_ack;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__add_rk_sel;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__key_full_sel;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__key_full_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__key_dec_sel;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__key_dec_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__key_expand_en;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__key_expand_out_ack;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__key_expand_clear;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__key_words_sel;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__round_key_sel;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__crypt_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__dec_key_gen_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__prng_reseed_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__key_clear_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__data_out_clear_d;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__aes_cipher_ctrl_ns;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__advance;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__cyc_ctr_d;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__cyc_ctr_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__prng_reseed_done_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__prng_reseed_done_q;
    };
    struct {
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__rnd_ctr_d;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__rnd_ctr_q;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__num_rounds_d;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__num_rounds_q;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__in_ready;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__out_valid;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__alert;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__prng_update;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__prng_reseed_req;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__state_sel;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__state_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__sub_bytes_en;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__sub_bytes_out_ack;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__add_rk_sel;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__key_full_sel;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__key_full_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__key_dec_sel;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__key_dec_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__key_expand_en;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__key_expand_out_ack;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__key_expand_clear;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__key_words_sel;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__round_key_sel;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__crypt_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__dec_key_gen_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__prng_reseed_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__key_clear_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__data_out_clear_d;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__aes_cipher_ctrl_ns;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__advance;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__cyc_ctr_d;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__cyc_ctr_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__prng_reseed_done_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__prng_reseed_done_q;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__rnd_ctr_d;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__rnd_ctr_q;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__num_rounds_d;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__num_rounds_q;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__in_ready;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__out_valid;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__alert;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__prng_update;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__prng_reseed_req;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__state_sel;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__state_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__sub_bytes_en;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__sub_bytes_out_ack;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__add_rk_sel;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__key_full_sel;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__key_full_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__key_dec_sel;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__key_dec_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__key_expand_en;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__key_expand_out_ack;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__key_expand_clear;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__key_words_sel;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__round_key_sel;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__crypt_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__dec_key_gen_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__prng_reseed_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__key_clear_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__data_out_clear_d;
    };
    struct {
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__aes_cipher_ctrl_ns;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__advance;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__cyc_ctr_d;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__cyc_ctr_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__prng_reseed_done_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__prng_reseed_done_q;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__rnd_ctr_d;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__rnd_ctr_q;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__num_rounds_d;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__num_rounds_q;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__u_state_regs__DOT__state_raw;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_seed_done;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT____Vlvbound_h1de69e94__0;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__seed_req_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__seed_req_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__wr_en_seed;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_idx_d;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_idx_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT____Vlvbound_hdb0c1d9a__0;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__data_o_transposed;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT____Vcellout__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__data_o;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT____Vcellout__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__data_o;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT____Vcellout__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__data_o;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT____Vcellout__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__data_o;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__y;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x_mul2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__y_pre_mul4;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__y2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__y;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x_mul2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__y_pre_mul4;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__y2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__y;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x_mul2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__y_pre_mul4;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__y2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__y;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x_mul2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__y_pre_mul4;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__y2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__0__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_i_transposed;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__data_o_transposed;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT____Vcellout__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__data_o;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT____Vcellout__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__data_o;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT____Vcellout__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__data_o;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT____Vcellout__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__data_o;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__y;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x_mul2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__y_pre_mul4;
    };
    struct {
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__y2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z_muxed;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__y;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x_mul2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__y_pre_mul4;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__y2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z_muxed;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__y;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x_mul2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__y_pre_mul4;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__y2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z_muxed;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__y;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x_mul2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__y_pre_mul4;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__y2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_shift_mix__BRA__1__KET____DOT__u_aes_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z_muxed;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__data_i_transposed;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__data_o_transposed;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT____Vcellout__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__data_o;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT____Vcellout__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__data_o;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT____Vcellout__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__data_o;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT____Vcellout__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__data_o;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__y;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x_mul2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__y_pre_mul4;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__y2;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__y;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x_mul2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__y_pre_mul4;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__y2;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__y;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x_mul2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__y_pre_mul4;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__y2;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__y;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x_mul2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__y_pre_mul4;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__0__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__y2;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__data_i_transposed;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__data_o_transposed;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT____Vcellout__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__data_o;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT____Vcellout__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__data_o;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT____Vcellout__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__data_o;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT____Vcellout__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__data_o;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__y;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__z;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__x_mul2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__y_pre_mul4;
    };
    struct {
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__0__KET____DOT__u_aes_mix_column_i__DOT__y2;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__y;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__z;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__x_mul2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__y_pre_mul4;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__1__KET____DOT__u_aes_mix_column_i__DOT__y2;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__y;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__z;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__x_mul2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__y_pre_mul4;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__2__KET____DOT__u_aes_mix_column_i__DOT__y2;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__y;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__z;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__x_mul2;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__y_pre_mul4;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_shares_round_key__BRA__1__KET____DOT__u_aes_key_mix_columns__DOT__gen_mix_column__BRA__3__KET____DOT__u_aes_mix_column_i__DOT__y2;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_update_operation;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_update_mode;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_update_key_len;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_update_sideload;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_update_prng_reseed_rate;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_update_manual_operation;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_operation;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_mode;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_key_len;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_sideload;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_prng_reseed_rate;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__err_storage_manual_operation;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__phase_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__shadow_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__committed_we;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__shadow_wd;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__shadow_q;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__committed_q;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__wr_data;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__phase_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__shadow_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_we;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__shadow_wd;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__shadow_q;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__wr_data;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__phase_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__shadow_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__committed_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__shadow_wd;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__shadow_q;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__committed_q;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__wr_data;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_key_len__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__phase_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__shadow_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__committed_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__shadow_wd;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__shadow_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__committed_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__wr_data;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__phase_q;
    };
    struct {
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__shadow_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__committed_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__shadow_wd;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__shadow_q;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__committed_q;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__wr_data;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_prng_reseed_rate__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__phase_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__shadow_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__committed_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__shadow_wd;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__shadow_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__committed_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__wr_data;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__err_update_gcm_phase;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__err_update_num_valid_bytes;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__err_storage_gcm_phase;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__err_storage_num_valid_bytes;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__gcm_phase;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__phase_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__shadow_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__committed_we;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__shadow_wd;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__shadow_q;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__committed_q;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__wr_data;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_phase__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__phase_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__shadow_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__committed_we;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__shadow_wd;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__shadow_q;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__committed_q;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__wr_data;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__u_ctrl_gcm_reg_shadowed_num_valid_bytes__DOT__gen_shadow_reg_std__DOT__shadow_wr_data;
        IData/*23:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__ctr_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mux_sel_err;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_err;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_enc_err;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_data_out_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_data_in_prev_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_ctr_inc32;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_ctr_incr;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_cipher_in_valid;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_cipher_out_ready;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_out_cipher_crypt;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_out_cipher_dec_key_gen;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_ghash_in_valid;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_ghash_out_ready;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_ghash_load_hash_subkey;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_ctrl_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_ctrl_gcm_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_gcm_init_done;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_alert;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_data_in_we;
        SData/*8:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_data_out_sel;
        SData/*8:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_data_in_prev_sel;
        SData/*8:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_state_in_sel;
        SData/*8:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_add_state_in_sel;
        SData/*14:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_add_state_out_sel;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_cipher_prng_reseed;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_cipher_key_clear;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_cipher_data_out_clear;
    };
    struct {
        SData/*14:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_key_init_sel;
        IData/*17:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_iv_sel;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_prng_update;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_prng_reseed_req;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_start_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_key_iv_data_in_clear_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_data_out_clear_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_prng_reseed;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_prng_reseed_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_idle;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_idle_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_stall;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_stall_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_output_lost;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_output_lost_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_output_valid;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_output_valid_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_input_ready;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_input_ready_we;
        QData/*47:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__int_key_init_we;
        QData/*47:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__log_key_init_we;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__int_key_init_qe;
        IData/*23:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__int_ctr_we;
        IData/*23:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__log_ctr_we;
        IData/*23:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__int_iv_we;
        IData/*23:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__log_iv_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp2v_sig_err__BRA__0__KET__;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctrl_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctrl_gcm_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_out_sel;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_out_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_prev_sel;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_prev_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__state_in_sel;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__add_state_in_sel;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__add_state_out_sel;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctr_incr;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_in_valid;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_crypt_out_buf;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_dec_key_gen_out_buf;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_prng_reseed_out_buf;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_key_clear_out_buf;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_data_out_clear_out_buf;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ghash_in_valid;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ghash_out_ready;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__key_init_sel;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_sel;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__prng_update;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__prng_reseed_req;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__prng_reseed_we;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT____Vcellout__u_aes_control_fsm__key_init_we_o;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_clear;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_new_pulse;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_load;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_arm;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_clear;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_load;
    };
    struct {
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_arm;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new_d;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_load;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read_d;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cfg_valid;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_op_err;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_common;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_core;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__finish;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__crypt;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_done;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_enc;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_iv_data_in_clear_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_clear_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__stall;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__stall_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_gcm_we_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gcm_clear;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gcm_init;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gcm_txt;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_common_gcm;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_ghash;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_gcm_restore;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_gcm_aad;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_gcm_save;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_gcm_tag;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_hsk;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_s;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_txt;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__hash_subkey_ready_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__hash_subkey_ready_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__s_ready_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__s_ready_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_restore_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_restore_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_aad_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_aad_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_tag_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_tag_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_save_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_save_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ghash_out_done;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__block_ctr_decr;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_q;
    };
    struct {
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_q;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__we_d;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__we_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__clean_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__clean_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctrl_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctrl_gcm_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_out_sel;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_out_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_prev_sel;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_prev_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__state_in_sel;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__add_state_in_sel;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__add_state_out_sel;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctr_incr;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_in_valid;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_crypt_out_buf;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_dec_key_gen_out_buf;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_prng_reseed_out_buf;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_key_clear_out_buf;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_data_out_clear_out_buf;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ghash_in_valid;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ghash_out_ready;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__key_init_sel;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_sel;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__prng_update;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__prng_reseed_req;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__prng_reseed_we;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT____Vcellout__u_aes_control_fsm__key_init_we_o;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_clear;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_new_pulse;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_load;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_arm;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_clear;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_load;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_arm;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new_d;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_load;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read_d;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cfg_valid;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_op_err;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_common;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_core;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__finish;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__crypt;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_done;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_enc;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec;
    };
    struct {
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_iv_data_in_clear_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_clear_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__stall;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__stall_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_gcm_we_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gcm_clear;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gcm_init;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gcm_txt;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_common_gcm;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_ghash;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_gcm_restore;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_gcm_aad;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_gcm_save;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_gcm_tag;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_hsk;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_s;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_txt;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__hash_subkey_ready_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__hash_subkey_ready_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__s_ready_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__s_ready_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_restore_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_restore_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_aad_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_aad_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_tag_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_tag_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_save_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_save_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ghash_out_done;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__block_ctr_decr;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_q;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__we_d;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__we_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__clean_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__clean_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__ctrl_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__ctrl_gcm_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__data_in_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__data_out_sel;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__data_out_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__data_in_prev_sel;
    };
    struct {
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__data_in_prev_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__state_in_sel;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__add_state_in_sel;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__add_state_out_sel;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__ctr_incr;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_in_valid;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_crypt_out_buf;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_dec_key_gen_out_buf;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_prng_reseed_out_buf;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_key_clear_out_buf;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_data_out_clear_out_buf;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__ghash_in_valid;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__ghash_out_ready;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__key_init_sel;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__iv_sel;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__iv_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__prng_update;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__prng_reseed_req;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__prng_reseed_we;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT____Vcellout__u_aes_control_fsm__key_init_we_o;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_clear;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_new_pulse;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_load;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_arm;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_clear;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_load;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_arm;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new_d;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_load;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read_d;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cfg_valid;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_op_err;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_common;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_core;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__finish;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__crypt;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_done;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_enc;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_iv_data_in_clear_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_clear_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__stall;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__stall_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_gcm_we_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gcm_clear;
    };
    struct {
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gcm_init;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gcm_txt;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_common_gcm;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_ghash;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_gcm_restore;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_gcm_aad;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_gcm_save;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_gcm_tag;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_hsk;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_s;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_txt;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__hash_subkey_ready_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__hash_subkey_ready_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__s_ready_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__s_ready_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_restore_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_restore_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_aad_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_aad_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_tag_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_tag_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_save_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_gcm_save_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ghash_out_done;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__block_ctr_decr;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_q;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__we_d;
        CData/*7:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__we_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__clean_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__clean_q;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__s_we;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr0_en_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr0_en_q;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_valid;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_in_sel;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_add_in_sel_err;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__add_s_en_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__add_s_en_q;
        CData/*5:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_sel;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_we;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult0_en_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult0_en_q;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult1_in_sel_d;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_req;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_ack;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_ack_pre;
        CData/*6:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__aes_ghash_ns;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__first_block_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__first_block_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__final_add_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__final_add_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__advance;
    };
    struct {
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellout__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_flop_add_in_sel__q_o;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellout__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_flop_add_in_sel__q_o;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_in_sel_q_raw;
        CData/*3:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_rev_slice_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellout__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__ack_o;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellout__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__ack_o;
        CData/*6:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__u_state_regs__DOT__state_raw;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__cnt;
        CData/*4:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__cnt;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pd;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_nd;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_req_trigger;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_p_edge;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_n_edge;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__intq;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__intq;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_p_edge;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_n_edge;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__intq;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__intq;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_sigint;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ack_sigint;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__state_d;
        CData/*2:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__state_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_pd;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_nd;
    };
    struct {
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_set_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_clr;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_set_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_clr;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_req_trigger;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_trigger;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_p_edge;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_n_edge;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__intq;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__intq;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d;
        CData/*1:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_p_edge;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_n_edge;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__intq;
        CData/*0:0*/ aes_tb__DOT__u_aes__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__intq;
        CData/*7:0*/ aes_tb__DOT__u_aes_tb_c_dpi__DOT____Vlvbound_h8a7d01f1__0;
        CData/*0:0*/ aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__pending_d;
        CData/*0:0*/ aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__pending_q;
        CData/*1:0*/ aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__u_rsp_chk__DOT__rsp_err;
        CData/*5:0*/ aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__u_rsp_chk__DOT__rsp;
        CData/*6:0*/ aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__u_rsp_chk__DOT__u_chk__DOT__syndrome_o;
        CData/*1:0*/ aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__u_rsp_chk__DOT__gen_rsp_data_intg_check__DOT__u_tlul_data_integ_dec__DOT__data_err;
        CData/*6:0*/ aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__u_rsp_chk__DOT__gen_rsp_data_intg_check__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__syndrome_o;
        CData/*0:0*/ aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_vh_regs__DOT__unused_signals;
        VlWide<4>/*127:0*/ __Vfunc_aes_transpose__7__Vfuncout;
        VlWide<4>/*127:0*/ __Vfunc_aes_transpose__7__in;
        VlWide<4>/*127:0*/ __Vfunc_aes_transpose__7__transpose;
        VlWide<4>/*127:0*/ __Vfunc_aes_transpose__8__Vfuncout;
        VlWide<4>/*127:0*/ __Vfunc_aes_transpose__8__in;
        VlWide<4>/*127:0*/ __Vfunc_aes_transpose__8__transpose;
        VlWide<4>/*127:0*/ __Vfunc_aes_transpose__9__Vfuncout;
        VlWide<4>/*127:0*/ __Vfunc_aes_transpose__9__in;
        VlWide<4>/*127:0*/ __Vfunc_aes_transpose__9__transpose;
        VlWide<4>/*127:0*/ __Vfunc_aes_transpose__10__Vfuncout;
        VlWide<4>/*127:0*/ __Vfunc_aes_transpose__10__in;
        VlWide<4>/*127:0*/ __Vfunc_aes_transpose__10__transpose;
    };
    struct {
        VlWide<4>/*127:0*/ __Vfunc_aes_transpose__11__Vfuncout;
        VlWide<4>/*127:0*/ __Vfunc_aes_transpose__11__in;
        VlWide<4>/*127:0*/ __Vfunc_aes_transpose__11__transpose;
        VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__18__out;
        VlWide<4>/*127:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_byte__19__out;
        IData/*23:0*/ __Vfunc_aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__aes_rev_order_sp2v__20__out;
        CData/*7:0*/ __Vfunc_aes_mul2__55__out;
        CData/*7:0*/ __Vfunc_aes_div2__56__out;
        CData/*0:0*/ __Vfunc_bivium_generate_key_stream__67__Vfuncout;
        CData/*0:0*/ __Vfunc_bivium_generate_key_stream__67__key;
        CData/*0:0*/ __Vfunc_bivium_generate_key_stream__67__add_65_92;
        CData/*0:0*/ __Vfunc_bivium_generate_key_stream__67__add_161_176;
        CData/*0:0*/ __Vfunc_bivium_update_state__68__mul_90_91;
        CData/*0:0*/ __Vfunc_bivium_update_state__68__mul_174_175;
        CData/*0:0*/ __Vfunc_bivium_update_state__68__add_65_92;
        CData/*0:0*/ __Vfunc_bivium_update_state__68__add_161_176;
        CData/*7:0*/ __Vfunc_aes_mul2__78__out;
        CData/*7:0*/ __Vfunc_aes_mul2__79__out;
        CData/*7:0*/ __Vfunc_aes_mul2__80__out;
        CData/*7:0*/ __Vfunc_aes_mul2__81__out;
        CData/*7:0*/ __Vfunc_aes_mul2__83__out;
        CData/*7:0*/ __Vfunc_aes_mul2__84__out;
        CData/*7:0*/ __Vfunc_aes_mul2__86__out;
        CData/*7:0*/ __Vfunc_aes_mul2__87__out;
        CData/*7:0*/ __Vfunc_aes_mul2__88__out;
        CData/*7:0*/ __Vfunc_aes_mul2__89__out;
        CData/*7:0*/ __Vfunc_aes_mul2__90__out;
        CData/*7:0*/ __Vfunc_aes_mul2__91__out;
        CData/*7:0*/ __Vfunc_aes_mul2__92__out;
        CData/*7:0*/ __Vfunc_aes_mul2__94__out;
        CData/*7:0*/ __Vfunc_aes_mul2__95__out;
        CData/*7:0*/ __Vfunc_aes_mul2__97__out;
        CData/*7:0*/ __Vfunc_aes_mul2__98__out;
        CData/*7:0*/ __Vfunc_aes_mul2__99__out;
        CData/*7:0*/ __Vfunc_aes_mul2__100__out;
        CData/*7:0*/ __Vfunc_aes_mul2__101__out;
        CData/*7:0*/ __Vfunc_aes_mul2__102__out;
        CData/*7:0*/ __Vfunc_aes_mul2__103__out;
        CData/*7:0*/ __Vfunc_aes_mul2__105__out;
        CData/*7:0*/ __Vfunc_aes_mul2__106__out;
        CData/*7:0*/ __Vfunc_aes_mul2__108__out;
        CData/*7:0*/ __Vfunc_aes_mul2__109__out;
        CData/*7:0*/ __Vfunc_aes_mul2__110__out;
        CData/*7:0*/ __Vfunc_aes_mul2__111__out;
        CData/*7:0*/ __Vfunc_aes_mul2__112__out;
        CData/*7:0*/ __Vfunc_aes_mul2__113__out;
        CData/*7:0*/ __Vfunc_aes_mul2__114__out;
        CData/*7:0*/ __Vfunc_aes_mul2__116__out;
        CData/*7:0*/ __Vfunc_aes_mul2__117__out;
        CData/*7:0*/ __Vfunc_aes_mul2__119__out;
        CData/*7:0*/ __Vfunc_aes_mul2__120__out;
        CData/*7:0*/ __Vfunc_aes_mul2__121__out;
        CData/*7:0*/ __Vfunc_aes_mul2__131__out;
        CData/*7:0*/ __Vfunc_aes_mul2__132__out;
        CData/*7:0*/ __Vfunc_aes_mul2__133__out;
        CData/*7:0*/ __Vfunc_aes_mul2__134__out;
        CData/*7:0*/ __Vfunc_aes_mul2__136__out;
        CData/*7:0*/ __Vfunc_aes_mul2__137__out;
        CData/*7:0*/ __Vfunc_aes_mul2__139__out;
        CData/*7:0*/ __Vfunc_aes_mul2__140__out;
        CData/*7:0*/ __Vfunc_aes_mul2__141__out;
        CData/*7:0*/ __Vfunc_aes_mul2__142__out;
        CData/*7:0*/ __Vfunc_aes_mul2__143__out;
        CData/*7:0*/ __Vfunc_aes_mul2__144__out;
    };
    struct {
        CData/*7:0*/ __Vfunc_aes_mul2__145__out;
        CData/*7:0*/ __Vfunc_aes_mul2__147__out;
        CData/*7:0*/ __Vfunc_aes_mul2__148__out;
        CData/*7:0*/ __Vfunc_aes_mul2__150__out;
        CData/*7:0*/ __Vfunc_aes_mul2__151__out;
        CData/*7:0*/ __Vfunc_aes_mul2__152__out;
        CData/*7:0*/ __Vfunc_aes_mul2__153__out;
        CData/*7:0*/ __Vfunc_aes_mul2__154__out;
        CData/*7:0*/ __Vfunc_aes_mul2__155__out;
        CData/*7:0*/ __Vfunc_aes_mul2__156__out;
        CData/*7:0*/ __Vfunc_aes_mul2__158__out;
        CData/*7:0*/ __Vfunc_aes_mul2__159__out;
        CData/*7:0*/ __Vfunc_aes_mul2__161__out;
        CData/*7:0*/ __Vfunc_aes_mul2__162__out;
        CData/*7:0*/ __Vfunc_aes_mul2__163__out;
        CData/*7:0*/ __Vfunc_aes_mul2__164__out;
        CData/*7:0*/ __Vfunc_aes_mul2__165__out;
        CData/*7:0*/ __Vfunc_aes_mul2__166__out;
        CData/*7:0*/ __Vfunc_aes_mul2__167__out;
        CData/*7:0*/ __Vfunc_aes_mul2__169__out;
        CData/*7:0*/ __Vfunc_aes_mul2__170__out;
        CData/*7:0*/ __Vfunc_aes_mul2__172__out;
        CData/*7:0*/ __Vfunc_aes_mul2__173__out;
        CData/*7:0*/ __Vfunc_aes_mul2__174__out;
        CData/*7:0*/ __Vfunc_aes_mul2__177__out;
        CData/*7:0*/ __Vfunc_aes_mul2__178__out;
        CData/*7:0*/ __Vfunc_aes_mul2__179__out;
        CData/*7:0*/ __Vfunc_aes_mul2__180__out;
        CData/*7:0*/ __Vfunc_aes_mul2__182__out;
        CData/*7:0*/ __Vfunc_aes_mul2__183__out;
        CData/*7:0*/ __Vfunc_aes_mul2__185__out;
        CData/*7:0*/ __Vfunc_aes_mul2__186__out;
        CData/*7:0*/ __Vfunc_aes_mul2__187__out;
        CData/*7:0*/ __Vfunc_aes_mul2__188__out;
        CData/*7:0*/ __Vfunc_aes_mul2__189__out;
        CData/*7:0*/ __Vfunc_aes_mul2__190__out;
        CData/*7:0*/ __Vfunc_aes_mul2__191__out;
        CData/*7:0*/ __Vfunc_aes_mul2__193__out;
        CData/*7:0*/ __Vfunc_aes_mul2__194__out;
        CData/*7:0*/ __Vfunc_aes_mul2__196__out;
        CData/*7:0*/ __Vfunc_aes_mul2__197__out;
        CData/*7:0*/ __Vfunc_aes_mul2__198__out;
        CData/*7:0*/ __Vfunc_aes_mul2__199__out;
        CData/*7:0*/ __Vfunc_aes_mul2__200__out;
        CData/*7:0*/ __Vfunc_aes_mul2__201__out;
        CData/*7:0*/ __Vfunc_aes_mul2__202__out;
        CData/*7:0*/ __Vfunc_aes_mul2__204__out;
        CData/*7:0*/ __Vfunc_aes_mul2__205__out;
        CData/*7:0*/ __Vfunc_aes_mul2__207__out;
        CData/*7:0*/ __Vfunc_aes_mul2__208__out;
        CData/*7:0*/ __Vfunc_aes_mul2__209__out;
        CData/*7:0*/ __Vfunc_aes_mul2__210__out;
        CData/*7:0*/ __Vfunc_aes_mul2__211__out;
        CData/*7:0*/ __Vfunc_aes_mul2__212__out;
        CData/*7:0*/ __Vfunc_aes_mul2__213__out;
        CData/*7:0*/ __Vfunc_aes_mul2__215__out;
        CData/*7:0*/ __Vfunc_aes_mul2__216__out;
        CData/*7:0*/ __Vfunc_aes_mul2__218__out;
        CData/*7:0*/ __Vfunc_aes_mul2__219__out;
        CData/*7:0*/ __Vfunc_aes_mul2__220__out;
        CData/*7:0*/ __Vfunc_aes_mul2__223__out;
        CData/*7:0*/ __Vfunc_aes_mul2__224__out;
        CData/*7:0*/ __Vfunc_aes_mul2__225__out;
        CData/*7:0*/ __Vfunc_aes_mul2__226__out;
    };
    struct {
        CData/*7:0*/ __Vfunc_aes_mul2__228__out;
        CData/*7:0*/ __Vfunc_aes_mul2__229__out;
        CData/*7:0*/ __Vfunc_aes_mul2__231__out;
        CData/*7:0*/ __Vfunc_aes_mul2__232__out;
        CData/*7:0*/ __Vfunc_aes_mul2__233__out;
        CData/*7:0*/ __Vfunc_aes_mul2__234__out;
        CData/*7:0*/ __Vfunc_aes_mul2__235__out;
        CData/*7:0*/ __Vfunc_aes_mul2__236__out;
        CData/*7:0*/ __Vfunc_aes_mul2__237__out;
        CData/*7:0*/ __Vfunc_aes_mul2__239__out;
        CData/*7:0*/ __Vfunc_aes_mul2__240__out;
        CData/*7:0*/ __Vfunc_aes_mul2__242__out;
        CData/*7:0*/ __Vfunc_aes_mul2__243__out;
        CData/*7:0*/ __Vfunc_aes_mul2__244__out;
        CData/*7:0*/ __Vfunc_aes_mul2__245__out;
        CData/*7:0*/ __Vfunc_aes_mul2__246__out;
        CData/*7:0*/ __Vfunc_aes_mul2__247__out;
        CData/*7:0*/ __Vfunc_aes_mul2__248__out;
        CData/*7:0*/ __Vfunc_aes_mul2__250__out;
        CData/*7:0*/ __Vfunc_aes_mul2__251__out;
        CData/*7:0*/ __Vfunc_aes_mul2__253__out;
        CData/*7:0*/ __Vfunc_aes_mul2__254__out;
        CData/*7:0*/ __Vfunc_aes_mul2__255__out;
        CData/*7:0*/ __Vfunc_aes_mul2__256__out;
        CData/*7:0*/ __Vfunc_aes_mul2__257__out;
        CData/*7:0*/ __Vfunc_aes_mul2__258__out;
        CData/*7:0*/ __Vfunc_aes_mul2__259__out;
        CData/*7:0*/ __Vfunc_aes_mul2__261__out;
        CData/*7:0*/ __Vfunc_aes_mul2__262__out;
        CData/*7:0*/ __Vfunc_aes_mul2__264__out;
        CData/*7:0*/ __Vfunc_aes_mul2__265__out;
        CData/*7:0*/ __Vfunc_aes_mul2__266__out;
        VlWide<4>/*127:0*/ __Vfunc_aes_state_to_ghash_vec__270__in;
        VlWide<4>/*127:0*/ __Vfunc_aes_state_to_ghash_vec__270__byte_vec;
        VlWide<4>/*127:0*/ __Vfunc_aes_state_to_ghash_vec__271__byte_vec;
        VlWide<4>/*127:0*/ __Vfunc_aes_state_to_ghash_vec__273__byte_vec;
        VlWide<4>/*127:0*/ __Vfunc_aes_state_to_ghash_vec__280__byte_vec;
        VlWide<4>/*127:0*/ __Vfunc_aes_transpose__297__Vfuncout;
        VlWide<4>/*127:0*/ __Vfunc_aes_transpose__297__in;
        VlWide<4>/*127:0*/ __Vfunc_aes_transpose__297__transpose;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        CData/*0:0*/ __Vclklast__TOP__rst_ni;
        CData/*0:0*/ __Vchglast__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__prng_reseed_we;
        CData/*0:0*/ __Vchglast__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_d;
        CData/*0:0*/ __Vchglast__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__prng_reseed_we;
        CData/*0:0*/ __Vchglast__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_d;
        CData/*0:0*/ __Vchglast__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__prng_reseed_we;
        CData/*0:0*/ __Vchglast__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_d;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_d;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_q;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_prim_buf_key_init_qe__in_i;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_o;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_reg_shadowed__hw2reg_ctrl_o;
        SData/*10:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_ctrl_gcm_reg_shadowed__hw2reg_ctrl_gcm_o;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__ctr_i_rev;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__ctr_o_rev;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__ctr_i_slice;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__ctr_o_slice;
        QData/*47:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__mr_ctr_o_slice;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__ctrl_wd;
        SData/*10:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_gcm_reg_shadowed__DOT__gen_ctrl_gcm_reg_shadowed__DOT__ctrl_gcm_wd;
        SData/*12:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_d;
        SData/*12:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_q;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__we_d;
    };
    struct {
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__we_q;
        SData/*12:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_d;
        SData/*12:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_q;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__we_d;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__we_q;
        SData/*12:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_d;
        SData/*12:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_q;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__we_d;
        SData/*15:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__we_q;
        IData/*31:0*/ aes_tb__DOT__entropy_q;
        IData/*31:0*/ aes_tb__DOT__bus_rdata;
        IData/*31:0*/ aes_tb__DOT__data_cntr_d;
        IData/*31:0*/ aes_tb__DOT__data_cntr_q;
        IData/*31:0*/ aes_tb__DOT__data_mask;
        IData/*31:0*/ aes_tb__DOT__c_dpi_crypto_res;
        IData/*31:0*/ aes_tb__DOT__gen_tlul_adapter_vh__DOT__int_rdata;
        IData/*31:0*/ aes_tb__DOT__u_aes_tb_reqs__DOT__request_cntr_q;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__reg_rdata_next;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_0__q;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_1__q;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_2__q;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_data_in_3__q;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_chk__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o;
        VlWide<4>/*126:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree;
        VlWide<4>/*126:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__and_tree;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_data_in_0__DOT__wr_data;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_data_in_1__DOT__wr_data;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_data_in_2__DOT__wr_data;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_data_in_3__DOT__wr_data;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in_prev_q;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_in;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_d;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__data_out_q;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__unused_data_out_q;
        IData/*25:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__sp2v_sig_err;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_done_transposed;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_reg__DOT__unnamedblk7__DOT__s;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_reg__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__iv_reg__DOT__unnamedblk9__DOT__i;
        VlWide<8>/*255:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__gen_state_out_masked__DOT__u_prim_state_done_muxed__in_i;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__gen_ghash__DOT__u_aes_ghash__ghash_state_done_o;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__gen_buffer__DOT__buffer_d;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__gen_buffer__DOT__buffer_q;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__p_share_perm_check__DOT__unnamedblk2__DOT__k;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_perm_check__DOT__p_perm_check__DOT__unnamedblk3__DOT__k;
        IData/*19:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__in;
        IData/*21:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__out;
        IData/*16:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_value;
        IData/*19:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__in;
        IData/*21:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__out;
        IData/*16:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_value;
        IData/*19:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__in;
        IData/*21:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__out;
        IData/*16:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_value;
        VlWide<5>/*159:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__prd_masking;
        VlWide<14>/*447:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd;
        VlWide<10>/*319:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__out_prd;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__sub_word_in;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__sub_word_out;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__sw_in_mask;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__sw_out_mask;
    };
    struct {
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__prd_q;
        VlWide<4>/*111:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd;
        VlWide<3>/*79:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__out_prd;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_shares_regular__BRA__0__KET____DOT__drive_regular__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_shares_regular__BRA__0__KET____DOT__drive_regular__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_shares_regular__BRA__0__KET____DOT__drive_regular__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_shares_regular__BRA__0__KET____DOT__drive_regular__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_shares_regular__BRA__0__KET____DOT__drive_regular__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_shares_regular__BRA__0__KET____DOT__drive_regular__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_shares_regular__BRA__0__KET____DOT__drive_regular__DOT__unnamedblk7__DOT__i;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_shares_regular__BRA__1__KET____DOT__drive_regular__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_shares_regular__BRA__1__KET____DOT__drive_regular__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_shares_regular__BRA__1__KET____DOT__drive_regular__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_shares_regular__BRA__1__KET____DOT__drive_regular__DOT__unnamedblk4__DOT__i;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_shares_regular__BRA__1__KET____DOT__drive_regular__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_shares_regular__BRA__1__KET____DOT__drive_regular__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_shares_regular__BRA__1__KET____DOT__drive_regular__DOT__unnamedblk7__DOT__i;
        IData/*25:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__in;
        IData/*25:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__in;
        IData/*25:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__in;
        VlWide<5>/*159:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__prng_key;
        VlWide<5>/*159:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__perm_test;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__p_perm_check__DOT__unnamedblk3__DOT__k;
        VlWide<6>/*176:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_d;
        VlWide<6>/*176:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_q;
        VlWide<6>/*176:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_update;
        VlWide<6>/*176:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__state_seed;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT__gen_update_and_output_bivium__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__gen_masks__DOT__u_aes_prng_masking__DOT__u_prim_bivium__DOT____Vlvbound_h06762e8a__0;
        VlWide<3>/*86:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__in;
        VlWide<3>/*87:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__out;
        VlWide<3>/*86:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__in;
        VlWide<3>/*87:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__out;
        VlWide<3>/*86:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__in;
        VlWide<3>/*87:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__out;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__s_q;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_in_prev;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__data_out;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_rev;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__operand_a_i;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__operand_a_i;
        VlWide<16>/*511:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__matrix;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__vector;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__prod_q;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__0__KET____DOT__u_gf_mult__DOT__prod_d;
        VlWide<16>/*511:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__matrix;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__vector;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__prod_q;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult__BRA__1__KET____DOT__u_gf_mult__DOT__prod_d;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_tag;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_tag_d;
        VlWide<4>/*127:0*/ aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_tag_q;
        IData/*31:0*/ aes_tb__DOT__u_aes_tb_c_dpi__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__u_rsp_chk__DOT__gen_rsp_data_intg_check__DOT__u_tlul_data_integ_dec__DOT__u_data_chk__DOT__data_o;
        VlWide<6>/*176:0*/ __Vfunc_bivium_generate_key_stream__67__state;
        VlWide<6>/*176:0*/ __Vfunc_bivium_update_state__68__Vfuncout;
        VlWide<6>/*176:0*/ __Vfunc_bivium_update_state__68__in;
        VlWide<6>/*176:0*/ __Vfunc_bivium_update_state__68__out;
        VlWide<4>/*127:0*/ __Vfunc_aes_ghash_reverse_bit_order__275__out;
        VlWide<4>/*127:0*/ __Vfunc_aes_ghash_reverse_bit_order__276__out;
        VlWide<4>/*127:0*/ __Vfunc_aes_ghash_reverse_bit_order__277__out;
        VlWide<4>/*127:0*/ __Vfunc_aes_ghash_reverse_bit_order__278__out;
        VlWide<4>/*127:0*/ __Vfunc_aes_ghash_reverse_bit_order__281__out;
        VlWide<4>/*127:0*/ __Vfunc_aes_ghash_reverse_bit_order__282__out;
    };
    struct {
        VlWide<4>/*127:0*/ __Vtask_c_dpi_aes_crypt_message__Vdpioc5__298__tag_o;
        IData/*31:0*/ __Vtask_c_dpi_aes_crypt_message__Vdpioc5__298__crypto_res;
        IData/*19:0*/ __Vchglast__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__in;
        IData/*19:0*/ __Vchglast__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__in;
        IData/*19:0*/ __Vchglast__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__in;
        VlWide<3>/*87:0*/ __Vchglast__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__out;
        VlWide<3>/*87:0*/ __Vchglast__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__out;
        VlWide<3>/*87:0*/ __Vchglast__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__out;
        VlWide<4>/*108:0*/ aes_tb__DOT__tl_h2d;
        VlWide<3>/*65:0*/ aes_tb__DOT__tl_d2h;
        VlWide<40>/*1260:0*/ aes_tb__DOT__bus_req;
        QData/*33:0*/ aes_tb__DOT____Vcellinp__u_aes__edn_i;
        VlWide<17>/*512:0*/ aes_tb__DOT__u_aes__DOT__keymgr_key_i;
        VlWide<31>/*978:0*/ aes_tb__DOT__u_aes__DOT__reg2hw;
        VlWide<30>/*948:0*/ aes_tb__DOT__u_aes__DOT__hw2reg;
        VlWide<3>/*65:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__tl_reg_d2h;
        QData/*34:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__reg_we_check;
        QData/*34:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__addr_hit;
        QData/*42:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_chk__DOT__cmd;
        QData/*63:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_chk__data_i;
        QData/*38:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_chk__DOT____Vcellinp__u_tlul_data_integ_dec__data_intg_i;
        QData/*56:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_chk__DOT__u_chk__DOT__data_o;
        QData/*63:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o;
        QData/*38:0*/ aes_tb__DOT__u_aes__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o;
        QData/*63:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__lfsr_state;
        QData/*63:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__share_perm_test;
        QData/*63:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__unused_share_perm_test;
        QData/*63:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_d;
        QData/*63:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__lfsr_q;
        QData/*63:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__sbox_out;
        QData/*63:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_out_non_linear__DOT__sbox_perm_test;
        QData/*63:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_perm_check__DOT__lfsr_perm_test;
        QData/*63:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_max_len_sva__DOT__cnt_d;
        QData/*63:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__gen_max_len_sva__DOT__cnt_q;
        QData/*47:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__out;
        QData/*47:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__out;
        QData/*47:0*/ aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__out;
        VlWide<4>/*108:0*/ aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__tl_o_pre;
        QData/*42:0*/ aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__u_cmd_intg_gen__DOT__cmd;
        QData/*63:0*/ aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__u_cmd_intg_gen__DOT____Vcellout__u_cmd_gen__data_o;
        QData/*38:0*/ aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__u_cmd_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_data_gen__data_o;
        QData/*63:0*/ aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__u_rsp_chk__DOT____Vcellinp__u_chk__data_i;
        QData/*38:0*/ aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__u_rsp_chk__DOT____Vcellinp__gen_rsp_data_intg_check__DOT__u_tlul_data_integ_dec__data_intg_i;
        QData/*56:0*/ aes_tb__DOT__gen_tlul_adapter_vh__DOT__u_tlul_adapter_vh__DOT__u_rsp_chk__DOT__u_chk__DOT__data_o;
        QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__1__payload;
        QData/*42:0*/ __Vfunc_extract_h2d_cmd_intg__299__payload;
        QData/*47:0*/ __Vchglast__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__out;
        QData/*47:0*/ __Vchglast__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__out;
        QData/*47:0*/ __Vchglast__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__out;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_init;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__state_done;
        VlUnpacked<VlWide<8>/*255:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init;
        VlUnpacked<CData/*7:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe;
        VlUnpacked<CData/*7:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_qe_buf;
        VlUnpacked<VlWide<8>/*255:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_d;
        VlUnpacked<VlWide<8>/*255:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_q;
        VlUnpacked<VlWide<8>/*255:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_cipher;
        VlUnpacked<IData/*23:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_we_ctrl;
        VlUnpacked<IData/*23:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_init_we;
        VlUnpacked<VlWide<8>/*255:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__key_sideload;
        VlUnpacked<QData/*63:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_128;
        VlUnpacked<VlWide<8>/*255:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_256;
        VlUnpacked<VlWide<8>/*255:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_key_init;
    };
    struct {
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_state;
        VlUnpacked<VlWide<8>/*255:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_key;
        VlUnpacked<QData/*63:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_prng_clearing__data_o;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_cipher_core__state_o;
        VlUnpacked<VlWide<8>/*255:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_aes_cipher_core__key_init_i;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_aes_cipher_core__state_init_i;
        VlUnpacked<VlWide<8>/*255:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_aes_cipher_core__prd_clearing_key_i;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_aes_cipher_core__prd_clearing_state_i;
        VlUnpacked<IData/*23:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_control__key_init_we_o;
        VlUnpacked<CData/*7:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__u_aes_control__key_init_qe_i;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_muxed;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT____Vcellinp__gen_ghash__DOT__u_aes_ghash__cipher_state_done_i;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_d;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__shift_rows_in;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__shift_rows_out;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__mix_columns_out;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_in;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__add_round_key_out;
        VlUnpacked<VlWide<8>/*255:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_d;
        VlUnpacked<VlWide<8>/*255:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_full_q;
        VlUnpacked<VlWide<8>/*255:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_d;
        VlUnpacked<VlWide<8>/*255:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_dec_q;
        VlUnpacked<VlWide<8>/*255:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_expand_out;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_words;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_bytes;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__key_mix_columns_out;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__round_key;
        VlUnpacked<VlWide<8>/*255:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellout__u_aes_key_expand__key_o;
        VlUnpacked<VlWide<8>/*255:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____Vcellinp__u_aes_key_expand__key_i;
        VlUnpacked<IData/*31:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__spec_in_128;
        VlUnpacked<IData/*31:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__spec_in_192;
        VlUnpacked<IData/*31:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__rot_word_in;
        VlUnpacked<IData/*31:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__rot_word_out;
        VlUnpacked<IData/*31:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__irregular;
        VlUnpacked<VlWide<8>/*255:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__regular;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_d;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__corr_q;
        VlUnpacked<CData/*2:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_add_in_sel_d;
        VlUnpacked<CData/*2:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_add_in_sel_q;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_d;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_q;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_add;
        VlUnpacked<CData/*2:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_we;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_state_mult;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_d;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__hash_subkey_q;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__cipher_state_done;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_op_b;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_op_b_rev;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gf_mult_prod;
        VlUnpacked<VlWide<4>/*127:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__add_in;
        VlUnpacked<CData/*2:0*/, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_sel_q_raw;
        VlUnpacked<VlUnpacked<VlWide<4>/*127:0*/, 3>, 2> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__ghash_add_in_mux_in;
        VlUnpacked<VlWide<4>/*127:0*/, 3> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_mux_add_in__in_i;
        VlUnpacked<VlWide<4>/*127:0*/, 3> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_mux_add_in__in_i;
        VlUnpacked<VlWide<4>/*127:0*/, 3> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_op_b_mux_in;
        VlUnpacked<VlWide<4>/*127:0*/, 3> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT____Vcellinp__gen_gf_mult1_mux__DOT__u_prim_onehot_mux_gf_mult1_op_b__in_i;
        VlUnpacked<CData/*7:0*/, 60> aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data;
        VlUnpacked<CData/*7:0*/, 60> aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_d;
        VlUnpacked<CData/*7:0*/, 60> aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_q;
        VlUnpacked<CData/*7:0*/, 20> aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_ad_unp;
        VlUnpacked<CData/*7:0*/, 60> aes_tb__DOT__u_aes_tb_c_dpi__DOT__c_dpi_data_unp;
    };
    struct {
        VlUnpacked<CData/*7:0*/, 60> __Vtask_c_dpi_aes_crypt_message__Vdpioc5__298__data_o;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vaes_tb__Syms* vlSymsp;  // Symbol table

    // PARAMETERS
    static constexpr VlUnpacked<VlWide<6>/*167:0*/, 166> aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__LFSR_COEFFS = {{
        {{ // VlWide 0
            0x00000006, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 1
            0x0000000c, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 2
            0x00000014, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 3
            0x00000030, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 4
            0x00000060, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 5
            0x000000b8, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 6
            0x00000110, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 7
            0x00000240, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 8
            0x00000500, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 9
            0x00000829, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 10
            0x0000100d, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 11
            0x00002015, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 12
            0x00006000, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 13
            0x0000d008, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 14
            0x00012000, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 15
            0x00020400, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 16
            0x00040023, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 17
            0x00090000, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 18
            0x00140000, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 19
            0x00300000, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 20
            0x00420000, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 21
            0x00e10000, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 22
            0x01200000, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 23
            0x02000023, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 24
            0x04000013, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 25
            0x09000000, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 26
            0x14000000, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 27
            0x20000029, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 28
            0x48000000, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 29
            0x80200003, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 30
            0x00080000, 0x00000001, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 31
            0x04000003, 0x00000002, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 32
            0x00000000, 0x00000005, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 33
            0x01000000, 0x00000008, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 34
            0x0000001f, 0x00000010, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 35
            0x00000031, 0x00000020, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 36
            0x00000000, 0x00000044, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 37
            0x00140000, 0x000000a0, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 38
            0x00000000, 0x00000120, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 39
            0x000c0000, 0x00000300, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 40
            0x00000000, 0x00000630, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 41
            0x00030000, 0x00000c00, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 42
            0x00000000, 0x00001b00, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 43
            0x03000000, 0x00003000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 44
            0x00000000, 0x00004200, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 45
            0x00180000, 0x0000c000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 46
            0x00000000, 0x00010080, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 47
            0x00c00000, 0x00030000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 48
            0x00000000, 0x0006000c, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 49
            0x00000000, 0x00090000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 50
            0x00000000, 0x00180030, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 51
            0x00030000, 0x00300000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 52
            0x40000000, 0x00400000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 53
            0x00000000, 0x00c00006, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 54
            0x00000000, 0x01020000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 55
            0x00000000, 0x02000040, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 56
            0x00000000, 0x06000030, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 57
            0x00000000, 0x0c000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 58
            0x00000000, 0x18003000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 59
            0x00000030, 0x30000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 60
            0x00000000, 0x60000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 61
            0x00000000, 0xd8000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 62
            0x00000000, 0x00004000, 0x00000001, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 63
            0x00000000, 0x01800000, 0x00000003, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 64
            0x00000000, 0x03000000, 0x00000006, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 65
            0x00000000, 0x04000000, 0x00000008, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 66
            0x00000000, 0x00000280, 0x00000014, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 67
            0x00000000, 0x00600000, 0x00000030, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 68
            0x00000000, 0x00000000, 0x00000041, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 69
            0x01040000, 0x00000000, 0x00000082, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 70
            0x00000000, 0x00008000, 0x00000100, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 71
            0x00000000, 0x06000000, 0x00000300, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 72
            0x00000000, 0x80000000, 0x00000601, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 73
            0x00000000, 0x00000180, 0x00000c00, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 74
            0x00000000, 0x00006000, 0x00001800, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 75
            0x00000000, 0x06000000, 0x00003000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 76
            0x00000000, 0x00000000, 0x00004020, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 77
            0x00000000, 0x00000600, 0x0000c000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 78
            0x00000000, 0x00000000, 0x00011000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 79
            0x00000000, 0x00004800, 0x00024000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 80
            0x00000000, 0x00000030, 0x00060000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 81
            0x00000000, 0x00000000, 0x00080040, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 82
            0x00000000, 0x03000000, 0x00180000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 83
            0x00000000, 0x00000000, 0x00300300, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 84
            0x00000000, 0x00000000, 0x00400200, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 85
            0x00018000, 0x00000000, 0x00c00000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 86
            0x00000000, 0x00040000, 0x01000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 87
            0x00000000, 0x00000000, 0x030000c0, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 88
            0x000000c0, 0x00000000, 0x06000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 89
            0x00000000, 0x00000000, 0x0c00c000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 90
            0x00000000, 0x00000000, 0x14000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 91
            0x00000000, 0x00000000, 0x20000100, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 92
            0x00000000, 0x00000000, 0x40080000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 93
            0x00000000, 0x00014000, 0xa0000000, 0x00000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 94
            0x00000000, 0x00000000, 0x04000000, 0x00000001,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 95
            0x00000000, 0x00000000, 0x00400000, 0x00000002,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 96
            0x00000000, 0x00280000, 0x00000000, 0x00000005,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 97
            0x00000000, 0x40000000, 0x00000000, 0x00000008,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 98
            0x00000000, 0x00000000, 0x60000000, 0x00000018,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 99
            0x00000000, 0x0000000c, 0x00000000, 0x00000030,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 100
            0x00000000, 0x00000000, 0x20000000, 0x00000040,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 101
            0x00000000, 0x00000000, 0x30000000, 0x000000c0,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 102
            0x00000000, 0x00000000, 0x01000000, 0x00000100,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 103
            0x00000000, 0x00000000, 0x04000000, 0x00000200,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 104
            0x00000000, 0x00000a00, 0x00000000, 0x00000500,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 105
            0x00000000, 0x00000000, 0x00001000, 0x00000800,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 106
            0x00000000, 0x00000000, 0x00000000, 0x00001860,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 107
            0x00000000, 0x00000000, 0x00000000, 0x00003003,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 108
            0x00000000, 0x00000000, 0x00000000, 0x00004010,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 109
            0x00000000, 0x00000000, 0x00000014, 0x0000a000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 110
            0x00000000, 0x00000000, 0x00000000, 0x00010080,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 111
            0x80000000, 0x00000001, 0x00000000, 0x00030000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 112
            0x00000000, 0x00000000, 0x00000000, 0x00060018,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 113
            0x00000000, 0x00003000, 0x00000000, 0x000c0000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 114
            0x00000000, 0x00000000, 0x00000000, 0x00140005,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 115
            0x00000000, 0x00000000, 0x00100000, 0x00200000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 116
            0x00000000, 0x00000000, 0x00000000, 0x00404000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 117
            0x00000102, 0x00000000, 0x00000000, 0x00810000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 118
            0x00000000, 0x00000000, 0x00000000, 0x01000040,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 119
            0x00000000, 0x60000000, 0x00000000, 0x03000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 120
            0x00000000, 0x00000000, 0x00000000, 0x05000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 121
            0x00000000, 0x00000000, 0x00400000, 0x08000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 122
            0x00030000, 0x00000000, 0x00000000, 0x18000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 123
            0x00000000, 0x00000000, 0x03000000, 0x30000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 124
            0x00000000, 0x00000000, 0x00000000, 0x60000000,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 125
            0x00000000, 0x00000000, 0x00000000, 0xa0000014,
            0x00000000, 0x00000000
        }},
        {{ // VlWide 126
            0x00000000, 0x00000000, 0x00000000, 0x08000000,
            0x00000001, 0x00000000
        }},
        {{ // VlWide 127
            0x00000000, 0x00000000, 0x00000000, 0x40000000,
            0x00000002, 0x00000000
        }},
        {{ // VlWide 128
            0x00000000, 0x00000000, 0x000c0000, 0x00000000,
            0x00000006, 0x00000000
        }},
        {{ // VlWide 129
            0x00000000, 0x00000000, 0x00000000, 0x00000040,
            0x00000008, 0x00000000
        }},
        {{ // VlWide 130
            0x00000000, 0x00000000, 0x00030000, 0x00000000,
            0x00000018, 0x00000000
        }},
        {{ // VlWide 131
            0x00000000, 0x00000000, 0x00001000, 0x00000000,
            0x00000020, 0x00000000
        }},
        {{ // VlWide 132
            0x00000000, 0x00000000, 0x00000000, 0x08000000,
            0x00000040, 0x00000000
        }},
        {{ // VlWide 133
            0x00000600, 0x00000000, 0x00000000, 0x00000000,
            0x000000c0, 0x00000000
        }},
        {{ // VlWide 134
            0x00000000, 0x00000000, 0x00000000, 0x00080000,
            0x00000100, 0x00000000
        }},
        {{ // VlWide 135
            0x00000000, 0x00000000, 0x00000000, 0x00000000,
            0x00000306, 0x00000000
        }},
        {{ // VlWide 136
            0x00000000, 0x00000000, 0x00000000, 0x00000000,
            0x000004a4, 0x00000000
        }},
        {{ // VlWide 137
            0x00000000, 0x00000000, 0x00000000, 0x00004000,
            0x00000800, 0x00000000
        }},
        {{ // VlWide 138
            0x00000000, 0x00000000, 0x00000000, 0x00003000,
            0x00001800, 0x00000000
        }},
        {{ // VlWide 139
            0x00000000, 0x00000000, 0x00000000, 0x01000000,
            0x00002000, 0x00000000
        }},
        {{ // VlWide 140
            0x00000000, 0x00000000, 0x00000000, 0x06000000,
            0x00006000, 0x00000000
        }},
        {{ // VlWide 141
            0x00000000, 0x00000000, 0x00000600, 0x00000000,
            0x0000c000, 0x00000000
        }},
        {{ // VlWide 142
            0x00000000, 0x00000000, 0x10000000, 0x00000000,
            0x00010000, 0x00000000
        }},
        {{ // VlWide 143
            0x00000000, 0x00000000, 0x00600000, 0x00000000,
            0x00030000, 0x00000000
        }},
        {{ // VlWide 144
            0x00000000, 0x00000000, 0x00000000, 0x00003000,
            0x00060000, 0x00000000
        }},
        {{ // VlWide 145
            0x00000000, 0x00000000, 0x00000000, 0x01000000,
            0x00080000, 0x00000000
        }},
        {{ // VlWide 146
            0x00000000, 0x000000c0, 0x00000000, 0x00000000,
            0x00180000, 0x00000000
        }},
        {{ // VlWide 147
            0x00000000, 0x00000000, 0x00000000, 0x00000001,
            0x00200000, 0x00000000
        }},
        {{ // VlWide 148
            0x00000000, 0x00000000, 0x00000000, 0x00000000,
            0x00480000, 0x00000000
        }},
        {{ // VlWide 149
            0x00000000, 0x00000000, 0x00600000, 0x00000000,
            0x00c00000, 0x00000000
        }},
        {{ // VlWide 150
            0x00000000, 0x00000000, 0x00000000, 0x00000000,
            0x01800000, 0x00000000
        }},
        {{ // VlWide 151
            0x05000000, 0x00000000, 0x00000000, 0x00000000,
            0x02800000, 0x00000000
        }},
        {{ // VlWide 152
            0x00000000, 0x00000000, 0x00000000, 0x0c000000,
            0x06000000, 0x00000000
        }},
        {{ // VlWide 153
            0x00000000, 0x00000180, 0x00000000, 0x00000000,
            0x0c000000, 0x00000000
        }},
        {{ // VlWide 154
            0x00000000, 0x00000000, 0x00000000, 0x00000000,
            0x18000006, 0x00000000
        }},
        {{ // VlWide 155
            0x00000000, 0x00000000, 0x00000000, 0x00000000,
            0x3000000c, 0x00000000
        }},
        {{ // VlWide 156
            0x00000000, 0x00000000, 0x00000000, 0x80000000,
            0x40000000, 0x00000000
        }},
        {{ // VlWide 157
            0x00000000, 0x00000000, 0x00000000, 0x00000000,
            0xc0003000, 0x00000000
        }},
        {{ // VlWide 158
            0x00000000, 0x00000000, 0x00000000, 0x00000000,
            0x00004000, 0x00000001
        }},
        {{ // VlWide 159
            0x00000000, 0x00000000, 0x00000600, 0x00000000,
            0x00000000, 0x00000003
        }},
        {{ // VlWide 160
            0x00000000, 0x00000000, 0x00000000, 0x000000c0,
            0x00000000, 0x00000006
        }},
        {{ // VlWide 161
            0x00000000, 0x00000000, 0x00000000, 0x00000000,
            0x00600000, 0x0000000c
        }},
        {{ // VlWide 162
            0x00000000, 0x00000000, 0x00000000, 0x00000000,
            0x00000060, 0x00000018
        }},
        {{ // VlWide 163
            0x00000000, 0x00000000, 0x00000000, 0xc0000000,
            0x00000000, 0x00000030
        }},
        {{ // VlWide 164
            0x00000000, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000041
        }},
        {{ // VlWide 165
            0x00000000, 0x00000000, 0x00000000, 0x00000000,
            0x01400000, 0x000000a0
        }}
    }};

    // CONSTRUCTORS
    Vaes_tb___024root(const char* name);
    ~Vaes_tb___024root();
    VL_UNCOPYABLE(Vaes_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vaes_tb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
