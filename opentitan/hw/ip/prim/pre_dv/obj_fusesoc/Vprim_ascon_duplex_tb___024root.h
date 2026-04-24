// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vprim_ascon_duplex_tb.h for the primary calling header

#ifndef VERILATED_VPRIM_ASCON_DUPLEX_TB___024ROOT_H_
#define VERILATED_VPRIM_ASCON_DUPLEX_TB___024ROOT_H_  // guard

#include "verilated.h"

class Vprim_ascon_duplex_tb__Syms;
class Vprim_ascon_duplex_tb_lc_ctrl_reg_pkg;
class Vprim_ascon_duplex_tb_ascon_model_dpi_pkg;
class Vprim_ascon_duplex_tb_prim_sha2_pkg;

VL_MODULE(Vprim_ascon_duplex_tb___024root) {
  public:
    // CELLS
    Vprim_ascon_duplex_tb_lc_ctrl_reg_pkg* __PVT__lc_ctrl_reg_pkg;
    Vprim_ascon_duplex_tb_ascon_model_dpi_pkg* __PVT__ascon_model_dpi_pkg;
    Vprim_ascon_duplex_tb_prim_sha2_pkg* __PVT__prim_sha2_pkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_OUT8(test_done_o,0,0);
        VL_OUT8(test_passed_o,0,0);
        CData/*0:0*/ prim_ascon_duplex_tb__DOT__dut_input_valid;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__dut_data_valid_bytes;
        CData/*0:0*/ prim_ascon_duplex_tb__DOT__dut_ready_data;
        CData/*0:0*/ prim_ascon_duplex_tb__DOT__dut_read_data;
        CData/*0:0*/ prim_ascon_duplex_tb__DOT__dut_response_data_valid;
        CData/*0:0*/ prim_ascon_duplex_tb__DOT__dut_response_tag_valid;
        CData/*3:0*/ prim_ascon_duplex_tb__DOT__dut_last_block_ad;
        CData/*3:0*/ prim_ascon_duplex_tb__DOT__dut_last_block_msg;
        CData/*3:0*/ prim_ascon_duplex_tb__DOT__idle;
        CData/*0:0*/ prim_ascon_duplex_tb__DOT__start;
        CData/*0:0*/ prim_ascon_duplex_tb__DOT__fsm_done;
        CData/*7:0*/ prim_ascon_duplex_tb__DOT____Vlvbound_h1db50af5__0;
        CData/*7:0*/ prim_ascon_duplex_tb__DOT____Vlvbound_h6019fc4c__0;
        CData/*7:0*/ prim_ascon_duplex_tb__DOT____Vlvbound_h93f45f71__0;
        CData/*7:0*/ prim_ascon_duplex_tb__DOT____Vlvbound_h90d11d7b__0;
        CData/*7:0*/ prim_ascon_duplex_tb__DOT____Vlvbound_h93f673d9__0;
        CData/*7:0*/ prim_ascon_duplex_tb__DOT____Vlvbound_hab874626__0;
        CData/*7:0*/ prim_ascon_duplex_tb__DOT____Vlvbound_h93f6058c__0;
        CData/*7:0*/ prim_ascon_duplex_tb__DOT____Vlvbound_h90cfbeb5__0;
        CData/*7:0*/ prim_ascon_duplex_tb__DOT____Vlvbound_h93f40fa4__0;
        CData/*7:0*/ prim_ascon_duplex_tb__DOT____Vlvbound_h90cfef48__0;
        CData/*7:0*/ prim_ascon_duplex_tb__DOT____Vlvbound_h93f0a36a__0;
        CData/*7:0*/ prim_ascon_duplex_tb__DOT____Vlvbound_hab87578d__0;
        CData/*7:0*/ prim_ascon_duplex_tb__DOT____Vlvbound_h93c347ee__0;
        CData/*7:0*/ prim_ascon_duplex_tb__DOT____Vlvbound_hab868da8__0;
        CData/*7:0*/ prim_ascon_duplex_tb__DOT____Vlvbound_h93efbaff__0;
        CData/*7:0*/ prim_ascon_duplex_tb__DOT____Vlvbound_hab84019a__0;
        CData/*0:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__done_o;
        CData/*0:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error;
        CData/*0:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter;
        CData/*0:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter;
        CData/*3:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__perm_offset;
        CData/*1:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding;
        CData/*1:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0;
        CData/*1:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1;
        CData/*1:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2;
        CData/*1:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3;
        CData/*1:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4;
        CData/*0:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word1;
        CData/*0:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word2;
        CData/*0:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word3;
        CData/*0:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_round_input;
        CData/*0:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_dom_sep;
        CData/*0:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__mubi_error;
        CData/*7:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT____Vcellinp__u_prim_ascon_round__rcon_i;
        CData/*7:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d;
        CData/*7:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d_committed;
        CData/*7:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q;
        CData/*0:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__err_q;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt;
        CData/*3:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt;
        CData/*3:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029;
    };
    struct {
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029;
    };
    struct {
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029;
        CData/*4:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__5__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__5__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__6__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__6__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__8__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__8__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__9__Vfuncout;
    };
    struct {
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__9__val;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        CData/*0:0*/ __Vclklast__TOP__rst_ni;
        SData/*9:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d;
        SData/*9:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw;
        IData/*31:0*/ prim_ascon_duplex_tb__DOT__ad_count_d;
        IData/*31:0*/ prim_ascon_duplex_tb__DOT__ad_count_q;
        IData/*31:0*/ prim_ascon_duplex_tb__DOT__msg_count_d;
        IData/*31:0*/ prim_ascon_duplex_tb__DOT__msg_count_q;
        IData/*31:0*/ prim_ascon_duplex_tb__DOT__ct_count_d;
        IData/*31:0*/ prim_ascon_duplex_tb__DOT__ct_count_q;
        IData/*31:0*/ prim_ascon_duplex_tb__DOT__tb_state;
        IData/*31:0*/ prim_ascon_duplex_tb__DOT__nxt_tb_state;
        VlWide<4>/*127:0*/ prim_ascon_duplex_tb__DOT__dut_input_data;
        VlWide<4>/*127:0*/ prim_ascon_duplex_tb__DOT__dut_input_data_ad;
        VlWide<4>/*127:0*/ prim_ascon_duplex_tb__DOT__dut_input_data_msg;
        VlWide<4>/*127:0*/ prim_ascon_duplex_tb__DOT__dut_input_data_ct;
        VlWide<4>/*127:0*/ prim_ascon_duplex_tb__DOT__dut_response_tag;
        IData/*31:0*/ prim_ascon_duplex_tb__DOT__count_d;
        IData/*31:0*/ prim_ascon_duplex_tb__DOT__count_q;
        VlWide<10>/*319:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round;
        VlWide<4>/*127:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__valid_bytes_bit_mask;
        VlWide<4>/*127:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__padding_byte_bit_mask;
        VlWide<4>/*127:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_valid_bytes;
        VlWide<4>/*127:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out;
        VlWide<4>/*127:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_padded;
        VlWide<4>/*127:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out_padded;
        VlWide<4>/*127:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex;
        VlWide<10>/*319:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w;
        VlWide<10>/*319:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w;
        VlWide<10>/*319:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q;
        VlWide<10>/*319:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d;
        VlWide<10>/*319:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state;
        QData/*63:0*/ prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__word4_dom_sep;
        VlUnpacked<CData/*7:0*/, 10> prim_ascon_duplex_tb__DOT__stimulus_msg;
        VlUnpacked<CData/*7:0*/, 10> prim_ascon_duplex_tb__DOT__stimulus_ct;
        VlUnpacked<CData/*7:0*/, 8> prim_ascon_duplex_tb__DOT__stimulus_ad;
        VlUnpacked<CData/*7:0*/, 16> prim_ascon_duplex_tb__DOT__c_key;
        VlUnpacked<CData/*7:0*/, 16> prim_ascon_duplex_tb__DOT__c_nonce;
        VlUnpacked<CData/*7:0*/, 26> prim_ascon_duplex_tb__DOT__expected_ct;
        VlUnpacked<CData/*7:0*/, 26> prim_ascon_duplex_tb__DOT__actual_ct;
        VlUnpacked<CData/*7:0*/, 10> prim_ascon_duplex_tb__DOT__expected_msg;
        VlUnpacked<CData/*7:0*/, 10> prim_ascon_duplex_tb__DOT__actual_msg;
        VlUnpacked<CData/*7:0*/, 16> prim_ascon_duplex_tb__DOT__actual_tag;
        VlUnpacked<CData/*7:0*/, 16> prim_ascon_duplex_tb__DOT__expected_tag;
        VlUnpacked<CData/*7:0*/, 26> prim_ascon_duplex_tb__DOT__ct_tag_input;
        VlUnpacked<QData/*63:0*/, 5> prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w;
        VlUnpacked<CData/*4:0*/, 64> prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w;
        VlUnpacked<CData/*4:0*/, 64> prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w;
        VlUnpacked<QData/*63:0*/, 5> prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w;
        VlUnpacked<QData/*63:0*/, 5> prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w;
        VlUnpacked<QData/*63:0*/, 5> prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vprim_ascon_duplex_tb__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vprim_ascon_duplex_tb___024root(const char* name);
    ~Vprim_ascon_duplex_tb___024root();
    VL_UNCOPYABLE(Vprim_ascon_duplex_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vprim_ascon_duplex_tb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
