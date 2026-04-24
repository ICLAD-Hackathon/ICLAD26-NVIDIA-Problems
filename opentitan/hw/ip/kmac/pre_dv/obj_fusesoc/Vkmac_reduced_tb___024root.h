// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vkmac_reduced_tb.h for the primary calling header

#ifndef VERILATED_VKMAC_REDUCED_TB___024ROOT_H_
#define VERILATED_VKMAC_REDUCED_TB___024ROOT_H_  // guard

#include "verilated.h"

class Vkmac_reduced_tb__Syms;
class Vkmac_reduced_tb_digestpp_dpi_pkg;
class Vkmac_reduced_tb_lc_ctrl_reg_pkg;
class Vkmac_reduced_tb_csrng_reg_pkg;
class Vkmac_reduced_tb_edn_reg_pkg;
class Vkmac_reduced_tb_keymgr_reg_pkg;
class Vkmac_reduced_tb_kmac_reg_pkg;
class Vkmac_reduced_tb_prim_sha2_pkg;
class Vkmac_reduced_tb_sha3_pkg;

VL_MODULE(Vkmac_reduced_tb___024root) {
  public:
    // CELLS
    Vkmac_reduced_tb_digestpp_dpi_pkg* __PVT__digestpp_dpi_pkg;
    Vkmac_reduced_tb_lc_ctrl_reg_pkg* __PVT__lc_ctrl_reg_pkg;
    Vkmac_reduced_tb_csrng_reg_pkg* __PVT__csrng_reg_pkg;
    Vkmac_reduced_tb_edn_reg_pkg* __PVT__edn_reg_pkg;
    Vkmac_reduced_tb_keymgr_reg_pkg* __PVT__keymgr_reg_pkg;
    Vkmac_reduced_tb_kmac_reg_pkg* __PVT__kmac_reg_pkg;
    Vkmac_reduced_tb_prim_sha2_pkg* __PVT__prim_sha2_pkg;
    Vkmac_reduced_tb_sha3_pkg* __PVT__sha3_pkg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_OUT8(test_done_o,0,0);
        VL_OUT8(test_passed_o,0,0);
        CData/*0:0*/ kmac_reduced_tb__DOT__msg_valid;
        CData/*0:0*/ kmac_reduced_tb__DOT__sha3_start;
        CData/*0:0*/ kmac_reduced_tb__DOT__sha3_process;
        CData/*3:0*/ kmac_reduced_tb__DOT__done;
        CData/*3:0*/ kmac_reduced_tb__DOT__absorbed;
        CData/*2:0*/ kmac_reduced_tb__DOT__sha3_fsm;
        CData/*0:0*/ kmac_reduced_tb__DOT__entropy_ready;
        CData/*0:0*/ kmac_reduced_tb__DOT__entropy_refresh_req;
        CData/*0:0*/ kmac_reduced_tb__DOT__entropy_req;
        CData/*2:0*/ kmac_reduced_tb__DOT__kmac_reduced_tb_state_d;
        CData/*2:0*/ kmac_reduced_tb__DOT__kmac_reduced_tb_state_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__entropy_req_q;
        CData/*7:0*/ kmac_reduced_tb__DOT__reseed_count_d;
        CData/*7:0*/ kmac_reduced_tb__DOT__reseed_count_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__reseed_count_increment;
        CData/*0:0*/ kmac_reduced_tb__DOT__msg_handshake;
        CData/*0:0*/ kmac_reduced_tb__DOT__test_done;
        CData/*1:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_valid_shares;
        CData/*1:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_ready_shares;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_ready;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_msg_unpacker_share0__rvalid_o;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_msg_unpacker_share0__wready_o;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_msg_unpacker_share1__rvalid_o;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_msg_unpacker_share1__wready_o;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_en;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__sha3_rand_valid;
        CData/*7:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_prim_lc_sync__lc_en_o;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__entropy_state_error;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__load_data;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__clear_status;
        CData/*1:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__depth_q;
        CData/*1:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__depth_d;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__clr_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__gen_unpack_mode__DOT__pull_data;
        CData/*1:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__gen_unpack_mode__DOT__ptr_q;
        CData/*1:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__gen_unpack_mode__DOT__ptr_d;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__load_data;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__clear_status;
        CData/*1:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__depth_q;
        CData/*1:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__depth_d;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__clr_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__gen_unpack_mode__DOT__pull_data;
        CData/*1:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__gen_unpack_mode__DOT__ptr_q;
        CData/*1:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__gen_unpack_mode__DOT__ptr_d;
        CData/*3:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_prim_lc_sync__DOT__lc_en;
        CData/*3:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_prim_lc_sync__DOT__gen_buffs__BRA__0__KET____DOT__lc_en_out;
        CData/*3:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_prim_lc_sync__DOT__gen_buffs__BRA__1__KET____DOT__lc_en_out;
        CData/*3:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_prim_lc_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__intq;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__state_valid;
        CData/*2:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__mux_sel;
        CData/*3:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__absorbed;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__squeezing;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__processing;
        CData/*5:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_start;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_process;
        CData/*3:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_done;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3_state_error;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error;
    };
    struct {
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_valid;
        CData/*4:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_addr;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_run;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_keccak_run;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_run_req_d;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_run_req_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_triggered_d;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_triggered_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_complete;
        CData/*5:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw;
        CData/*2:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__inc_sentmsg;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__clr_sentmsg;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__fsm_keccak_valid;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__hold_msg;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__clr_msgbuf;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__keccak_ack;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__process_latched;
        CData/*6:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__st_d;
        CData/*3:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__absorbed_d;
        CData/*6:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__start_valid;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__process_valid;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__absorb_valid;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__done_valid;
        SData/*9:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_d;
        SData/*9:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_d_committed;
        SData/*9:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__err_q;
        CData/*5:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt;
        CData/*4:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q;
        CData/*5:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt;
        CData/*4:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q;
        CData/*6:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__update_storage;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_storage;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__xor_message;
        CData/*3:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__phase_sel;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__low_then_high_d;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__low_then_high_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_out_low_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_in_low_d;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_in_low_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_in_rand_ext_d;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_in_rand_ext_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_update;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__inc_rnd_num;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_rnd_num;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__complete_d;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_update;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_consumed;
        CData/*5:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_st_d;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_storage_error;
        CData/*5:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h92efc21d__0;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_haf3c3dc7__0;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT____Vlvbound_h9db66a18__0;
        SData/*9:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_d;
        SData/*9:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_d_committed;
        SData/*9:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__err_q;
        CData/*5:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt;
        CData/*4:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q;
        CData/*5:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt;
    };
    struct {
        CData/*4:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_enable;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_update;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_expired;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_en;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_done;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_req;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_ack;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__data_update;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__aux_rand_d;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__aux_rand_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__aux_update;
        CData/*3:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en_rand_d;
        CData/*3:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en_rand_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_valid_set;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_valid_clear;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__mode_latch;
        CData/*1:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__mode_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__entropy_req;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__entropy_req_hold_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__non_zero_wait_timer_limit;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__threshold_hit_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__threshold_hit_clr;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__hash_progress_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__hash_cnt_clr;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT____Vcellinp__u_prim_trivium__en_i;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT____Vlvbound_h9c2afe66__0;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__err_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_req_d;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_req_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__wr_en_seed;
        CData/*2:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_d;
        CData/*2:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q;
        CData/*0:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT____Vlvbound_h8135fa8c__0;
        CData/*3:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_entropy_configured__DOT__gen_no_flops__DOT__unused_logic;
        CData/*2:0*/ __Vfunc_sparse2logic__7__Vfuncout;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__8__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__8__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__9__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__9__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__11__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__11__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__12__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__12__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__13__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__13__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_loose__14__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_loose__14__val;
        CData/*0:0*/ __Vfunc_mubi4_test_true_strict__21__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_true_strict__21__val;
        CData/*0:0*/ __Vfunc_mubi4_test_false_loose__23__Vfuncout;
        CData/*3:0*/ __Vfunc_mubi4_test_false_loose__23__val;
        CData/*0:0*/ __Vfunc_bivium_generate_key_stream__44__Vfuncout;
        CData/*0:0*/ __Vfunc_bivium_generate_key_stream__44__key;
        CData/*0:0*/ __Vfunc_bivium_generate_key_stream__44__add_65_92;
        CData/*0:0*/ __Vfunc_bivium_generate_key_stream__44__add_161_176;
        CData/*0:0*/ __Vfunc_bivium_update_state__45__mul_90_91;
        CData/*0:0*/ __Vfunc_bivium_update_state__45__mul_174_175;
        CData/*0:0*/ __Vfunc_bivium_update_state__45__add_65_92;
        CData/*0:0*/ __Vfunc_bivium_update_state__45__add_161_176;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        CData/*0:0*/ __Vclklast__TOP__rst_ni;
        SData/*9:0*/ kmac_reduced_tb__DOT__count_d;
    };
    struct {
        SData/*9:0*/ kmac_reduced_tb__DOT__count_q;
        SData/*15:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_value;
        SData/*9:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prescaler_cnt;
        SData/*9:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__wait_timer_prescaler_d;
        SData/*9:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__st_d;
        IData/*19:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__cnt_d;
        IData/*19:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__cnt_d_committed;
        IData/*19:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__cnt_q;
        SData/*9:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q;
        SData/*9:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q;
        SData/*9:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw;
        IData/*31:0*/ kmac_reduced_tb__DOT__entropy;
        VlWide<4>/*127:0*/ kmac_reduced_tb__DOT__input_msg;
        VlWide<8>/*255:0*/ kmac_reduced_tb__DOT__output_digest;
        VlWide<4>/*127:0*/ kmac_reduced_tb__DOT__input_msg_bytes_packed;
        VlWide<8>/*255:0*/ kmac_reduced_tb__DOT__output_digest_bytes_packed;
        VlWide<8>/*255:0*/ kmac_reduced_tb__DOT__dpi_digest_bytes_packed;
        VlWide<4>/*127:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_q;
        VlWide<4>/*127:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_d;
        VlWide<4>/*127:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_q;
        VlWide<4>/*127:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_d;
        IData/*31:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__unnamedblk1__DOT__j;
        IData/*31:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i;
        VlWide<25>/*799:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd;
        VlWide<25>/*799:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd;
        VlWide<5>/*159:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a0;
        VlWide<5>/*159:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a1;
        VlWide<5>/*159:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b0;
        VlWide<5>/*159:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b1;
        VlWide<5>/*159:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a0;
        VlWide<5>/*159:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a1;
        VlWide<5>/*159:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b0;
        VlWide<5>/*159:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b1;
        VlWide<5>/*159:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a0;
        VlWide<5>/*159:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a1;
        VlWide<5>/*159:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b0;
        VlWide<5>/*159:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b1;
        VlWide<5>/*159:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a0;
        VlWide<5>/*159:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a1;
        VlWide<5>/*159:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b0;
        VlWide<5>/*159:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b1;
        VlWide<5>/*159:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a0;
        VlWide<5>/*159:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a1;
        VlWide<5>/*159:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b0;
        VlWide<5>/*159:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b1;
        VlWide<10>/*319:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o;
        VlWide<10>/*319:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o;
        VlWide<10>/*319:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o;
        VlWide<10>/*319:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o;
        VlWide<10>/*319:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o;
        VlWide<10>/*319:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o;
        VlWide<10>/*319:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o;
        VlWide<10>/*319:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o;
        VlWide<10>/*319:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o;
        VlWide<10>/*319:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o;
        VlWide<10>/*319:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o;
        VlWide<10>/*319:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o;
        VlWide<10>/*319:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o;
        VlWide<10>/*319:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o;
        VlWide<10>/*319:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o;
        IData/*31:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed;
        VlWide<25>/*799:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data;
        VlWide<25>/*799:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted;
    };
    struct {
        VlWide<25>/*799:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q;
        VlWide<25>/*799:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__perm_test;
        IData/*31:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__p_perm_check__DOT__unnamedblk1__DOT__k;
        VlWide<6>/*176:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d;
        VlWide<6>/*176:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q;
        VlWide<6>/*176:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update;
        VlWide<6>/*176:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed;
        IData/*31:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__gen_update_and_output_bivium__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT____Vlvbound_h06762e8a__0;
        VlWide<4>/*127:0*/ __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes;
        VlWide<8>/*255:0*/ __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes;
        VlWide<8>/*255:0*/ __Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed;
        VlWide<50>/*1599:0*/ __Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__box_to_bitarray__25__bitarray;
        VlWide<50>/*1599:0*/ __Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__box_to_bitarray__27__bitarray;
        VlWide<6>/*176:0*/ __Vfunc_bivium_generate_key_stream__44__state;
        VlWide<6>/*176:0*/ __Vfunc_bivium_update_state__45__Vfuncout;
        VlWide<6>/*176:0*/ __Vfunc_bivium_update_state__45__in;
        VlWide<6>/*176:0*/ __Vfunc_bivium_update_state__45__out;
        QData/*63:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted;
        QData/*32:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__sha3_err;
        QData/*32:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_entropy__err_o;
        QData/*63:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT____Vlvbound_hd648d4d1__0;
        QData/*63:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT____Vlvbound_hd648d4d1__1;
        VlWide<50>/*1599:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_rho__BRA__0__KET____DOT__rho_out;
        VlWide<50>/*1599:0*/ kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_rho__BRA__1__KET____DOT__rho_out;
        VlWide<50>/*1599:0*/ __Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__bitarray_to_box__24__box;
        VlWide<50>/*1599:0*/ __Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__bitarray_to_box__26__box;
        VlWide<10>/*319:0*/ __Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__28__c;
        VlWide<10>/*319:0*/ __Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__28__d;
        VlWide<50>/*1599:0*/ __Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__28__result;
        VlWide<50>/*1599:0*/ __Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__pi__29__result;
        VlWide<10>/*319:0*/ __Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__30__c;
        VlWide<10>/*319:0*/ __Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__30__d;
        VlWide<50>/*1599:0*/ __Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta__30__result;
        VlWide<50>/*1599:0*/ __Vfunc_kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__pi__31__result;
        VlUnpacked<VlWide<4>/*127:0*/, 2> kmac_reduced_tb__DOT__msg;
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT__state;
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT____Vcellout__u_kmac_reduced__state_o;
        VlUnpacked<VlWide<4>/*127:0*/, 2> kmac_reduced_tb__DOT____Vcellinp__u_kmac_reduced__msg_i;
        VlUnpacked<CData/*7:0*/, 32> kmac_reduced_tb__DOT__dpi_digest_bytes_d;
        VlUnpacked<CData/*7:0*/, 32> kmac_reduced_tb__DOT__dpi_digest_bytes_q;
        VlUnpacked<CData/*7:0*/, 16> kmac_reduced_tb__DOT__input_msg_bytes;
        VlUnpacked<CData/*7:0*/, 32> kmac_reduced_tb__DOT__output_digest_bytes;
        VlUnpacked<QData/*63:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg;
        VlUnpacked<QData/*63:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_masked;
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_sha3__state_o;
        VlUnpacked<QData/*63:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellinp__u_sha3__msg_data_i;
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__state;
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__state_guarded;
        VlUnpacked<QData/*63:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_data;
        VlUnpacked<QData/*63:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellout__u_pad__keccak_data_o;
        VlUnpacked<QData/*63:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellinp__u_pad__msg_data_i;
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellout__u_keccak__state_o;
        VlUnpacked<QData/*63:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellinp__u_keccak__data_i;
        VlUnpacked<QData/*63:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__prefix_data;
        VlUnpacked<QData/*63:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data;
        VlUnpacked<QData/*63:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__zero_with_endbit;
        VlUnpacked<QData/*55:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf;
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_out;
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__storage;
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__storage_d;
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT____Vcellout__u_keccak_p__s_o;
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT____Vcellinp__u_keccak_p__s_i;
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__state_in;
    };
    struct {
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__state_out;
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__theta_data;
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__rho_data;
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__pi_data;
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__chi_data;
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__iota_data;
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__phase1_in;
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__phase1_out;
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__phase2_in;
        VlUnpacked<VlWide<50>/*1599:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__phase2_out;
        VlUnpacked<VlWide<10>/*319:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet0;
        VlUnpacked<VlWide<10>/*319:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet1;
        VlUnpacked<VlWide<10>/*319:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2;
        VlUnpacked<VlWide<10>/*319:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet0;
        VlUnpacked<VlWide<10>/*319:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet1;
        VlUnpacked<VlWide<10>/*319:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2;
        VlUnpacked<VlWide<10>/*319:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet0;
        VlUnpacked<VlWide<10>/*319:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet1;
        VlUnpacked<VlWide<10>/*319:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2;
        VlUnpacked<VlWide<10>/*319:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet0;
        VlUnpacked<VlWide<10>/*319:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet1;
        VlUnpacked<VlWide<10>/*319:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2;
        VlUnpacked<VlWide<10>/*319:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet0;
        VlUnpacked<VlWide<10>/*319:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet1;
        VlUnpacked<VlWide<10>/*319:0*/, 2> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2;
        VlUnpacked<CData/*7:0*/, 32> __Vtask_c_dpi_sha3_256__Vdpioc2__0__digest;
        VlUnpacked<CData/*7:0*/, 16> __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout;
        VlUnpacked<CData/*7:0*/, 16> __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes;
        VlUnpacked<CData/*7:0*/, 32> __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout;
        VlUnpacked<CData/*7:0*/, 32> __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes;
        VlUnpacked<CData/*7:0*/, 32> __Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vkmac_reduced_tb__Syms* vlSymsp;  // Symbol table

    // PARAMETERS
    static constexpr VlUnpacked<IData/*31:0*/, 25> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__RhoOffset = {{
        0x00000000U, 0x00000024U, 0x00000003U, 0x00000069U,
        0x000000d2U, 0x00000001U, 0x0000012cU, 0x0000000aU,
        0x0000002dU, 0x00000042U, 0x000000beU, 0x00000006U,
        0x000000abU, 0x0000000fU, 0x000000fdU, 0x0000001cU,
        0x00000037U, 0x00000099U, 0x00000015U, 0x00000078U,
        0x0000005bU, 0x00000114U, 0x000000e7U, 0x00000088U,
        0x0000004eU
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 5> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__ThetaIndexX1 = {{
        0x00000004U, 0x00000000U, 0x00000001U, 0x00000002U,
        0x00000003U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 5> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__ThetaIndexX2 = {{
        0x00000001U, 0x00000002U, 0x00000003U, 0x00000004U,
        0x00000000U
    }};
    static constexpr VlUnpacked<VlUnpacked<IData/*31:0*/, 5>, 5> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__PiRotate = {{
        {{
            0x00000000U, 0x00000003U, 0x00000001U, 0x00000004U,
            0x00000002U
        }},
        {{
            0x00000001U, 0x00000004U, 0x00000002U, 0x00000000U,
            0x00000003U
        }},
        {{
            0x00000002U, 0x00000000U, 0x00000003U, 0x00000001U,
            0x00000004U
        }},
        {{
            0x00000003U, 0x00000001U, 0x00000004U, 0x00000002U,
            0x00000000U
        }},
        {{
            0x00000004U, 0x00000002U, 0x00000000U, 0x00000003U,
            0x00000001U
        }}
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 5> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__ChiIndexX1 = {{
        0x00000001U, 0x00000002U, 0x00000003U, 0x00000004U,
        0x00000000U
    }};
    static constexpr VlUnpacked<IData/*31:0*/, 5> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__ChiIndexX2 = {{
        0x00000002U, 0x00000003U, 0x00000004U, 0x00000000U,
        0x00000001U
    }};
    static constexpr VlUnpacked<QData/*63:0*/, 24> kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__RC = {{
        0x0000000000000001ULL, 0x0000000000008082ULL,
        0x800000000000808aULL, 0x8000000080008000ULL,
        0x000000000000808bULL, 0x0000000080000001ULL,
        0x8000000080008081ULL, 0x8000000000008009ULL,
        0x000000000000008aULL, 0x0000000000000088ULL,
        0x0000000080008009ULL, 0x000000008000000aULL,
        0x000000008000808bULL, 0x800000000000008bULL,
        0x8000000000008089ULL, 0x8000000000008003ULL,
        0x8000000000008002ULL, 0x8000000000000080ULL,
        0x000000000000800aULL, 0x800000008000000aULL,
        0x8000000080008081ULL, 0x8000000000008080ULL,
        0x0000000080000001ULL, 0x8000000080008008ULL
    }};

    // CONSTRUCTORS
    Vkmac_reduced_tb___024root(const char* name);
    ~Vkmac_reduced_tb___024root();
    VL_UNCOPYABLE(Vkmac_reduced_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vkmac_reduced_tb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
