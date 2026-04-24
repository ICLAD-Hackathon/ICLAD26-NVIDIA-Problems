// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkmac_reduced_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vkmac_reduced_tb__Syms.h"
#include "Vkmac_reduced_tb___024root.h"

extern const VlWide<64>/*2047:0*/ Vkmac_reduced_tb__ConstPool__CONST_ha26e03e5_0;
void Vkmac_reduced_tb_digestpp_dpi_pkg____Vdpiimwrap_c_dpi_sha3_256__Vdpioc2_TOP__digestpp_dpi_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, const VlUnpacked<CData/*7:0*/, 16> &msg, QData/*63:0*/ msg_len, VlUnpacked<CData/*7:0*/, 32> &digest);
extern const VlUnpacked<CData/*0:0*/, 128> Vkmac_reduced_tb__ConstPool__TABLE_hf3969bbb_0;

VL_INLINE_OPT void Vkmac_reduced_tb___024root___sequent__TOP__8(Vkmac_reduced_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkmac_reduced_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkmac_reduced_tb___024root___sequent__TOP__8\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bits;
    VlWide<4>/*127:0*/ __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bits;
    VlWide<8>/*255:0*/ __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits;
    VlWide<8>/*255:0*/ __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__Vfuncout;
    VlWide<8>/*255:0*/ __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits;
    VlWide<8>/*255:0*/ __Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__Vfuncout;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__6__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__6__val;
    CData/*5:0*/ __Vfunc_sparse2logic__7__st;
    CData/*0:0*/ __Vfunc_lc_tx_test_true_loose__10__Vfuncout;
    CData/*3:0*/ __Vfunc_lc_tx_test_true_loose__10__val;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__15__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__15__val;
    CData/*0:0*/ __Vfunc_lc_tx_test_true_loose__16__Vfuncout;
    CData/*3:0*/ __Vfunc_lc_tx_test_true_loose__16__val;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__18__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__18__val;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__19__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__19__val;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__20__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__20__val;
    CData/*0:0*/ __Vfunc_lc_tx_test_true_loose__43__Vfuncout;
    CData/*3:0*/ __Vfunc_lc_tx_test_true_loose__43__val;
    CData/*6:0*/ __Vtableidx1;
    VlWide<4>/*127:0*/ __Vdlyvval__kmac_reduced_tb__DOT__msg__v0;
    CData/*0:0*/ __Vdlyvset__kmac_reduced_tb__DOT__msg__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__kmac_reduced_tb__DOT__msg__v1;
    CData/*0:0*/ __Vdlyvset__kmac_reduced_tb__DOT__msg__v1;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v0;
    CData/*0:0*/ __Vdlyvset__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v0;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v1;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v2;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v3;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v4;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v5;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v6;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v7;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v8;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v9;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v10;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v11;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v12;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v13;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v14;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v15;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v16;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v17;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v18;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v19;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v20;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v21;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v22;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v23;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v24;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v25;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v26;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v27;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v28;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v29;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v30;
    CData/*7:0*/ __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v31;
    CData/*0:0*/ __Vdlyvset__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v32;
    CData/*0:0*/ __Vdlyvset__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf__v0;
    CData/*0:0*/ __Vdlyvset__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf__v2;
    SData/*15:0*/ __Vdly__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_value;
    SData/*9:0*/ __Vdly__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prescaler_cnt;
    VlWide<4>/*127:0*/ __Vtemp_he7670b91__0;
    VlWide<4>/*127:0*/ __Vtemp_hdbd44ac6__0;
    // Body
    __Vdly__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prescaler_cnt 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prescaler_cnt;
    __Vdlyvset__kmac_reduced_tb__DOT__msg__v0 = 0U;
    __Vdlyvset__kmac_reduced_tb__DOT__msg__v1 = 0U;
    __Vdly__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_value 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_value;
    __Vdlyvset__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf__v0 = 0U;
    __Vdlyvset__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf__v2 = 0U;
    __Vdlyvset__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v0 = 0U;
    __Vdlyvset__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v32 = 0U;
    if (vlSelf->rst_ni) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__hash_progress_q = 1U;
        if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__state_valid) {
            vlSelf->kmac_reduced_tb__DOT__output_digest[0U] 
                = (vlSelf->kmac_reduced_tb__DOT__state
                   [0U][0U] ^ vlSelf->kmac_reduced_tb__DOT__state
                   [1U][0U]);
            vlSelf->kmac_reduced_tb__DOT__output_digest[1U] 
                = (vlSelf->kmac_reduced_tb__DOT__state
                   [0U][1U] ^ vlSelf->kmac_reduced_tb__DOT__state
                   [1U][1U]);
            vlSelf->kmac_reduced_tb__DOT__output_digest[2U] 
                = (vlSelf->kmac_reduced_tb__DOT__state
                   [0U][2U] ^ vlSelf->kmac_reduced_tb__DOT__state
                   [1U][2U]);
            vlSelf->kmac_reduced_tb__DOT__output_digest[3U] 
                = (vlSelf->kmac_reduced_tb__DOT__state
                   [0U][3U] ^ vlSelf->kmac_reduced_tb__DOT__state
                   [1U][3U]);
            vlSelf->kmac_reduced_tb__DOT__output_digest[4U] 
                = (vlSelf->kmac_reduced_tb__DOT__state
                   [0U][4U] ^ vlSelf->kmac_reduced_tb__DOT__state
                   [1U][4U]);
            vlSelf->kmac_reduced_tb__DOT__output_digest[5U] 
                = (vlSelf->kmac_reduced_tb__DOT__state
                   [0U][5U] ^ vlSelf->kmac_reduced_tb__DOT__state
                   [1U][5U]);
            vlSelf->kmac_reduced_tb__DOT__output_digest[6U] 
                = (vlSelf->kmac_reduced_tb__DOT__state
                   [0U][6U] ^ vlSelf->kmac_reduced_tb__DOT__state
                   [1U][6U]);
            vlSelf->kmac_reduced_tb__DOT__output_digest[7U] 
                = (vlSelf->kmac_reduced_tb__DOT__state
                   [0U][7U] ^ vlSelf->kmac_reduced_tb__DOT__state
                   [1U][7U]);
        }
        if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_update) {
            __Vdly__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prescaler_cnt = 0U;
        } else if (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_enable) 
                    & (0U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prescaler_cnt)))) {
            __Vdly__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prescaler_cnt 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__wait_timer_prescaler_d;
        } else if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_enable) {
            __Vdly__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prescaler_cnt 
                = (0x3ffU & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prescaler_cnt) 
                             - (IData)(1U)));
        }
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__aux_rand_q 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__aux_rand_d;
        if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_start) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__start_valid = 0U;
        } else {
            __Vfunc_mubi4_test_true_strict__18__val 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_done;
            __Vfunc_mubi4_test_true_strict__18__Vfuncout 
                = (6U == (IData)(__Vfunc_mubi4_test_true_strict__18__val));
            if (__Vfunc_mubi4_test_true_strict__18__Vfuncout) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__start_valid = 1U;
            }
        }
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__low_then_high_q 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__low_then_high_d;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_triggered_q 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_triggered_d;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_in_rand_ext_q 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_in_rand_ext_d;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en_rand_q 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en_rand_d;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_in_low_q 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_in_low_d;
        vlSelf->kmac_reduced_tb__DOT__absorbed = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__absorbed;
        __Vfunc_mubi4_test_true_strict__19__val = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__absorbed;
        __Vfunc_mubi4_test_true_strict__19__Vfuncout 
            = (6U == (IData)(__Vfunc_mubi4_test_true_strict__19__val));
        if (__Vfunc_mubi4_test_true_strict__19__Vfuncout) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__done_valid = 1U;
        } else {
            __Vfunc_mubi4_test_true_strict__20__val 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_done;
            __Vfunc_mubi4_test_true_strict__20__Vfuncout 
                = (6U == (IData)(__Vfunc_mubi4_test_true_strict__20__val));
            if (__Vfunc_mubi4_test_true_strict__20__Vfuncout) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__done_valid = 0U;
            }
        }
        if (vlSelf->kmac_reduced_tb__DOT__msg_handshake) {
            vlSelf->kmac_reduced_tb__DOT__input_msg[0U] 
                = (vlSelf->kmac_reduced_tb__DOT__msg
                   [0U][0U] ^ vlSelf->kmac_reduced_tb__DOT__msg
                   [1U][0U]);
            vlSelf->kmac_reduced_tb__DOT__input_msg[1U] 
                = (vlSelf->kmac_reduced_tb__DOT__msg
                   [0U][1U] ^ vlSelf->kmac_reduced_tb__DOT__msg
                   [1U][1U]);
            vlSelf->kmac_reduced_tb__DOT__input_msg[2U] 
                = (vlSelf->kmac_reduced_tb__DOT__msg
                   [0U][2U] ^ vlSelf->kmac_reduced_tb__DOT__msg
                   [1U][2U]);
            vlSelf->kmac_reduced_tb__DOT__input_msg[3U] 
                = (vlSelf->kmac_reduced_tb__DOT__msg
                   [0U][3U] ^ vlSelf->kmac_reduced_tb__DOT__msg
                   [1U][3U]);
            __Vdlyvval__kmac_reduced_tb__DOT__msg__v0[0U] 
                = VL_RANDOM_I();
            __Vdlyvval__kmac_reduced_tb__DOT__msg__v0[1U] 
                = VL_RANDOM_I();
            __Vdlyvval__kmac_reduced_tb__DOT__msg__v0[2U] 
                = VL_RANDOM_I();
            __Vdlyvval__kmac_reduced_tb__DOT__msg__v0[3U] 
                = VL_RANDOM_I();
            __Vdlyvset__kmac_reduced_tb__DOT__msg__v0 = 1U;
        }
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_run_req_q 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_run_req_d;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = (0x3ffU & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__cnt_d_committed 
                         >> 0xaU));
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = (0x3ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__cnt_d_committed);
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_d;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_complete 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__complete_d;
        if (vlSelf->kmac_reduced_tb__DOT__entropy_req) {
            vlSelf->kmac_reduced_tb__DOT__entropy_req_q = 1U;
            vlSelf->kmac_reduced_tb__DOT__entropy = 
                VL_RANDOM_I();
        } else {
            vlSelf->kmac_reduced_tb__DOT__entropy_req_q = 0U;
        }
        if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_update) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__non_zero_wait_timer_limit = 1U;
            __Vdly__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_value = 0xffffU;
        } else if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_expired) {
            __Vdly__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_value = 0U;
        } else if ((((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_enable) 
                     & (0U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prescaler_cnt))) 
                    & (0U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_value)))) {
            __Vdly__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_value 
                = (0xffffU & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_value) 
                              - (IData)(1U)));
        }
        if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__clr_msgbuf) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb = 0U;
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__entropy_req_hold_q = 0U;
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_prim_lc_sync__DOT__lc_en 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_prim_lc_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__intq;
            __Vdlyvset__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf__v0 = 1U;
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__entropy_req_hold_q = 0U;
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_prim_lc_sync__DOT__lc_en 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_prim_lc_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__intq;
        }
        if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_start) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__process_valid = 1U;
        } else if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_process) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__process_valid = 0U;
        }
        if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_process) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__process_latched = 1U;
        } else {
            __Vfunc_mubi4_test_true_strict__15__val 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_done;
            __Vfunc_mubi4_test_true_strict__15__Vfuncout 
                = (6U == (IData)(__Vfunc_mubi4_test_true_strict__15__val));
            if (__Vfunc_mubi4_test_true_strict__15__Vfuncout) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__process_latched = 0U;
            }
        }
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_req_q 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_req_d;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d;
        if (vlSelf->kmac_reduced_tb__DOT__sha3_process) {
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v0 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0x1fU];
            __Vdlyvset__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v0 = 1U;
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v1 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0x1eU];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v2 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0x1dU];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v3 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0x1cU];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v4 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0x1bU];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v5 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0x1aU];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v6 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0x19U];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v7 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0x18U];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v8 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0x17U];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v9 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0x16U];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v10 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0x15U];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v11 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0x14U];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v12 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0x13U];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v13 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0x12U];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v14 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0x11U];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v15 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0x10U];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v16 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0xfU];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v17 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0xeU];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v18 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0xdU];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v19 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0xcU];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v20 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0xbU];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v21 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0xaU];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v22 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [9U];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v23 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [8U];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v24 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [7U];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v25 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [6U];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v26 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [5U];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v27 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [4U];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v28 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [3U];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v29 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [2U];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v30 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [1U];
            __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v31 
                = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d
                [0U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__st_d;
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__processing = 1U;
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__st_d;
            __Vfunc_mubi4_test_true_strict__6__val 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__absorbed;
            __Vfunc_mubi4_test_true_strict__6__Vfuncout 
                = (6U == (IData)(__Vfunc_mubi4_test_true_strict__6__val));
            if (__Vfunc_mubi4_test_true_strict__6__Vfuncout) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__processing = 0U;
            }
        }
        if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__mode_latch) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__mode_q = 1U;
        }
        if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__threshold_hit_clr) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__threshold_hit_q = 0U;
        } else if ((0x3ffU <= (0x3ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__cnt_q))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__threshold_hit_q = 1U;
        }
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = (0x1fU & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_d_committed) 
                        >> 5U));
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = (0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_d_committed));
        vlSelf->kmac_reduced_tb__DOT__reseed_count_q 
            = vlSelf->kmac_reduced_tb__DOT__reseed_count_d;
        if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_valid_set) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__sha3_rand_valid = 1U;
        } else if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_valid_clear) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__sha3_rand_valid = 0U;
        }
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_out_low_q 
            = (1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_in_low_d)));
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__gen_unpack_mode__DOT__ptr_q 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__gen_unpack_mode__DOT__ptr_d;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__gen_unpack_mode__DOT__ptr_q 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__gen_unpack_mode__DOT__ptr_d;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_q[0U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_d[0U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_q[1U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_d[1U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_q[2U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_d[2U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_q[3U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_d[3U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_q[0U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_d[0U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_q[1U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_d[1U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_q[2U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_d[2U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_q[3U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_d[3U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_st_d;
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__hash_progress_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__output_digest[0U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__output_digest[1U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__output_digest[2U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__output_digest[3U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__output_digest[4U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__output_digest[5U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__output_digest[6U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__output_digest[7U] = 0U;
        __Vdly__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prescaler_cnt = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__aux_rand_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__start_valid = 1U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__low_then_high_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_triggered_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_in_rand_ext_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en_rand_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_in_low_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__absorbed = 9U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__done_valid = 0U;
        vlSelf->kmac_reduced_tb__DOT__input_msg[0U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__input_msg[1U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__input_msg[2U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__input_msg[3U] = 0U;
        __Vdlyvval__kmac_reduced_tb__DOT__msg__v1[0U] 
            = VL_RANDOM_I();
        __Vdlyvval__kmac_reduced_tb__DOT__msg__v1[1U] 
            = VL_RANDOM_I();
        __Vdlyvval__kmac_reduced_tb__DOT__msg__v1[2U] 
            = VL_RANDOM_I();
        __Vdlyvval__kmac_reduced_tb__DOT__msg__v1[3U] 
            = VL_RANDOM_I();
        __Vdlyvset__kmac_reduced_tb__DOT__msg__v1 = 1U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_run_req_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0x3ffU;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_complete = 0U;
        vlSelf->kmac_reduced_tb__DOT__entropy_req_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__entropy = VL_RANDOM_I();
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__non_zero_wait_timer_limit = 0U;
        __Vdly__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_value = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__entropy_req_hold_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_prim_lc_sync__DOT__lc_en = 0xaU;
        __Vdlyvset__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf__v2 = 1U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__process_valid = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__process_latched = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_req_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw = 0x2cU;
        __Vdlyvset__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v32 = 1U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw = 0x42U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__processing = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__mode_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__threshold_hit_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0x1fU;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__reseed_count_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__sha3_rand_valid = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_out_low_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__gen_unpack_mode__DOT__ptr_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__gen_unpack_mode__DOT__ptr_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_q[0U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_q[1U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_q[2U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_q[3U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_q[0U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_q[1U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_q[2U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_q[3U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw = 0x1fU;
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__clr_q 
        = (1U & (~ (IData)(vlSelf->rst_ni)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__clr_q 
        = (1U & (~ (IData)(vlSelf->rst_ni)));
    if (vlSelf->rst_ni) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__depth_q 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__depth_d;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__depth_q 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__depth_d;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_entropy_configured__DOT__gen_no_flops__DOT__unused_logic 
            = ((0x278U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))
                ? 6U : 9U);
        if (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__data_update) 
             | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_en))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[2U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[3U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[4U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[5U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[6U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[7U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[8U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[9U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0xaU] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0xbU] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0xcU] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0xdU] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0xeU] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0xfU] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x10U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x11U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x12U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x13U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x14U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x15U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x16U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x17U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x18U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U];
        }
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = (0x1fU & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_d_committed) 
                        >> 5U));
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = (0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_d_committed));
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[0U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[0U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[1U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[1U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[2U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[2U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[3U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[3U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[4U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[4U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[5U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[5U];
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__depth_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__depth_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_entropy_configured__DOT__gen_no_flops__DOT__unused_logic = 9U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] = 0x74f1713aU;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] = 0xc32d580fU;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[2U] = 0x4743b3c7U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[3U] = 0x23c5a4cfU;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[4U] = 0xc132b57U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[5U] = 0x153282a3U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[6U] = 0x6ea343ecU;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[7U] = 0x31e1c461U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[8U] = 0x758a4420U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[9U] = 0xf9077a6bU;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0xaU] = 0xe9b31605U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0xbU] = 0x5a71f35fU;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0xcU] = 0x11849a07U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0xdU] = 0xe2588917U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0xeU] = 0xd8be84f1U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0xfU] = 0x83c01ea5U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x10U] = 0x3d65392cU;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x11U] = 0x5381f2bcU;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x12U] = 0x92ad8123U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x13U] = 0x24b66efdU;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x14U] = 0xa91d8668U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x15U] = 0x4544ad28U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x16U] = 0xe0bd0634U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x17U] = 0xf1d83863U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x18U] = 0x292603b4U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0x1fU;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[0U] = 0x74f1713aU;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[1U] = 0xc32d580fU;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[2U] = 0x4743b3c7U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[3U] = 0x23c5a4cfU;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[4U] = 0xc132b57U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[5U] = 0x82a3U;
    }
    vlSelf->test_done_o = 0U;
    vlSelf->test_passed_o = 0U;
    if (((IData)(vlSelf->rst_ni) & (0U != (IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q)))) {
        if (VL_UNLIKELY(((0U != vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__sha3_err) 
                         | ((((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3_state_error) 
                              | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error)) 
                             | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error)) 
                            | (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__err_q) 
                                | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__err_q)) 
                               | ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_storage_error) 
                                  | ((0U != vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_entropy__err_o) 
                                     | ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__entropy_state_error) 
                                        | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__err_q))))))))) {
            VL_WRITEF("\nERROR: error condition detected.\n");
            vlSelf->test_done_o = 1U;
        } else if (vlSelf->kmac_reduced_tb__DOT__test_done) {
            vlSelf->test_done_o = 1U;
            if (((((((((((((((((((((((((((((((((vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                                [0U] 
                                                == 
                                                vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                                [0U]) 
                                               & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                                  [1U] 
                                                  == 
                                                  vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                                  [1U])) 
                                              & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                                 [2U] 
                                                 == 
                                                 vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                                 [2U])) 
                                             & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                                [3U] 
                                                == 
                                                vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                                [3U])) 
                                            & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                               [4U] 
                                               == vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                               [4U])) 
                                           & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                              [5U] 
                                              == vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                              [5U])) 
                                          & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                             [6U] == 
                                             vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                             [6U])) 
                                         & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                            [7U] == 
                                            vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                            [7U])) 
                                        & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                           [8U] == 
                                           vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                           [8U])) & 
                                       (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                        [9U] == vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                        [9U])) & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                                  [0xaU] 
                                                  == 
                                                  vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                                  [0xaU])) 
                                     & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                        [0xbU] == vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                        [0xbU])) & 
                                    (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                     [0xcU] == vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                     [0xcU])) & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                                 [0xdU] 
                                                 == 
                                                 vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                                 [0xdU])) 
                                  & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                     [0xeU] == vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                     [0xeU])) & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                                 [0xfU] 
                                                 == 
                                                 vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                                 [0xfU])) 
                                & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                   [0x10U] == vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                   [0x10U])) & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                                [0x11U] 
                                                == 
                                                vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                                [0x11U])) 
                              & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                 [0x12U] == vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                 [0x12U])) & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                              [0x13U] 
                                              == vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                              [0x13U])) 
                            & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                               [0x14U] == vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                               [0x14U])) & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                            [0x15U] 
                                            == vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                            [0x15U])) 
                          & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                             [0x16U] == vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                             [0x16U])) & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                          [0x17U] == 
                                          vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                          [0x17U])) 
                        & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                           [0x18U] == vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                           [0x18U])) & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                        [0x19U] == 
                                        vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                        [0x19U])) & 
                      (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                       [0x1aU] == vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                       [0x1aU])) & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                    [0x1bU] == vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                    [0x1bU])) & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                                 [0x1cU] 
                                                 == 
                                                 vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                                 [0x1cU])) 
                   & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                      [0x1dU] == vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                      [0x1dU])) & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                   [0x1eU] == vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                   [0x1eU])) & (vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
                                                [0x1fU] 
                                                == 
                                                vlSelf->kmac_reduced_tb__DOT__output_digest_bytes
                                                [0x1fU]))) {
                VL_WRITEF("\nSUCCESS: processing finished successfully, output matches expected digest.\nExpected: %x\n",
                          256,vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_packed.data());
                vlSelf->test_passed_o = 1U;
                VL_WRITEF("Got:      %x\n",256,vlSelf->kmac_reduced_tb__DOT__output_digest_bytes_packed.data());
            } else {
                VL_WRITEF("\nERROR: processing finished, but output doesn't matches expected digest.\nExpected: %x\n",
                          256,vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_packed.data());
                vlSelf->test_passed_o = 0U;
                VL_WRITEF("Got:      %x\n\nInput:    %x\n",
                          256,vlSelf->kmac_reduced_tb__DOT__output_digest_bytes_packed.data(),
                          128,vlSelf->kmac_reduced_tb__DOT__input_msg_bytes_packed.data());
            }
        }
    }
    if (VL_UNLIKELY((0x1f4U == (IData)(vlSelf->kmac_reduced_tb__DOT__count_q)))) {
        VL_WRITEF("\nERROR: Simulation timed out.\n");
        vlSelf->test_done_o = 1U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_update) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[0U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a1[0U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b1[0U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[1U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a1[1U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b1[1U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[2U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a1[2U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b1[2U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[3U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a1[3U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b1[3U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[4U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a1[4U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b1[4U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[5U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a0[0U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b0[0U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[6U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a0[1U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b0[1U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[7U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a0[2U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b0[2U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[8U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a0[3U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b0[3U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[9U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a0[4U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b0[4U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[0U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a1[0U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b1[0U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[1U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a1[1U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b1[1U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[2U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a1[2U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b1[2U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[3U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a1[3U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b1[3U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[4U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a1[4U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b1[4U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[5U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a0[0U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b0[0U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[6U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a0[1U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b0[1U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[7U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a0[2U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b0[2U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[8U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a0[3U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b0[3U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[9U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a0[4U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b0[4U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[0U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a1[0U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b1[0U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[1U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a1[1U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b1[1U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[2U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a1[2U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b1[2U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[3U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a1[3U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b1[3U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[4U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a1[4U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b1[4U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[5U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a0[0U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b0[0U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[6U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a0[1U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b0[1U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[7U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a0[2U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b0[2U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[8U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a0[3U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b0[3U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[9U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a0[4U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b0[4U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[0U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a1[0U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b1[0U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[1U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a1[1U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b1[1U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[2U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a1[2U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b1[2U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[3U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a1[3U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b1[3U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[4U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a1[4U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b1[4U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[5U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a0[0U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b0[0U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[6U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a0[1U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b0[1U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[7U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a0[2U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b0[2U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[8U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a0[3U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b0[3U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[9U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a0[4U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b0[4U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[0U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a1[0U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b1[0U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[1U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a1[1U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b1[1U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[2U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a1[2U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b1[2U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[3U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a1[3U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b1[3U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[4U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a1[4U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b1[4U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[5U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a0[0U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b0[0U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[6U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a0[1U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b0[1U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[7U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a0[2U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b0[2U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[8U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a0[3U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b0[3U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[9U] 
                = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a0[4U] 
                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b0[4U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[0U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a1[0U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b0[0U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x14U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[1U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a1[1U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b0[1U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x15U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[2U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a1[2U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b0[2U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x16U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[3U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a1[3U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b0[3U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x17U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[4U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a1[4U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b0[4U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x18U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[5U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a0[0U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b1[0U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x14U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[6U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a0[1U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b1[1U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x15U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[7U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a0[2U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b1[2U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x16U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[8U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a0[3U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b1[3U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x17U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[9U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__a0[4U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__b1[4U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x18U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[0U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a1[0U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b0[0U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xfU]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[1U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a1[1U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b0[1U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x10U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[2U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a1[2U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b0[2U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x11U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[3U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a1[3U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b0[3U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x12U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[4U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a1[4U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b0[4U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x13U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[5U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a0[0U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b1[0U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xfU]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[6U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a0[1U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b1[1U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x10U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[7U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a0[2U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b1[2U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x11U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[8U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a0[3U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b1[3U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x12U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[9U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__a0[4U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__b1[4U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x13U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[0U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a1[0U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b0[0U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xaU]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[1U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a1[1U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b0[1U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xbU]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[2U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a1[2U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b0[2U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xcU]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[3U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a1[3U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b0[3U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xdU]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[4U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a1[4U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b0[4U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xeU]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[5U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a0[0U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b1[0U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xaU]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[6U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a0[1U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b1[1U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xbU]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[7U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a0[2U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b1[2U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xcU]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[8U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a0[3U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b1[3U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xdU]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[9U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__a0[4U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__b1[4U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xeU]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[0U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a1[0U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b0[0U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[5U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[1U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a1[1U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b0[1U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[6U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[2U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a1[2U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b0[2U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[7U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[3U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a1[3U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b0[3U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[8U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[4U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a1[4U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b0[4U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[9U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[5U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a0[0U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b1[0U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[5U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[6U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a0[1U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b1[1U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[6U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[7U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a0[2U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b1[2U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[7U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[8U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a0[3U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b1[3U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[8U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[9U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__a0[4U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__b1[4U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[9U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[0U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a1[0U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b0[0U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[1U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a1[1U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b0[1U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[1U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[2U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a1[2U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b0[2U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[2U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[3U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a1[3U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b0[3U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[3U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[4U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a1[4U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b0[4U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[4U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[5U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a0[0U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b1[0U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[6U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a0[1U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b1[1U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[1U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[7U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a0[2U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b1[2U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[2U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[8U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a0[3U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b1[3U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[3U]);
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[9U] 
                = ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__a0[4U] 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__b1[4U]) 
                   ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[4U]);
        }
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[0U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[1U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[2U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[3U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[4U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[5U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[6U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[7U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[8U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[9U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[0U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[1U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[2U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[3U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[4U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[5U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[6U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[7U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[8U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[9U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[0U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[1U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[2U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[3U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[4U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[5U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[6U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[7U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[8U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[9U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[0U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[1U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[2U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[3U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[4U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[5U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[6U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[7U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[8U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[9U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[0U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[1U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[2U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[3U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[4U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[5U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[6U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[7U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[8U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[9U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[0U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[1U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[2U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[3U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[4U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[5U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[6U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[7U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[8U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[9U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[0U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[1U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[2U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[3U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[4U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[5U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[6U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[7U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[8U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[9U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[0U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[1U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[2U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[3U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[4U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[5U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[6U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[7U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[8U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[9U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[0U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[1U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[2U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[3U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[4U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[5U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[6U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[7U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[8U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[9U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[0U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[1U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[2U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[3U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[4U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[5U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[6U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[7U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[8U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[9U] = 0U;
    }
    if (__Vdlyvset__kmac_reduced_tb__DOT__msg__v0) {
        vlSelf->kmac_reduced_tb__DOT__msg[0U][0U] = 
            __Vdlyvval__kmac_reduced_tb__DOT__msg__v0[0U];
        vlSelf->kmac_reduced_tb__DOT__msg[0U][1U] = 
            __Vdlyvval__kmac_reduced_tb__DOT__msg__v0[1U];
        vlSelf->kmac_reduced_tb__DOT__msg[0U][2U] = 
            __Vdlyvval__kmac_reduced_tb__DOT__msg__v0[2U];
        vlSelf->kmac_reduced_tb__DOT__msg[0U][3U] = 
            __Vdlyvval__kmac_reduced_tb__DOT__msg__v0[3U];
    }
    if (__Vdlyvset__kmac_reduced_tb__DOT__msg__v1) {
        vlSelf->kmac_reduced_tb__DOT__msg[0U][0U] = 
            __Vdlyvval__kmac_reduced_tb__DOT__msg__v1[0U];
        vlSelf->kmac_reduced_tb__DOT__msg[0U][1U] = 
            __Vdlyvval__kmac_reduced_tb__DOT__msg__v1[1U];
        vlSelf->kmac_reduced_tb__DOT__msg[0U][2U] = 
            __Vdlyvval__kmac_reduced_tb__DOT__msg__v1[2U];
        vlSelf->kmac_reduced_tb__DOT__msg[0U][3U] = 
            __Vdlyvval__kmac_reduced_tb__DOT__msg__v1[3U];
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prescaler_cnt 
        = __Vdly__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prescaler_cnt;
    if (__Vdlyvset__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf__v0) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf[0U] = 0ULL;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf[1U] = 0ULL;
    }
    if (__Vdlyvset__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf__v2) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf[0U] = 0ULL;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf[1U] = 0ULL;
    }
    if (__Vdlyvset__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v0) {
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x1fU] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v0;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x1eU] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v1;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x1dU] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v2;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x1cU] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v3;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x1bU] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v4;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x1aU] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v5;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x19U] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v6;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x18U] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v7;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x17U] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v8;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x16U] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v9;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x15U] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v10;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x14U] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v11;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x13U] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v12;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x12U] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v13;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x11U] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v14;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x10U] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v15;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0xfU] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v16;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0xeU] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v17;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0xdU] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v18;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0xcU] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v19;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0xbU] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v20;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0xaU] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v21;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[9U] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v22;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[8U] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v23;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[7U] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v24;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[6U] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v25;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[5U] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v26;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[4U] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v27;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[3U] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v28;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[2U] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v29;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[1U] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v30;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0U] 
            = __Vdlyvval__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v31;
    }
    if (__Vdlyvset__kmac_reduced_tb__DOT__dpi_digest_bytes_q__v32) {
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x1fU] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x1eU] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x1dU] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x1cU] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x1bU] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x1aU] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x19U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x18U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x17U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x16U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x15U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x14U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x13U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x12U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x11U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0x10U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0xfU] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0xeU] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0xdU] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0xcU] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0xbU] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0xaU] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[9U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[8U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[7U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[6U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[5U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[4U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[3U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[2U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[1U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q[0U] = 0U;
    }
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[0U] 
        = vlSelf->kmac_reduced_tb__DOT__output_digest[0U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[1U] 
        = vlSelf->kmac_reduced_tb__DOT__output_digest[1U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[2U] 
        = vlSelf->kmac_reduced_tb__DOT__output_digest[2U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[3U] 
        = vlSelf->kmac_reduced_tb__DOT__output_digest[3U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[4U] 
        = vlSelf->kmac_reduced_tb__DOT__output_digest[4U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[5U] 
        = vlSelf->kmac_reduced_tb__DOT__output_digest[5U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[6U] 
        = vlSelf->kmac_reduced_tb__DOT__output_digest[6U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[7U] 
        = vlSelf->kmac_reduced_tb__DOT__output_digest[7U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0U] 
        = (0xffU & __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[0U]);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[1U] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[0U] 
                    >> 8U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[2U] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[0U] 
                    >> 0x10U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[3U] 
        = (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[0U] 
           >> 0x18U);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[4U] 
        = (0xffU & __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[1U]);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[5U] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[1U] 
                    >> 8U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[6U] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[1U] 
                    >> 0x10U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[7U] 
        = (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[1U] 
           >> 0x18U);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[8U] 
        = (0xffU & __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[2U]);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[9U] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[2U] 
                    >> 8U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0xaU] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[2U] 
                    >> 0x10U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0xbU] 
        = (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[2U] 
           >> 0x18U);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0xcU] 
        = (0xffU & __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[3U]);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0xdU] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[3U] 
                    >> 8U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0xeU] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[3U] 
                    >> 0x10U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0xfU] 
        = (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[3U] 
           >> 0x18U);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0x10U] 
        = (0xffU & __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[4U]);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0x11U] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[4U] 
                    >> 8U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0x12U] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[4U] 
                    >> 0x10U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0x13U] 
        = (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[4U] 
           >> 0x18U);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0x14U] 
        = (0xffU & __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[5U]);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0x15U] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[5U] 
                    >> 8U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0x16U] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[5U] 
                    >> 0x10U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0x17U] 
        = (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[5U] 
           >> 0x18U);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0x18U] 
        = (0xffU & __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[6U]);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0x19U] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[6U] 
                    >> 8U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0x1aU] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[6U] 
                    >> 0x10U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0x1bU] 
        = (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[6U] 
           >> 0x18U);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0x1cU] 
        = (0xffU & __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[7U]);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0x1dU] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[7U] 
                    >> 8U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0x1eU] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[7U] 
                    >> 0x10U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes[0x1fU] 
        = (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bits[7U] 
           >> 0x18U);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0x1fU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0x1fU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0x1eU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0x1eU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0x1dU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0x1dU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0x1cU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0x1cU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0x1bU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0x1bU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0x1aU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0x1aU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0x19U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0x19U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0x18U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0x18U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0x17U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0x17U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0x16U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0x16U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0x15U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0x15U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0x14U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0x14U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0x13U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0x13U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0x12U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0x12U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0x11U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0x11U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0x10U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0x10U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0xfU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0xfU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0xeU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0xeU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0xdU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0xdU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0xcU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0xcU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0xbU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0xbU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0xaU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0xaU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[9U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [9U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[8U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [8U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[7U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [7U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[6U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [6U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[5U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [5U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[4U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [4U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[3U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [3U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[2U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [2U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[1U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [1U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout[0U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__bytes
        [0U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0x1fU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0x1fU];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0x1eU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0x1eU];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0x1dU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0x1dU];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0x1cU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0x1cU];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0x1bU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0x1bU];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0x1aU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0x1aU];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0x19U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0x19U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0x18U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0x18U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0x17U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0x17U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0x16U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0x16U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0x15U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0x15U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0x14U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0x14U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0x13U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0x13U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0x12U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0x12U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0x11U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0x11U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0x10U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0x10U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0xfU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0xfU];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0xeU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0xeU];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0xdU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0xdU];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0xcU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0xcU];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0xbU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0xbU];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0xaU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0xaU];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[9U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [9U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[8U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [8U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[7U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [7U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[6U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [6U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[5U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [5U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[4U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [4U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[3U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [3U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[2U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [2U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[1U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [1U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes[0U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes__3__Vfuncout
        [0U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[0U] 
        = vlSelf->kmac_reduced_tb__DOT__output_digest[0U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[1U] 
        = vlSelf->kmac_reduced_tb__DOT__output_digest[1U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[2U] 
        = vlSelf->kmac_reduced_tb__DOT__output_digest[2U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[3U] 
        = vlSelf->kmac_reduced_tb__DOT__output_digest[3U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[4U] 
        = vlSelf->kmac_reduced_tb__DOT__output_digest[4U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[5U] 
        = vlSelf->kmac_reduced_tb__DOT__output_digest[5U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[6U] 
        = vlSelf->kmac_reduced_tb__DOT__output_digest[6U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[7U] 
        = vlSelf->kmac_reduced_tb__DOT__output_digest[7U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[7U] 
        = ((0xffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[7U]) 
           | (0xffffff00U & ((__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[0U] 
                              << 0x18U) | ((0xff0000U 
                                            & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[0U] 
                                               << 8U)) 
                                           | (0xff00U 
                                              & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[0U] 
                                                 >> 8U))))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[6U] 
        = ((0xffffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[6U]) 
           | (0xffff0000U & ((__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[1U] 
                              << 0x18U) | (0xff0000U 
                                           & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[1U] 
                                              << 8U)))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[7U] 
        = ((0xffffff00U & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[7U]) 
           | (0xffffU & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[0U] 
                         >> 0x18U)));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[5U] 
        = ((0xffffffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[5U]) 
           | (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[2U] 
              << 0x18U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[6U] 
        = ((0xffff0000U & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[6U]) 
           | (0xffffffU & ((0xff00U & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[1U] 
                                       >> 8U)) | (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[1U] 
                                                  >> 0x18U))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[5U] 
        = ((0xff000000U & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[5U]) 
           | ((0xff0000U & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[2U] 
                            << 8U)) | ((0xff00U & (
                                                   __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[2U] 
                                                   >> 8U)) 
                                       | (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[2U] 
                                          >> 0x18U))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[4U] 
        = ((0xffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[4U]) 
           | (0xffffff00U & ((__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[3U] 
                              << 0x18U) | ((0xff0000U 
                                            & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[3U] 
                                               << 8U)) 
                                           | (0xff00U 
                                              & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[3U] 
                                                 >> 8U))))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[3U] 
        = ((0xffffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[3U]) 
           | (0xffff0000U & ((__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[4U] 
                              << 0x18U) | (0xff0000U 
                                           & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[4U] 
                                              << 8U)))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[4U] 
        = ((0xffffff00U & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[4U]) 
           | (0xffffU & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[3U] 
                         >> 0x18U)));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[2U] 
        = ((0xffffffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[2U]) 
           | (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[5U] 
              << 0x18U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[3U] 
        = ((0xffff0000U & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[3U]) 
           | (0xffffffU & ((0xff00U & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[4U] 
                                       >> 8U)) | (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[4U] 
                                                  >> 0x18U))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[2U] 
        = ((0xff000000U & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[2U]) 
           | ((0xff0000U & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[5U] 
                            << 8U)) | ((0xff00U & (
                                                   __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[5U] 
                                                   >> 8U)) 
                                       | (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[5U] 
                                          >> 0x18U))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[1U] 
        = ((0xffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[1U]) 
           | (0xffffff00U & ((__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[6U] 
                              << 0x18U) | ((0xff0000U 
                                            & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[6U] 
                                               << 8U)) 
                                           | (0xff00U 
                                              & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[6U] 
                                                 >> 8U))))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[0U] 
        = ((0xffffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[0U]) 
           | (0xffff0000U & ((__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[7U] 
                              << 0x18U) | (0xff0000U 
                                           & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[7U] 
                                              << 8U)))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[1U] 
        = ((0xffffff00U & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[1U]) 
           | (0xffffU & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[6U] 
                         >> 0x18U)));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[0U] 
        = ((0xffff0000U & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[0U]) 
           | ((0xff00U & (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[7U] 
                          >> 8U)) | (__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bits[7U] 
                                     >> 0x18U)));
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__Vfuncout[0U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[0U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__Vfuncout[1U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[1U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__Vfuncout[2U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[2U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__Vfuncout[3U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[3U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__Vfuncout[4U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[4U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__Vfuncout[5U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[5U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__Vfuncout[6U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[6U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__Vfuncout[7U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__bytes[7U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes_packed[0U] 
        = __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__Vfuncout[0U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes_packed[1U] 
        = __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__Vfuncout[1U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes_packed[2U] 
        = __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__Vfuncout[2U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes_packed[3U] 
        = __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__Vfuncout[3U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes_packed[4U] 
        = __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__Vfuncout[4U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes_packed[5U] 
        = __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__Vfuncout[5U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes_packed[6U] 
        = __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__Vfuncout[6U];
    vlSelf->kmac_reduced_tb__DOT__output_digest_bytes_packed[7U] 
        = __Vfunc_kmac_reduced_tb__DOT__digest_bits_to_bytes_packed__4__Vfuncout[7U];
    if (vlSelf->rst_ni) {
        if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_update) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__wait_timer_prescaler_d = 0U;
        }
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__wait_timer_prescaler_d = 0U;
    }
    __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bits[0U] 
        = vlSelf->kmac_reduced_tb__DOT__input_msg[0U];
    __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bits[1U] 
        = vlSelf->kmac_reduced_tb__DOT__input_msg[1U];
    __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bits[2U] 
        = vlSelf->kmac_reduced_tb__DOT__input_msg[2U];
    __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bits[3U] 
        = vlSelf->kmac_reduced_tb__DOT__input_msg[3U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes[3U] 
        = ((0xffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes[3U]) 
           | (0xffffff00U & ((__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bits[0U] 
                              << 0x18U) | ((0xff0000U 
                                            & (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bits[0U] 
                                               << 8U)) 
                                           | (0xff00U 
                                              & (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bits[0U] 
                                                 >> 8U))))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes[2U] 
        = ((0xffffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes[2U]) 
           | (0xffff0000U & ((__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bits[1U] 
                              << 0x18U) | (0xff0000U 
                                           & (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bits[1U] 
                                              << 8U)))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes[3U] 
        = ((0xffffff00U & vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes[3U]) 
           | (0xffffU & (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bits[0U] 
                         >> 0x18U)));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes[1U] 
        = ((0xffffffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes[1U]) 
           | (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bits[2U] 
              << 0x18U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes[2U] 
        = ((0xffff0000U & vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes[2U]) 
           | (0xffffffU & ((0xff00U & (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bits[1U] 
                                       >> 8U)) | (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bits[1U] 
                                                  >> 0x18U))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes[1U] 
        = ((0xff000000U & vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes[1U]) 
           | ((0xff0000U & (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bits[2U] 
                            << 8U)) | ((0xff00U & (
                                                   __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bits[2U] 
                                                   >> 8U)) 
                                       | (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bits[2U] 
                                          >> 0x18U))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes[0U] 
        = ((0xffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes[0U]) 
           | (0xffffff00U & ((__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bits[3U] 
                              << 0x18U) | ((0xff0000U 
                                            & (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bits[3U] 
                                               << 8U)) 
                                           | (0xff00U 
                                              & (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bits[3U] 
                                                 >> 8U))))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes[0U] 
        = ((0xffffff00U & vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes[0U]) 
           | (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bits[3U] 
              >> 0x18U));
    __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__Vfuncout[0U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes[0U];
    __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__Vfuncout[1U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes[1U];
    __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__Vfuncout[2U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes[2U];
    __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__Vfuncout[3U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__bytes[3U];
    vlSelf->kmac_reduced_tb__DOT__input_msg_bytes_packed[0U] 
        = __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__Vfuncout[0U];
    vlSelf->kmac_reduced_tb__DOT__input_msg_bytes_packed[1U] 
        = __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__Vfuncout[1U];
    vlSelf->kmac_reduced_tb__DOT__input_msg_bytes_packed[2U] 
        = __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__Vfuncout[2U];
    vlSelf->kmac_reduced_tb__DOT__input_msg_bytes_packed[3U] 
        = __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes_packed__2__Vfuncout[3U];
    __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bits[0U] 
        = vlSelf->kmac_reduced_tb__DOT__input_msg[0U];
    __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bits[1U] 
        = vlSelf->kmac_reduced_tb__DOT__input_msg[1U];
    __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bits[2U] 
        = vlSelf->kmac_reduced_tb__DOT__input_msg[2U];
    __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bits[3U] 
        = vlSelf->kmac_reduced_tb__DOT__input_msg[3U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes[0U] 
        = (0xffU & __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bits[0U]);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes[1U] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bits[0U] 
                    >> 8U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes[2U] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bits[0U] 
                    >> 0x10U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes[3U] 
        = (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bits[0U] 
           >> 0x18U);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes[4U] 
        = (0xffU & __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bits[1U]);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes[5U] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bits[1U] 
                    >> 8U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes[6U] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bits[1U] 
                    >> 0x10U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes[7U] 
        = (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bits[1U] 
           >> 0x18U);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes[8U] 
        = (0xffU & __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bits[2U]);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes[9U] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bits[2U] 
                    >> 8U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes[0xaU] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bits[2U] 
                    >> 0x10U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes[0xbU] 
        = (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bits[2U] 
           >> 0x18U);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes[0xcU] 
        = (0xffU & __Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bits[3U]);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes[0xdU] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bits[3U] 
                    >> 8U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes[0xeU] 
        = (0xffU & (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bits[3U] 
                    >> 0x10U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes[0xfU] 
        = (__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bits[3U] 
           >> 0x18U);
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout[0xfU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes
        [0xfU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout[0xeU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes
        [0xeU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout[0xdU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes
        [0xdU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout[0xcU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes
        [0xcU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout[0xbU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes
        [0xbU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout[0xaU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes
        [0xaU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout[9U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes
        [9U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout[8U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes
        [8U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout[7U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes
        [7U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout[6U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes
        [6U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout[5U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes
        [5U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout[4U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes
        [4U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout[3U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes
        [3U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout[2U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes
        [2U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout[1U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes
        [1U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout[0U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__bytes
        [0U];
    vlSelf->kmac_reduced_tb__DOT__input_msg_bytes[0xfU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout
        [0xfU];
    vlSelf->kmac_reduced_tb__DOT__input_msg_bytes[0xeU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout
        [0xeU];
    vlSelf->kmac_reduced_tb__DOT__input_msg_bytes[0xdU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout
        [0xdU];
    vlSelf->kmac_reduced_tb__DOT__input_msg_bytes[0xcU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout
        [0xcU];
    vlSelf->kmac_reduced_tb__DOT__input_msg_bytes[0xbU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout
        [0xbU];
    vlSelf->kmac_reduced_tb__DOT__input_msg_bytes[0xaU] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout
        [0xaU];
    vlSelf->kmac_reduced_tb__DOT__input_msg_bytes[9U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout
        [9U];
    vlSelf->kmac_reduced_tb__DOT__input_msg_bytes[8U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout
        [8U];
    vlSelf->kmac_reduced_tb__DOT__input_msg_bytes[7U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout
        [7U];
    vlSelf->kmac_reduced_tb__DOT__input_msg_bytes[6U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout
        [6U];
    vlSelf->kmac_reduced_tb__DOT__input_msg_bytes[5U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout
        [5U];
    vlSelf->kmac_reduced_tb__DOT__input_msg_bytes[4U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout
        [4U];
    vlSelf->kmac_reduced_tb__DOT__input_msg_bytes[3U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout
        [3U];
    vlSelf->kmac_reduced_tb__DOT__input_msg_bytes[2U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout
        [2U];
    vlSelf->kmac_reduced_tb__DOT__input_msg_bytes[1U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout
        [1U];
    vlSelf->kmac_reduced_tb__DOT__input_msg_bytes[0U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__msg_bits_to_bytes__1__Vfuncout
        [0U];
    vlSelf->kmac_reduced_tb__DOT____Vcellinp__u_kmac_reduced__msg_i[0U][0U] 
        = vlSelf->kmac_reduced_tb__DOT__msg[0U][0U];
    vlSelf->kmac_reduced_tb__DOT____Vcellinp__u_kmac_reduced__msg_i[0U][1U] 
        = vlSelf->kmac_reduced_tb__DOT__msg[0U][1U];
    vlSelf->kmac_reduced_tb__DOT____Vcellinp__u_kmac_reduced__msg_i[0U][2U] 
        = vlSelf->kmac_reduced_tb__DOT__msg[0U][2U];
    vlSelf->kmac_reduced_tb__DOT____Vcellinp__u_kmac_reduced__msg_i[0U][3U] 
        = vlSelf->kmac_reduced_tb__DOT__msg[0U][3U];
    vlSelf->kmac_reduced_tb__DOT____Vcellinp__u_kmac_reduced__msg_i[1U][0U] 
        = vlSelf->kmac_reduced_tb__DOT__msg[1U][0U];
    vlSelf->kmac_reduced_tb__DOT____Vcellinp__u_kmac_reduced__msg_i[1U][1U] 
        = vlSelf->kmac_reduced_tb__DOT__msg[1U][1U];
    vlSelf->kmac_reduced_tb__DOT____Vcellinp__u_kmac_reduced__msg_i[1U][2U] 
        = vlSelf->kmac_reduced_tb__DOT__msg[1U][2U];
    vlSelf->kmac_reduced_tb__DOT____Vcellinp__u_kmac_reduced__msg_i[1U][3U] 
        = vlSelf->kmac_reduced_tb__DOT__msg[1U][3U];
    if (vlSelf->rst_ni) {
        if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_update) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_expired = 0U;
        } else if (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_enable) 
                    & (0U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_value)))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_expired = 1U;
        }
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_expired = 0U;
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_prim_lc_sync__DOT__gen_flops__DOT__u_prim_flop_2sync__DOT__intq = 0xaU;
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_prim_lc_sync__DOT__gen_buffs__BRA__0__KET____DOT__lc_en_out 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_prim_lc_sync__DOT__lc_en;
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_prim_lc_sync__DOT__gen_buffs__BRA__1__KET____DOT__lc_en_out 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_prim_lc_sync__DOT__lc_en;
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__state_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__state_valid = 1U;
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__squeezing = 0U;
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__squeezing = 1U;
                        } else {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__squeezing = 0U;
                        }
                    } else {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__squeezing = 0U;
                    }
                } else {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__squeezing = 0U;
                }
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__squeezing = 0U;
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__squeezing = 0U;
        }
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__squeezing = 0U;
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3_state_error = 0U;
    if ((0x20U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3_state_error = 1U;
        } else if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3_state_error = 1U;
                } else if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3_state_error = 1U;
                }
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3_state_error = 1U;
            }
        } else if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3_state_error = 1U;
        } else if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3_state_error = 1U;
        } else if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw)))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3_state_error = 1U;
        }
    } else if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3_state_error = 1U;
        } else if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3_state_error = 1U;
        } else if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3_state_error = 1U;
        } else if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3_state_error = 1U;
        }
    } else if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3_state_error = 1U;
        } else if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3_state_error = 1U;
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3_state_error = 1U;
        }
    } else if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
        if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3_state_error = 1U;
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3_state_error = 1U;
        }
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3_state_error = 1U;
    }
    __Vfunc_sparse2logic__7__st = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw;
    {
        {
            {
                {
                    {
                        {
                            if ((0x20U & (IData)(__Vfunc_sparse2logic__7__st))) {
                                if ((0x10U & (IData)(__Vfunc_sparse2logic__7__st))) {
                                    vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 5U;
                                    goto __Vlabel1;
                                } else if ((8U & (IData)(__Vfunc_sparse2logic__7__st))) {
                                    if ((4U & (IData)(__Vfunc_sparse2logic__7__st))) {
                                        if ((2U & (IData)(__Vfunc_sparse2logic__7__st))) {
                                            vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 5U;
                                            goto __Vlabel1;
                                        } else if (
                                                   (1U 
                                                    & (IData)(__Vfunc_sparse2logic__7__st))) {
                                            vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 5U;
                                            goto __Vlabel1;
                                        } else {
                                            vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 0U;
                                            goto __Vlabel6;
                                        }
                                    } else {
                                        vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 5U;
                                        goto __Vlabel1;
                                    }
                                } else if ((4U & (IData)(__Vfunc_sparse2logic__7__st))) {
                                    vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 5U;
                                    goto __Vlabel1;
                                } else if ((2U & (IData)(__Vfunc_sparse2logic__7__st))) {
                                    vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 5U;
                                    goto __Vlabel1;
                                } else if ((1U & (IData)(__Vfunc_sparse2logic__7__st))) {
                                    vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 1U;
                                    goto __Vlabel5;
                                } else {
                                    vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 5U;
                                    goto __Vlabel1;
                                }
                            } else if ((0x10U & (IData)(__Vfunc_sparse2logic__7__st))) {
                                if ((8U & (IData)(__Vfunc_sparse2logic__7__st))) {
                                    vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 5U;
                                    goto __Vlabel1;
                                } else if ((4U & (IData)(__Vfunc_sparse2logic__7__st))) {
                                    vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 5U;
                                    goto __Vlabel1;
                                } else if ((2U & (IData)(__Vfunc_sparse2logic__7__st))) {
                                    vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 5U;
                                    goto __Vlabel1;
                                } else if ((1U & (IData)(__Vfunc_sparse2logic__7__st))) {
                                    vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 5U;
                                    goto __Vlabel1;
                                } else {
                                    vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 3U;
                                    goto __Vlabel3;
                                }
                            } else if ((8U & (IData)(__Vfunc_sparse2logic__7__st))) {
                                if ((4U & (IData)(__Vfunc_sparse2logic__7__st))) {
                                    vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 5U;
                                    goto __Vlabel1;
                                } else if ((2U & (IData)(__Vfunc_sparse2logic__7__st))) {
                                    if ((1U & (IData)(__Vfunc_sparse2logic__7__st))) {
                                        vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 2U;
                                        goto __Vlabel4;
                                    } else {
                                        vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 5U;
                                        goto __Vlabel1;
                                    }
                                } else {
                                    vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 5U;
                                    goto __Vlabel1;
                                }
                            } else if ((4U & (IData)(__Vfunc_sparse2logic__7__st))) {
                                if ((2U & (IData)(__Vfunc_sparse2logic__7__st))) {
                                    if ((1U & (IData)(__Vfunc_sparse2logic__7__st))) {
                                        vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 5U;
                                        goto __Vlabel1;
                                    } else {
                                        vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 4U;
                                        goto __Vlabel2;
                                    }
                                } else {
                                    vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 5U;
                                    goto __Vlabel1;
                                }
                            } else {
                                vlSelf->__Vfunc_sparse2logic__7__Vfuncout = 5U;
                                goto __Vlabel1;
                            }
                            __Vlabel6: ;
                        }
                        __Vlabel5: ;
                    }
                    __Vlabel4: ;
                }
                __Vlabel3: ;
            }
            __Vlabel2: ;
        }
        __Vlabel1: ;
    }
    vlSelf->kmac_reduced_tb__DOT__sha3_fsm = vlSelf->__Vfunc_sparse2logic__7__Vfuncout;
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__mux_sel = 2U;
    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                  >> 5U)))) {
        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__mux_sel = 5U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 0U;
    if ((0x40U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x20U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                    } else if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                        }
                    } else {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                    }
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = 0U;
                    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw)))) {
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = 3U;
                            }
                        }
                    }
                } else {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = 0U;
                }
            } else if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                } else if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                } else if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                }
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = 0U;
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = 4U;
                        }
                    }
                }
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = 0U;
            }
        } else {
            if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                } else if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                        }
                    } else {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                    }
                } else {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                }
            } else if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                    } else if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                    }
                } else {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                }
            } else if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
            } else if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                }
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
            }
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = 0U;
            if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw)))) {
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = 2U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                    } else if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                    }
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = 0U;
                    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = 2U;
                        }
                    }
                } else {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = 0U;
                }
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = 0U;
            }
        } else {
            if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
            } else if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                } else if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                }
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
            }
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = 0U;
            if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = 1U;
                        }
                    }
                }
            }
        }
    } else {
        if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                } else if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                } else if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                }
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
            }
        } else if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                    }
                } else {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                }
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
        }
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = 0U;
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__absorbed 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__absorbed_d)
            : 9U);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed 
        = ((2U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__mode_q))
            ? 0U : vlSelf->kmac_reduced_tb__DOT__entropy);
    VL_SHIFTR_WWI(128,128,32, __Vtemp_he7670b91__0, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_q, 
                  ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__gen_unpack_mode__DOT__ptr_q) 
                   << 6U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg[1U] 
        = (((QData)((IData)(__Vtemp_he7670b91__0[1U])) 
            << 0x20U) | (QData)((IData)(__Vtemp_he7670b91__0[0U])));
    VL_SHIFTR_WWI(128,128,32, __Vtemp_hdbd44ac6__0, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_q, 
                  ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__gen_unpack_mode__DOT__ptr_q) 
                   << 6U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg[0U] 
        = (((QData)((IData)(__Vtemp_hdbd44ac6__0[1U])) 
            << 0x20U) | (QData)((IData)(__Vtemp_hdbd44ac6__0[0U])));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_update = 0U;
    if ((0x20U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_update = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_update = 0U;
                    }
                }
            }
        }
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 0U;
        if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 1U;
            } else if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 1U;
            } else if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 1U;
            } else if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 1U;
            }
        } else if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 1U;
                } else if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw)))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 1U;
                }
            } else if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 1U;
                }
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 1U;
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 1U;
        }
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__phase_sel = 9U;
        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__phase_sel = 9U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__phase_sel = 6U;
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_update = 1U;
                    }
                }
            }
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 0U;
            if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 1U;
                    }
                } else {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 1U;
                }
            } else if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 1U;
            } else if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 1U;
            }
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__phase_sel = 9U;
            if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__phase_sel = 6U;
                    }
                }
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 0U;
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 1U;
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__phase_sel = 9U;
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_update = 1U;
                    }
                }
            }
        }
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 0U;
        if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 1U;
        } else if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 1U;
            } else if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 1U;
            }
        } else if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 1U;
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_round_state_error = 1U;
        }
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__phase_sel = 9U;
        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__phase_sel = 6U;
                    }
                }
            }
        }
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_consumed = 0U;
    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_consumed = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_msg_unpacker_share1__rvalid_o 
        = ((0U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__depth_q)) 
           & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__clr_q)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_msg_unpacker_share1__wready_o 
        = ((0U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__depth_q)) 
           & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__clr_q)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_msg_unpacker_share0__rvalid_o 
        = ((0U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__depth_q)) 
           & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__clr_q)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_msg_unpacker_share0__wready_o 
        = ((0U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__depth_q)) 
           & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__clr_q)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__st_d)
            : 0x278U);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted = 0ULL;
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0xfffffffffffffff8ULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | (IData)((IData)(((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                     >> 0x14U)) | (
                                                   (2U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                                       >> 0x11U)) 
                                                   | (1U 
                                                      & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                                         >> 0x18U)))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0xffffffffffffffc7ULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | ((QData)((IData)(((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                      >> 5U)) | ((2U 
                                                  & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                                     >> 9U)) 
                                                 | (1U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                                       >> 0x1eU)))))) 
              << 3U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0xfffffffffffffe3fULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | ((QData)((IData)(((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                      >> 0x1dU)) | 
                               ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                       >> 0xbU)) | 
                                (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                       >> 0x1aU)))))) 
              << 6U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0xfffffffffffff1ffULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | ((QData)((IData)(((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                      >> 6U)) | ((2U 
                                                  & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                                     >> 0x12U)) 
                                                 | (1U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                                       >> 0x10U)))))) 
              << 9U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0xffffffffffff8fffULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | ((QData)((IData)(((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                      >> 0x16U)) | 
                               ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                       >> 9U)) | (1U 
                                                  & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                                     >> 5U)))))) 
              << 0xcU));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0xfffffffffffc7fffULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | ((QData)((IData)(((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                      >> 0x1dU)) | 
                               ((2U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U]) 
                                | (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                         >> 3U)))))) 
              << 0xfU));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0xffffffffffe3ffffULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | ((QData)((IData)(((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                      >> 0xdU)) | (
                                                   (2U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                                       >> 7U)) 
                                                   | (1U 
                                                      & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                                         >> 0x1dU)))))) 
              << 0x12U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0xffffffffff1fffffULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | ((QData)((IData)(((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                      << 2U)) | ((2U 
                                                  & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                                     >> 0x16U)) 
                                                 | (1U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                                       >> 6U)))))) 
              << 0x15U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0xfffffffff8ffffffULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | ((QData)((IData)(((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                      >> 0x13U)) | 
                               ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                       >> 0xfU)) | 
                                (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                       >> 0x14U)))))) 
              << 0x18U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0xffffffffc7ffffffULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | ((QData)((IData)(((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                      >> 9U)) | ((2U 
                                                  & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                                     >> 0x15U)) 
                                                 | (1U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                                       >> 0x17U)))))) 
              << 0x1bU));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0xfffffffe3fffffffULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | ((QData)((IData)(((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                      >> 0x17U)) | 
                               ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                       >> 3U)) | (1U 
                                                  & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                                     >> 0x19U)))))) 
              << 0x1eU));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0xfffffff1ffffffffULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | ((QData)((IData)(((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                      >> 0x19U)) | 
                               ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                       >> 0x19U)) | 
                                (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                       >> 0x11U)))))) 
              << 0x21U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0xffffff8fffffffffULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | ((QData)((IData)(((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                      >> 7U)) | ((2U 
                                                  & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                                     >> 0x1dU)) 
                                                 | (1U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                                       >> 0xdU)))))) 
              << 0x24U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0xfffffc7fffffffffULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | ((QData)((IData)(((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                      >> 0xbU)) | (
                                                   (2U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                                       >> 0x14U)) 
                                                   | (1U 
                                                      & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                                         >> 9U)))))) 
              << 0x27U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0xffffe3ffffffffffULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | ((QData)((IData)(((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                      << 1U)) | ((2U 
                                                  & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                                       >> 0xcU)))))) 
              << 0x2aU));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0xffff1fffffffffffULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | ((QData)((IData)(((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                      >> 0x1aU)) | 
                               ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                       >> 0x10U)) | 
                                (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                       >> 3U)))))) 
              << 0x2dU));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0xfff8ffffffffffffULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | ((QData)((IData)(((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                      >> 3U)) | ((2U 
                                                  & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                                     >> 0x1cU)) 
                                                 | (1U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                                       >> 0x12U)))))) 
              << 0x30U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0xffc7ffffffffffffULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | ((QData)((IData)(((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                      >> 0xcU)) | (
                                                   (2U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                                       >> 0x1bU)) 
                                                   | (1U 
                                                      & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                                         >> 2U)))))) 
              << 0x33U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0xfe3fffffffffffffULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | ((QData)((IData)(((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                      >> 0x19U)) | 
                               ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                       >> 0x12U)) | 
                                (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                       >> 0xfU)))))) 
              << 0x36U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0xf1ffffffffffffffULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | ((QData)((IData)(((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                      >> 4U)) | ((2U 
                                                  & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                                     >> 3U)) 
                                                 | (1U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                                       >> 7U)))))) 
              << 0x39U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0x8fffffffffffffffULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | ((QData)((IData)(((4U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U]) 
                               | ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                         >> 0xaU)) 
                                  | (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U] 
                                           >> 0x14U)))))) 
              << 0x3cU));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted 
        = ((0x7fffffffffffffffULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted) 
           | ((QData)((IData)((1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U] 
                                     >> 0xeU)))) << 0x3fU));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[0U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[0U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[1U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[1U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[2U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[2U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[3U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[3U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[4U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[4U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[5U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[5U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__gen_update_and_output_bivium__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x320U > vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__gen_update_and_output_bivium__DOT__unnamedblk1__DOT__i)) {
        vlSelf->__Vfunc_bivium_generate_key_stream__44__state[0U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[0U];
        vlSelf->__Vfunc_bivium_generate_key_stream__44__state[1U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[1U];
        vlSelf->__Vfunc_bivium_generate_key_stream__44__state[2U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[2U];
        vlSelf->__Vfunc_bivium_generate_key_stream__44__state[3U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[3U];
        vlSelf->__Vfunc_bivium_generate_key_stream__44__state[4U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[4U];
        vlSelf->__Vfunc_bivium_generate_key_stream__44__state[5U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[5U];
        vlSelf->__Vfunc_bivium_generate_key_stream__44__add_65_92 
            = (1U & VL_REDXOR_32((0x10000002U & vlSelf->__Vfunc_bivium_generate_key_stream__44__state[2U])));
        vlSelf->__Vfunc_bivium_generate_key_stream__44__add_161_176 
            = (1U & VL_REDXOR_32((0x10002U & vlSelf->__Vfunc_bivium_generate_key_stream__44__state[5U])));
        vlSelf->__Vfunc_bivium_generate_key_stream__44__key 
            = ((IData)(vlSelf->__Vfunc_bivium_generate_key_stream__44__add_161_176) 
               ^ (IData)(vlSelf->__Vfunc_bivium_generate_key_stream__44__add_65_92));
        vlSelf->__Vfunc_bivium_generate_key_stream__44__Vfuncout 
            = vlSelf->__Vfunc_bivium_generate_key_stream__44__key;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT____Vlvbound_h8135fa8c__0 
            = vlSelf->__Vfunc_bivium_generate_key_stream__44__Vfuncout;
        if (VL_LIKELY((0x31fU >= (0x3ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__gen_update_and_output_bivium__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[(0x1fU 
                                                                                & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__gen_update_and_output_bivium__DOT__unnamedblk1__DOT__i 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__gen_update_and_output_bivium__DOT__unnamedblk1__DOT__i))) 
                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[
                    (0x1fU & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__gen_update_and_output_bivium__DOT__unnamedblk1__DOT__i 
                              >> 5U))]) | ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT____Vlvbound_h8135fa8c__0) 
                                           << (0x1fU 
                                               & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__gen_update_and_output_bivium__DOT__unnamedblk1__DOT__i)));
        }
        vlSelf->__Vfunc_bivium_update_state__45__in[0U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[0U];
        vlSelf->__Vfunc_bivium_update_state__45__in[1U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[1U];
        vlSelf->__Vfunc_bivium_update_state__45__in[2U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[2U];
        vlSelf->__Vfunc_bivium_update_state__45__in[3U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[3U];
        vlSelf->__Vfunc_bivium_update_state__45__in[4U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[4U];
        vlSelf->__Vfunc_bivium_update_state__45__in[5U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[5U];
        vlSelf->__Vfunc_bivium_update_state__45__mul_90_91 
            = (IData)((0xc000000U == (0xc000000U & 
                                      vlSelf->__Vfunc_bivium_update_state__45__in[2U])));
        vlSelf->__Vfunc_bivium_update_state__45__add_65_92 
            = (1U & VL_REDXOR_32((0x10000002U & vlSelf->__Vfunc_bivium_update_state__45__in[2U])));
        vlSelf->__Vfunc_bivium_update_state__45__mul_174_175 
            = (IData)((0xc000U == (0xc000U & vlSelf->__Vfunc_bivium_update_state__45__in[5U])));
        vlSelf->__Vfunc_bivium_update_state__45__add_161_176 
            = (1U & VL_REDXOR_32((0x10002U & vlSelf->__Vfunc_bivium_update_state__45__in[5U])));
        vlSelf->__Vfunc_bivium_update_state__45__out[0U] 
            = ((0xfffffffeU & vlSelf->__Vfunc_bivium_update_state__45__out[0U]) 
               | (1U & ((vlSelf->__Vfunc_bivium_update_state__45__in[2U] 
                         >> 4U) ^ ((IData)(vlSelf->__Vfunc_bivium_update_state__45__mul_174_175) 
                                   ^ (IData)(vlSelf->__Vfunc_bivium_update_state__45__add_161_176)))));
        vlSelf->__Vfunc_bivium_update_state__45__out[2U] 
            = ((0xdfffffffU & vlSelf->__Vfunc_bivium_update_state__45__out[2U]) 
               | (0x20000000U & (((0xe0000000U & (vlSelf->__Vfunc_bivium_update_state__45__in[5U] 
                                                  << 0x13U)) 
                                  ^ ((IData)(vlSelf->__Vfunc_bivium_update_state__45__add_65_92) 
                                     << 0x1dU)) ^ ((IData)(vlSelf->__Vfunc_bivium_update_state__45__mul_90_91) 
                                                   << 0x1dU))));
        vlSelf->__Vfunc_bivium_update_state__45__out[0U] 
            = ((1U & vlSelf->__Vfunc_bivium_update_state__45__out[0U]) 
               | (vlSelf->__Vfunc_bivium_update_state__45__in[0U] 
                  << 1U));
        vlSelf->__Vfunc_bivium_update_state__45__out[1U] 
            = ((vlSelf->__Vfunc_bivium_update_state__45__in[0U] 
                >> 0x1fU) | (vlSelf->__Vfunc_bivium_update_state__45__in[1U] 
                             << 1U));
        vlSelf->__Vfunc_bivium_update_state__45__out[2U] 
            = ((0xe0000000U & vlSelf->__Vfunc_bivium_update_state__45__out[2U]) 
               | ((vlSelf->__Vfunc_bivium_update_state__45__in[1U] 
                   >> 0x1fU) | (0x1ffffffeU & (vlSelf->__Vfunc_bivium_update_state__45__in[2U] 
                                               << 1U))));
        vlSelf->__Vfunc_bivium_update_state__45__out[2U] 
            = ((0x3fffffffU & vlSelf->__Vfunc_bivium_update_state__45__out[2U]) 
               | (0xc0000000U & (vlSelf->__Vfunc_bivium_update_state__45__in[2U] 
                                 << 1U)));
        vlSelf->__Vfunc_bivium_update_state__45__out[3U] 
            = (((0x3ffffffeU & (vlSelf->__Vfunc_bivium_update_state__45__in[3U] 
                                << 1U)) | (vlSelf->__Vfunc_bivium_update_state__45__in[2U] 
                                           >> 0x1fU)) 
               | (0xc0000000U & (vlSelf->__Vfunc_bivium_update_state__45__in[3U] 
                                 << 1U)));
        vlSelf->__Vfunc_bivium_update_state__45__out[4U] 
            = (((0x3ffffffeU & (vlSelf->__Vfunc_bivium_update_state__45__in[4U] 
                                << 1U)) | (vlSelf->__Vfunc_bivium_update_state__45__in[3U] 
                                           >> 0x1fU)) 
               | (0xc0000000U & (vlSelf->__Vfunc_bivium_update_state__45__in[4U] 
                                 << 1U)));
        vlSelf->__Vfunc_bivium_update_state__45__out[5U] 
            = (0x1ffffU & ((0x3ffffffeU & (vlSelf->__Vfunc_bivium_update_state__45__in[5U] 
                                           << 1U)) 
                           | (vlSelf->__Vfunc_bivium_update_state__45__in[4U] 
                              >> 0x1fU)));
        vlSelf->__Vfunc_bivium_update_state__45__Vfuncout[0U] 
            = vlSelf->__Vfunc_bivium_update_state__45__out[0U];
        vlSelf->__Vfunc_bivium_update_state__45__Vfuncout[1U] 
            = vlSelf->__Vfunc_bivium_update_state__45__out[1U];
        vlSelf->__Vfunc_bivium_update_state__45__Vfuncout[2U] 
            = vlSelf->__Vfunc_bivium_update_state__45__out[2U];
        vlSelf->__Vfunc_bivium_update_state__45__Vfuncout[3U] 
            = vlSelf->__Vfunc_bivium_update_state__45__out[3U];
        vlSelf->__Vfunc_bivium_update_state__45__Vfuncout[4U] 
            = vlSelf->__Vfunc_bivium_update_state__45__out[4U];
        vlSelf->__Vfunc_bivium_update_state__45__Vfuncout[5U] 
            = vlSelf->__Vfunc_bivium_update_state__45__out[5U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[0U] 
            = vlSelf->__Vfunc_bivium_update_state__45__Vfuncout[0U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[1U] 
            = vlSelf->__Vfunc_bivium_update_state__45__Vfuncout[1U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[2U] 
            = vlSelf->__Vfunc_bivium_update_state__45__Vfuncout[2U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[3U] 
            = vlSelf->__Vfunc_bivium_update_state__45__Vfuncout[3U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[4U] 
            = vlSelf->__Vfunc_bivium_update_state__45__Vfuncout[4U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[5U] 
            = vlSelf->__Vfunc_bivium_update_state__45__Vfuncout[5U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__gen_update_and_output_bivium__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__gen_update_and_output_bivium__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0x1fU] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0x1fU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0x1eU] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0x1eU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0x1dU] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0x1dU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0x1cU] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0x1cU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0x1bU] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0x1bU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0x1aU] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0x1aU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0x19U] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0x19U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0x18U] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0x18U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0x17U] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0x17U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0x16U] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0x16U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0x15U] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0x15U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0x14U] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0x14U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0x13U] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0x13U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0x12U] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0x12U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0x11U] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0x11U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0x10U] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0x10U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0xfU] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0xfU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0xeU] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0xeU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0xdU] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0xdU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0xcU] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0xcU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0xbU] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0xbU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0xaU] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0xaU];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[9U] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [9U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[8U] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [8U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[7U] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [7U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[6U] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [6U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[5U] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [5U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[4U] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [4U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[3U] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [3U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[2U] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [2U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[1U] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [1U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes[0U] 
        = vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_q
        [0U];
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[7U] 
        = ((0xffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[7U]) 
           | (0xffffff00U & ((vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                              [0U] << 0x18U) | ((vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                                 [1U] 
                                                 << 0x10U) 
                                                | (vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                                   [2U] 
                                                   << 8U)))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[6U] 
        = ((0xffffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[6U]) 
           | (0xffff0000U & ((vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                              [4U] << 0x18U) | (vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                                [5U] 
                                                << 0x10U))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[7U] 
        = ((0xffffff00U & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[7U]) 
           | (0xffffU & ((0xffffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                          [3U]) | ((0xffffU & (vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                               [4U] 
                                               >> 8U)) 
                                   | (vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                      [5U] >> 0x10U)))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[5U] 
        = ((0xffffffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[5U]) 
           | (vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
              [8U] << 0x18U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[6U] 
        = ((0xffff0000U & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[6U]) 
           | (0xffffffU & ((0xffff00U & (vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                         [6U] << 8U)) 
                           | ((0xffffffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                               [7U]) | (vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                        [8U] >> 8U)))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[5U] 
        = ((0xff000000U & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[5U]) 
           | ((vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
               [9U] << 0x10U) | ((vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                  [0xaU] << 8U) | vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                 [0xbU])));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[4U] 
        = ((0xffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[4U]) 
           | (0xffffff00U & ((vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                              [0xcU] << 0x18U) | ((
                                                   vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                                   [0xdU] 
                                                   << 0x10U) 
                                                  | (vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                                     [0xeU] 
                                                     << 8U)))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[3U] 
        = ((0xffffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[3U]) 
           | (0xffff0000U & ((vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                              [0x10U] << 0x18U) | (
                                                   vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                                   [0x11U] 
                                                   << 0x10U))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[4U] 
        = ((0xffffff00U & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[4U]) 
           | (0xffffU & ((0xffffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                          [0xfU]) | ((0xffffU & (vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                                 [0x10U] 
                                                 >> 8U)) 
                                     | (vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                        [0x11U] >> 0x10U)))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[2U] 
        = ((0xffffffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[2U]) 
           | (vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
              [0x14U] << 0x18U));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[3U] 
        = ((0xffff0000U & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[3U]) 
           | (0xffffffU & ((0xffff00U & (vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                         [0x12U] << 8U)) 
                           | ((0xffffffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                               [0x13U]) | (vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                           [0x14U] 
                                           >> 8U)))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[2U] 
        = ((0xff000000U & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[2U]) 
           | ((vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
               [0x15U] << 0x10U) | ((vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                     [0x16U] << 8U) 
                                    | vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                    [0x17U])));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[1U] 
        = ((0xffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[1U]) 
           | (0xffffff00U & ((vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                              [0x18U] << 0x18U) | (
                                                   (vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                                    [0x19U] 
                                                    << 0x10U) 
                                                   | (vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                                      [0x1aU] 
                                                      << 8U)))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[0U] 
        = ((0xffffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[0U]) 
           | (0xffff0000U & ((vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                              [0x1cU] << 0x18U) | (
                                                   vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                                   [0x1dU] 
                                                   << 0x10U))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[1U] 
        = ((0xffffff00U & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[1U]) 
           | (0xffffU & ((0xffffU & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                          [0x1bU]) | ((0xffffU & (vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                                  [0x1cU] 
                                                  >> 8U)) 
                                      | (vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
                                         [0x1dU] >> 0x10U)))));
    vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[0U] 
        = ((0xffff0000U & vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[0U]) 
           | ((vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
               [0x1eU] << 8U) | vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes
              [0x1fU]));
    __Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__Vfuncout[0U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[0U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__Vfuncout[1U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[1U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__Vfuncout[2U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[2U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__Vfuncout[3U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[3U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__Vfuncout[4U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[4U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__Vfuncout[5U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[5U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__Vfuncout[6U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[6U];
    __Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__Vfuncout[7U] 
        = vlSelf->__Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__bytes_packed[7U];
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_packed[0U] 
        = __Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__Vfuncout[0U];
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_packed[1U] 
        = __Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__Vfuncout[1U];
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_packed[2U] 
        = __Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__Vfuncout[2U];
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_packed[3U] 
        = __Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__Vfuncout[3U];
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_packed[4U] 
        = __Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__Vfuncout[4U];
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_packed[5U] 
        = __Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__Vfuncout[5U];
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_packed[6U] 
        = __Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__Vfuncout[6U];
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_packed[7U] 
        = __Vfunc_kmac_reduced_tb__DOT__digest_bytes_to_bytes_packed__5__Vfuncout[7U];
    if (vlSelf->rst_ni) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__err_q 
            = (0x3ffU != (0x7ffU & ((0x3ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__cnt_q) 
                                    + (0x3ffU & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__cnt_q 
                                                 >> 0xaU)))));
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__err_q 
            = (0x1fU != (0x3fU & ((0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)) 
                                  + (0x1fU & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q) 
                                              >> 5U)))));
        vlSelf->kmac_reduced_tb__DOT__count_q = vlSelf->kmac_reduced_tb__DOT__count_d;
        vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q 
            = vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_d;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__err_q 
            = (0x1fU != (0x3fU & ((0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_q)) 
                                  + (0x1fU & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_q) 
                                              >> 5U)))));
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__err_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__err_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__count_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__err_q = 0U;
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[0U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[0U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[1U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[1U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[2U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[2U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[3U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[3U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[4U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[4U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[5U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[5U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[6U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[6U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[7U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[7U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[8U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[8U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[9U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[9U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0xfU] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[0U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0x10U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[1U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0x11U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[2U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0x12U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[3U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0x13U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[4U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0x14U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[0U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0x15U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[1U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0x16U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[2U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0x17U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[3U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0x18U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[4U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[0U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[0U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[1U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[1U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[2U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[2U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[3U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[3U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[4U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[4U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[5U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[5U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[6U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[6U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[7U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[7U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[8U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[8U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[9U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[9U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[0U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[0U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[1U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[1U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[2U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[2U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[3U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[3U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[4U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[4U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[5U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[5U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[6U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[6U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[7U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[7U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[8U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[8U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[9U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[9U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[0U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[0U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[1U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[1U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[2U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[2U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[3U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[3U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[4U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[4U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[5U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[5U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[6U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[6U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[7U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[7U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[8U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[8U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[9U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[9U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[0U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[1U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[1U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[2U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[2U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[3U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[3U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[4U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[4U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[5U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[0U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[6U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[1U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[7U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[2U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[8U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[3U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[9U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[4U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0xaU] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[0U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0xbU] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[1U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0xcU] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[2U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0xdU] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[3U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0xeU] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[4U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[0U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[0U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[1U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[1U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[2U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[2U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[3U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[3U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[4U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[4U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[5U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[5U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[6U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[6U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[7U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[7U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[8U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[8U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__gen_inner_domain_regs__DOT__u_prim_flop_tab01__q_o[9U] 
           ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_flop_t01__q_o[9U]);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_value 
        = __Vdly__kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_value;
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_prim_lc_sync__lc_en_o 
        = (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_prim_lc_sync__DOT__gen_buffs__BRA__1__KET____DOT__lc_en_out) 
            << 4U) | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_prim_lc_sync__DOT__gen_buffs__BRA__0__KET____DOT__lc_en_out));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__absorbed_d = 9U;
    if ((0x40U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                                if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_complete) {
                                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__absorbed_d = 6U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_valid_shares 
        = ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_valid_shares)) 
           | ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_msg_unpacker_share1__rvalid_o) 
              << 1U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_ready_shares 
        = ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_ready_shares)) 
           | ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_msg_unpacker_share1__wready_o) 
              << 1U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_valid_shares 
        = ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_valid_shares)) 
           | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_msg_unpacker_share0__rvalid_o));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_ready_shares 
        = ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_ready_shares)) 
           | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_msg_unpacker_share0__wready_o));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_masked[0U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg
           [0U] ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_masked[1U] 
        = (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg
           [1U] ^ vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_permuted);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U] 
        = ((0xfffffff8U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U]) 
           | ((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                     >> 0x1dU)) | ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                          >> 0xdU)) 
                                   | (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                            >> 0xdU)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U] 
        = ((0xffffffc7U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                       >> 3U)) | ((0x10U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                                      << 4U)) 
                                                  | (8U 
                                                     & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U])))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U] 
        = ((0xfffffe3fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                        >> 0x16U)) 
                             | ((0x80U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                          << 3U)) | 
                                (0x40U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                          >> 0xdU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U] 
        = ((0xfffff1ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                        << 1U)) | (
                                                   (0x400U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                                       >> 0xcU)) 
                                                   | (0x200U 
                                                      & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                                         >> 7U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U] 
        = ((0xffff8fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                         >> 0xfU)) 
                             | ((0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                            >> 7U)) 
                                | (0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                              >> 0x12U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U] 
        = ((0xfffc7fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                          << 0x11U)) 
                             | ((0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                             << 0xcU)) 
                                | (0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                              >> 8U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U] 
        = ((0xffc3ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U]) 
           | (0xfffc0000U & ((0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                           << 6U)) 
                             | ((0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                              << 9U)) 
                                | (0xc0000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                               << 1U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U] 
        = ((0xfe3fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                            << 1U)) 
                             | ((0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                              << 0x11U)) 
                                | (0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                                >> 3U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U] 
        = ((0xf1ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                            << 0xaU)) 
                             | ((0x4000000U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U]) 
                                | (0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                                 << 0x14U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U] 
        = ((0x8fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                             << 0x10U)) 
                             | ((0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                                << 0xfU)) 
                                | (0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                                  >> 3U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U] 
        = ((0x7fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0U]) 
           | (0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                             << 0xaU)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U] 
        = ((0xfffffffcU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U]) 
           | (0x7fffffffU & ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                    >> 0xfU)) | (1U 
                                                 & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                                    >> 0x11U)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U] 
        = ((0xffffffe3U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                       >> 0x19U)) | 
                             ((8U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                     >> 0x15U)) | (4U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                                      >> 0x15U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U] 
        = ((0xffffff1fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                       >> 3U)) | ((0x40U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                                      >> 0x13U)) 
                                                  | (0x20U 
                                                     & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                                        >> 0x11U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U] 
        = ((0xfffff8ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                        >> 0x11U)) 
                             | ((0x200U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                           >> 3U)) 
                                | (0x100U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                             << 4U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U] 
        = ((0xffffc7ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                         >> 0xbU)) 
                             | ((0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                            << 6U)) 
                                | (0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                             << 2U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U] 
        = ((0xfffe3fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                          >> 2U)) | 
                             ((0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                          >> 0xaU)) 
                              | (0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                            >> 0xdU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U] 
        = ((0xfff1ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                          << 8U)) | 
                             ((0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                           << 0xcU)) 
                              | (0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                             << 6U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U] 
        = ((0xff8fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                           >> 5U)) 
                             | ((0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                              << 2U)) 
                                | (0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                                << 5U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U] 
        = ((0xfc7fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                            << 8U)) 
                             | ((0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                               >> 5U)) 
                                | (0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                                << 3U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U] 
        = ((0xe3ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                             << 0x1bU)) 
                             | ((0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                               << 0x1bU)) 
                                | (0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                                 << 6U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U] 
        = ((0x1fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[1U]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                             << 0xdU)) 
                             | ((0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                                << 3U)) 
                                | (0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                                  << 0x14U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U] 
        = ((0xfffffff8U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U]) 
           | ((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                     >> 6U)) | ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                       >> 0x17U)) | 
                                (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                       >> 4U)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U] 
        = ((0xffffffc7U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                       >> 4U)) | ((0x10U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                                      >> 9U)) 
                                                  | (8U 
                                                     & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                                        >> 5U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U] 
        = ((0xfffffe3fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                        >> 5U)) | (
                                                   (0x80U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                                       >> 1U)) 
                                                   | (0x40U 
                                                      & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                                         >> 0xcU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U] 
        = ((0xfffff1ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                        >> 9U)) | (
                                                   (0x400U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                                       >> 3U)) 
                                                   | (0x200U 
                                                      & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                                         >> 1U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U] 
        = ((0xffff8fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                         << 8U)) | 
                             ((0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                          << 4U)) | 
                              (0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                          << 1U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U] 
        = ((0xfffc7fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                          << 9U)) | 
                             ((0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                           >> 1U)) 
                              | (0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                            >> 9U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U] 
        = ((0xffe3ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                           << 2U)) 
                             | ((0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                             << 0x10U)) 
                                | (0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                               >> 2U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U] 
        = ((0xff1fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                           << 0xaU)) 
                             | ((0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                              >> 7U)) 
                                | (0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                                >> 5U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U] 
        = ((0xf8ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                            << 0x11U)) 
                             | ((0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                               << 0x19U)) 
                                | (0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                                 >> 3U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U] 
        = ((0xc7ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                             >> 1U)) 
                             | ((0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                                << 0x17U)) 
                                | (0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                                 << 1U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U] 
        = ((0x3fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[2U]) 
           | (0xc0000000U & ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                              << 0x1fU) | (0x40000000U 
                                           & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                              << 4U)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U] 
        = ((0xfffffffeU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U]) 
           | (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                    >> 0x1dU)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U] 
        = ((0xfffffff1U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U]) 
           | (0xfffffffeU & ((8U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                    << 2U)) | ((4U 
                                                & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                                   << 2U)) 
                                               | (2U 
                                                  & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                                     >> 0x1aU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U] 
        = ((0xffffff8fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                       << 3U)) | ((0x20U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                                      >> 1U)) 
                                                  | (0x10U 
                                                     & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                                        >> 1U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U] 
        = ((0xfffffc7fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                        >> 2U)) | (
                                                   (0x100U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                                       >> 0x11U)) 
                                                   | (0x80U 
                                                      & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                                         >> 5U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U] 
        = ((0xffffe3ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                         << 1U)) | 
                             ((0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                         >> 0xaU)) 
                              | (0x400U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                           >> 0xdU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U] 
        = ((0xffff1fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                         << 6U)) | 
                             ((0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                          >> 8U)) | 
                              (0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                          << 9U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U] 
        = ((0xfff8ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                          >> 9U)) | 
                             ((0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                           >> 0xeU)) 
                              | (0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                             >> 8U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U] 
        = ((0xffc7ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                           << 4U)) 
                             | ((0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                              << 0x12U)) 
                                | (0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                               >> 5U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U] 
        = ((0xfe3fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                            << 0x13U)) 
                             | ((0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                              << 1U)) 
                                | (0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                                << 0x16U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U] 
        = ((0xf1ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                            << 0xdU)) 
                             | ((0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                               << 0x15U)) 
                                | (0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                                 << 0xdU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U] 
        = ((0x8fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                             << 4U)) 
                             | ((0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                                << 0x19U)) 
                                | (0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                                  >> 2U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U] 
        = ((0x7fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[3U]) 
           | (0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                             << 5U)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U] 
        = ((0xfffffffcU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U]) 
           | (0x7fffffffU & ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                    >> 0x1dU)) | (1U 
                                                  & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                                     >> 2U)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U] 
        = ((0xffffffe3U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                       >> 0x1bU)) | 
                             ((8U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                     << 1U)) | (4U 
                                                & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                                   >> 0xaU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U] 
        = ((0xffffff1fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U]) 
           | (0xffffffe0U & ((0x80U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U]) 
                             | ((0x40U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                          >> 8U)) | 
                                (0x20U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                          >> 0x19U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U] 
        = ((0xfffff8ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                        << 3U)) | (
                                                   (0x200U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                                       >> 8U)) 
                                                   | (0x100U 
                                                      & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                                         << 1U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U] 
        = ((0xffffc7ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                         >> 5U)) | 
                             ((0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                          << 1U)) | 
                              (0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                         >> 0x12U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U] 
        = ((0xfffe3fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                          >> 0xaU)) 
                             | ((0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                            >> 0x10U)) 
                                | (0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                              << 0xaU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U] 
        = ((0xfff1ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                          >> 7U)) | 
                             ((0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                           >> 1U)) 
                              | (0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                             >> 6U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U] 
        = ((0xff8fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                           << 1U)) 
                             | ((0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                              << 3U)) 
                                | (0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                                << 0x12U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U] 
        = ((0xfc7fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                            << 3U)) 
                             | ((0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                               << 0x11U)) 
                                | (0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                                >> 4U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U] 
        = ((0xe3ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                             << 8U)) 
                             | ((0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                               << 0xeU)) 
                                | (0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                                 << 0x18U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U] 
        = ((0x1fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[4U]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                             << 0xfU)) 
                             | ((0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                                << 0xaU)) 
                                | (0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                                  << 0xeU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U] 
        = ((0xfffffff8U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U]) 
           | ((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                     >> 0x19U)) | ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                          >> 7U)) | 
                                   (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                          >> 9U)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U] 
        = ((0xffffffc7U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                       << 2U)) | ((0x10U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                                      >> 0xeU)) 
                                                  | (8U 
                                                     & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                                        >> 0x10U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U] 
        = ((0xfffffe3fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                        >> 0xeU)) | 
                             ((0x80U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                        >> 0xbU)) | 
                              (0x40U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                        >> 0x13U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U] 
        = ((0xfffff1ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                        >> 0x14U)) 
                             | ((0x400U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                           >> 0xfU)) 
                                | (0x200U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                             << 6U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U] 
        = ((0xffff8fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                         >> 4U)) | 
                             ((0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                          >> 0x12U)) 
                              | (0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                            << 3U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U] 
        = ((0xfffc7fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                          >> 0xdU)) 
                             | ((0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                             >> 0xaU)) 
                                | (0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                              << 0xfU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U] 
        = ((0xffe3ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                           << 0xeU)) 
                             | ((0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                             << 0xaU)) 
                                | (0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                               >> 3U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U] 
        = ((0xff1fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                           << 0xeU)) 
                             | ((0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                              << 0x15U)) 
                                | (0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                                << 0xaU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U] 
        = ((0xf8ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                            >> 2U)) 
                             | ((0x2000000U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU]) 
                                | (0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                                 << 0xaU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U] 
        = ((0xc7ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                             << 0xcU)) 
                             | ((0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                                << 0x1bU)) 
                                | (0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                                 >> 4U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U] 
        = ((0x3fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[5U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                             << 0x1eU)) 
                             | (0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                               << 0xaU)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U] 
        = ((0xfffffffeU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U]) 
           | (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                    >> 0x15U)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U] 
        = ((0xfffffff1U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U]) 
           | (0xfffffffeU & ((8U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                    << 3U)) | ((4U 
                                                & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                                   >> 0x18U)) 
                                               | (2U 
                                                  & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                                     >> 0xfU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U] 
        = ((0xffffff8fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U]) 
           | (0xfffffff0U & ((0x40U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U]) 
                             | ((0x20U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                          >> 0x10U)) 
                                | (0x10U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                            >> 0xfU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U] 
        = ((0xfffffc7fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                        >> 8U)) | (
                                                   (0x100U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                                       >> 0x16U)) 
                                                   | (0x80U 
                                                      & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                                         >> 0x12U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U] 
        = ((0xffffe3ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                         << 3U)) | 
                             ((0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                         << 9U)) | 
                              (0x400U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                         >> 0x12U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U] 
        = ((0xffff1fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                         << 0xdU)) 
                             | ((0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                            << 0xaU)) 
                                | (0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                              << 8U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U] 
        = ((0xfff8ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                          << 0x11U)) 
                             | ((0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                             << 0xaU)) 
                                | (0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                               >> 6U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U] 
        = ((0xffc7ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                           << 0x15U)) 
                             | ((0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                              << 6U)) 
                                | (0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                               << 3U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U] 
        = ((0xfe3fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                            << 0x17U)) 
                             | ((0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                              << 0xdU)) 
                                | (0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                                << 7U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U] 
        = ((0xf1ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                            << 1U)) 
                             | ((0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                               << 3U)) 
                                | (0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                                 << 3U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U] 
        = ((0x8fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                             << 0xaU)) 
                             | ((0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                                << 1U)) 
                                | (0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                                  << 0x17U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U] 
        = ((0x7fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[6U]) 
           | (0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                             << 0x1cU)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U] 
        = ((0xfffffffcU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U]) 
           | (0x7fffffffU & ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                    >> 0x1bU)) | (1U 
                                                  & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                                     >> 0xeU)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U] 
        = ((0xffffffe3U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U]) 
           | (0xfffffffcU & ((0x10U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU]) 
                             | ((8U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                       >> 0x1cU)) | 
                                (4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                       >> 0x15U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U] 
        = ((0xffffff1fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                       >> 1U)) | ((0x40U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                                      >> 2U)) 
                                                  | (0x20U 
                                                     & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                                        >> 1U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U] 
        = ((0xfffff8ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                        << 4U)) | (
                                                   (0x200U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                                       >> 0x16U)) 
                                                   | (0x100U 
                                                      & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U])))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U] 
        = ((0xffffc7ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                         >> 3U)) | 
                             ((0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                          << 5U)) | 
                              (0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                         << 1U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U] 
        = ((0xfffe3fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                          >> 0xaU)) 
                             | ((0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                            >> 6U)) 
                                | (0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                              << 0xcU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U] 
        = ((0xfff1ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                          << 9U)) | 
                             ((0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                           >> 0xcU)) 
                              | (0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                             << 6U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U] 
        = ((0xff8fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                           >> 2U)) 
                             | ((0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                              >> 3U)) 
                                | (0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                                << 0x14U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U] 
        = ((0xfc7fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                            >> 4U)) 
                             | ((0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                               << 0x14U)) 
                                | (0x800000U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U])))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U] 
        = ((0xe3ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                             << 0xeU)) 
                             | ((0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                               << 1U)) 
                                | (0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                                 << 0xeU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U] 
        = ((0x1fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[7U]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                             << 0x13U)) 
                             | ((0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                                << 0x17U)) 
                                | (0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                                  << 0xcU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U] 
        = ((0xfffffff8U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U]) 
           | ((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                     >> 0x15U)) | ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                          >> 0x10U)) 
                                   | (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                            >> 0x13U)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U] 
        = ((0xffffffc7U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                       >> 0xcU)) | 
                             ((0x10U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                        >> 0xbU)) | 
                              (8U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                     >> 0x16U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U] 
        = ((0xfffffe3fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                        >> 0x10U)) 
                             | ((0x80U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                          >> 0x17U)) 
                                | (0x40U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                            >> 8U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U] 
        = ((0xfffff1ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                        >> 9U)) | (
                                                   (0x400U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                                       >> 0xaU)) 
                                                   | (0x200U 
                                                      & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                                         >> 0x12U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U] 
        = ((0xffff8fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                         << 5U)) | 
                             ((0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                          << 5U)) | 
                              (0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                          >> 2U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U] 
        = ((0xfffc7fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                          << 0xeU)) 
                             | ((0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                             << 0xdU)) 
                                | (0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                              >> 2U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U] 
        = ((0xffe3ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                           << 4U)) 
                             | ((0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                             << 0xdU)) 
                                | (0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                               >> 6U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U] 
        = ((0xff1fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                           << 8U)) 
                             | ((0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                              << 0xfU)) 
                                | (0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                                << 9U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U] 
        = ((0xf8ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                            >> 5U)) 
                             | ((0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                               >> 4U)) 
                                | (0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                                 << 0x10U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U] 
        = ((0xc7ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                             << 0xdU)) 
                             | ((0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                                << 9U)) 
                                | (0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                                 << 0x18U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U] 
        = ((0x3fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[8U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                             << 0x1aU)) 
                             | (0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                               << 0x19U)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U] 
        = ((0xfffffffeU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U]) 
           | (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                    >> 0x1eU)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U] 
        = ((0xfffffff1U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U]) 
           | (0xfffffffeU & ((8U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                    >> 4U)) | ((4U 
                                                & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                                   >> 4U)) 
                                               | (2U 
                                                  & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                                     >> 0xcU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U] 
        = ((0xffffff8fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                       << 1U)) | ((0x20U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                                      >> 0xbU)) 
                                                  | (0x10U 
                                                     & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                                        >> 0xdU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U] 
        = ((0xfffffc7fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U]) 
           | (0xffffff80U & ((0x200U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U]) 
                             | ((0x100U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                           << 6U)) 
                                | (0x80U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                            >> 2U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U] 
        = ((0xffffe3ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                         >> 9U)) | 
                             ((0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                         >> 3U)) | 
                              (0x400U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                         >> 0x12U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U] 
        = ((0xffff1fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                         << 9U)) | 
                             ((0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                          >> 7U)) | 
                              (0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                          << 4U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U] 
        = ((0xfff8ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                          << 0xeU)) 
                             | ((0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                             >> 5U)) 
                                | (0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                               << 9U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U] 
        = ((0xffc7ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                           >> 0xaU)) 
                             | ((0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                              >> 6U)) 
                                | (0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                               << 0xbU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U] 
        = ((0xfe3fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                            << 7U)) 
                             | ((0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                              << 0xfU)) 
                                | (0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                                << 5U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U] 
        = ((0xf1ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                            << 0xeU)) 
                             | ((0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                               << 0xbU)) 
                                | (0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                                 << 4U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U] 
        = ((0x8fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                             << 0x10U)) 
                             | ((0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                                << 0xbU)) 
                                | (0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                                  << 6U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U] 
        = ((0x7fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[9U]) 
           | (0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                             << 2U)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU] 
        = ((0xfffffffcU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU]) 
           | (0x7fffffffU & ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                    >> 0xdU)) | (1U 
                                                 & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                                    >> 3U)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU] 
        = ((0xffffffe3U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                       >> 0x1aU)) | 
                             ((8U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                     >> 4U)) | (4U 
                                                & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                                   >> 0x11U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU] 
        = ((0xffffff1fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                       >> 7U)) | ((0x40U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                                      >> 0x16U)) 
                                                  | (0x20U 
                                                     & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                                        >> 0x17U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU] 
        = ((0xfffff8ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU]) 
           | (0xffffff00U & ((0x400U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                        >> 3U)) | (
                                                   (0x200U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                                       << 2U)) 
                                                   | (0x100U 
                                                      & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U])))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU] 
        = ((0xffffc7ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                         >> 6U)) | 
                             ((0x1000U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U]) 
                              | (0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                           >> 0x10U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU] 
        = ((0xfffe3fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                          << 4U)) | 
                             ((0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                          << 3U)) | 
                              (0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                          << 2U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU] 
        = ((0xfff1ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                          << 0x13U)) 
                             | ((0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                             >> 7U)) 
                                | (0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                               << 9U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU] 
        = ((0xff8fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                           << 8U)) 
                             | ((0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                              >> 5U)) 
                                | (0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                                >> 2U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU] 
        = ((0xfc7fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                            << 0x10U)) 
                             | ((0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                               << 9U)) 
                                | (0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                                >> 5U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU] 
        = ((0xe3ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                             << 0xbU)) 
                             | ((0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                               << 9U)) 
                                | (0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                                 << 0x19U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU] 
        = ((0x1fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xaU]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                             << 0x18U)) 
                             | ((0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                                << 9U)) 
                                | (0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                                  >> 1U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU] 
        = ((0xfffffff8U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU]) 
           | ((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                     >> 0x19U)) | ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                          >> 0x1cU)) 
                                   | (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                            >> 0xdU)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU] 
        = ((0xffffffc7U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                       >> 3U)) | ((0x10U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                                      << 2U)) 
                                                  | (8U 
                                                     & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                                        << 1U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU] 
        = ((0xfffffe3fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                        >> 0xbU)) | 
                             ((0x80U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                        >> 9U)) | (0x40U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                                      >> 5U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU] 
        = ((0xfffff1ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                        << 1U)) | (
                                                   (0x400U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                                       << 0xaU)) 
                                                   | (0x200U 
                                                      & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                                         >> 8U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU] 
        = ((0xffff8fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                         << 0xbU)) 
                             | ((0x2000U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U]) 
                                | (0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                              >> 0xbU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU] 
        = ((0xfffc7fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                          >> 4U)) | 
                             ((0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                           << 0xaU)) 
                              | (0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                            >> 8U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU] 
        = ((0xffe3ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                           >> 9U)) 
                             | ((0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                             << 0xbU)) 
                                | (0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                               << 3U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU] 
        = ((0xff1fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                           >> 5U)) 
                             | ((0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                              << 0x12U)) 
                                | (0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                                << 0xcU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU] 
        = ((0xf8ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                            >> 2U)) 
                             | ((0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                               << 2U)) 
                                | (0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                                 << 0x15U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU] 
        = ((0xc7ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                             << 0x13U)) 
                             | ((0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                                << 8U)) 
                                | (0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                                 << 0x14U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU] 
        = ((0x3fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xbU]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                             << 0xcU)) 
                             | (0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                               << 0x1cU)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU] 
        = ((0xfffffffeU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU]) 
           | (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                    >> 0xeU)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU] 
        = ((0xfffffff1U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU]) 
           | (0xfffffffeU & ((8U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                    >> 4U)) | ((4U 
                                                & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                                   >> 0xcU)) 
                                               | (2U 
                                                  & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                                     >> 0x16U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU] 
        = ((0xffffff8fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                       >> 0x17U)) | 
                             ((0x20U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                        >> 0x18U)) 
                              | (0x10U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                          >> 0x1bU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU] 
        = ((0xfffffc7fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU]) 
           | (0xffffff80U & ((0x200U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                        >> 0xfU)) | 
                             ((0x100U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                         >> 3U)) | 
                              (0x80U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                        >> 0x17U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU] 
        = ((0xffffe3ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                         << 0xbU)) 
                             | ((0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                           << 5U)) 
                                | (0x400U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                             << 6U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU] 
        = ((0xffff1fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                         << 0xfU)) 
                             | ((0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                            >> 0xeU)) 
                                | (0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                              >> 0xaU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU] 
        = ((0xfff8ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                          << 3U)) | 
                             ((0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                           >> 3U)) 
                              | (0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                             >> 7U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU] 
        = ((0xffc7ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                           >> 4U)) 
                             | ((0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                              >> 0xbU)) 
                                | (0x80000U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U])))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU] 
        = ((0xfe3fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                            >> 2U)) 
                             | ((0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                              << 0xaU)) 
                                | (0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                                << 0x16U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU] 
        = ((0xf1ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                            << 0x18U)) 
                             | ((0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                               << 4U)) 
                                | (0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                                 >> 3U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU] 
        = ((0x8fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                             << 8U)) 
                             | ((0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                                << 0xdU)) 
                                | (0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                                  << 4U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU] 
        = ((0x7fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xcU]) 
           | (0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                             << 0x17U)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU] 
        = ((0xfffffffcU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU]) 
           | (0x7fffffffU & ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                    >> 0x13U)) | (1U 
                                                  & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU] 
        = ((0xffffffe3U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                       >> 8U)) | ((8U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                                      >> 0x15U)) 
                                                  | (4U 
                                                     & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                                        >> 0x13U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU] 
        = ((0xffffff1fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                       << 7U)) | ((0x40U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                                      >> 0xcU)) 
                                                  | (0x20U 
                                                     & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                                        >> 0xcU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU] 
        = ((0xfffff8ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU]) 
           | (0xffffff00U & ((0x400U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                        << 9U)) | (
                                                   (0x200U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                                       >> 0x13U)) 
                                                   | (0x100U 
                                                      & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                                         >> 2U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU] 
        = ((0xffffc7ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                         << 0xaU)) 
                             | ((0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                            >> 7U)) 
                                | (0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                             << 2U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU] 
        = ((0xfffe3fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                          << 0xeU)) 
                             | ((0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                            >> 0xeU)) 
                                | (0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                              << 6U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU] 
        = ((0xfff1ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                          << 0xfU)) 
                             | ((0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                             << 0x12U)) 
                                | (0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                               << 7U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU] 
        = ((0xff8fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                           << 0xfU)) 
                             | ((0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                              << 0x12U)) 
                                | (0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                                << 5U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU] 
        = ((0xfc7fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                            >> 2U)) 
                             | ((0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                               << 0x10U)) 
                                | (0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                                << 0xbU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU] 
        = ((0xe3ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                             << 0x17U)) 
                             | ((0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                               << 1U)) 
                                | (0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                                 << 7U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU] 
        = ((0x1fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xdU]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                             << 0x1eU)) 
                             | ((0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                                << 0x11U)) 
                                | (0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                                  << 0xbU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU] 
        = ((0xfffffff8U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU]) 
           | ((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                     >> 0x13U)) | ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                          >> 0x1dU)) 
                                   | (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                            >> 6U)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU] 
        = ((0xffffffc7U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                       >> 7U)) | ((0x10U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                                      << 4U)) 
                                                  | (8U 
                                                     & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                                        >> 0x15U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU] 
        = ((0xfffffe3fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                        >> 0x11U)) 
                             | ((0x80U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                          >> 0xfU)) 
                                | (0x40U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                            << 6U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU] 
        = ((0xfffff1ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                        >> 4U)) | (
                                                   (0x400U 
                                                    & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU]) 
                                                   | (0x200U 
                                                      & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                                         >> 0x11U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU] 
        = ((0xffff8fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                         >> 0x11U)) 
                             | ((0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                            >> 5U)) 
                                | (0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                              >> 0x10U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU] 
        = ((0xfffc7fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                          >> 0xbU)) 
                             | ((0x10000U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U]) 
                                | (0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                              >> 0xcU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU] 
        = ((0xffe3ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                           << 0xfU)) 
                             | ((0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                             << 4U)) 
                                | (0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                               << 6U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU] 
        = ((0xff1fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                           >> 1U)) 
                             | ((0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                              << 0xbU)) 
                                | (0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                                >> 8U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU] 
        = ((0xf8ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                            << 0xbU)) 
                             | ((0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                               << 0xfU)) 
                                | (0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                                 << 0x14U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU] 
        = ((0xc7ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                             << 0x10U)) 
                             | ((0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                                << 0xcU)) 
                                | (0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                                 << 0x10U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU] 
        = ((0x3fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xeU]) 
           | (0xc0000000U & ((0x80000000U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U]) 
                             | (0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                               << 0xcU)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU] 
        = ((0xfffffffeU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU]) 
           | (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                    >> 6U)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU] 
        = ((0xfffffff1U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU]) 
           | (0xfffffffeU & ((8U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                    >> 0x1aU)) | ((4U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                                      >> 0x14U)) 
                                                  | (2U 
                                                     & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                                        >> 4U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU] 
        = ((0xffffff8fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                       >> 4U)) | ((0x20U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                                      >> 6U)) 
                                                  | (0x10U 
                                                     & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                                        >> 8U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU] 
        = ((0xfffffc7fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU]) 
           | (0xffffff80U & ((0x200U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                        << 2U)) | (
                                                   (0x100U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                                       >> 4U)) 
                                                   | (0x80U 
                                                      & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                                         >> 9U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU] 
        = ((0xffffe3ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                         >> 0x11U)) 
                             | ((0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                           >> 0xcU)) 
                                | (0x400U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                             >> 0xfU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU] 
        = ((0xffff1fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                         << 0xcU)) 
                             | ((0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                            << 0xbU)) 
                                | (0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                              >> 0x11U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU] 
        = ((0xfff8ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                          << 0x10U)) 
                             | ((0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                             << 1U)) 
                                | (0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                               << 6U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU] 
        = ((0xffc7ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                           >> 5U)) 
                             | ((0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                              >> 8U)) 
                                | (0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                               << 0xcU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU] 
        = ((0xfe3fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                            << 0xeU)) 
                             | ((0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                              << 7U)) 
                                | (0x400000U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U])))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU] 
        = ((0xf1ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                            << 5U)) 
                             | ((0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                               << 0xbU)) 
                                | (0x2000000U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U])))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU] 
        = ((0x8fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                             << 0x1dU)) 
                             | ((0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                                << 0x18U)) 
                                | (0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                                  << 2U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU] 
        = ((0x7fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0xfU]) 
           | (0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                             << 0x14U)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U] 
        = ((0xfffffffcU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U]) 
           | (0x7fffffffU & ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                    >> 0x1cU)) | (1U 
                                                  & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                                     >> 0x1bU)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U] 
        = ((0xffffffe3U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                       >> 0x18U)) | 
                             ((8U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                     >> 1U)) | (4U 
                                                & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                                   >> 0x13U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U] 
        = ((0xffffff1fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                       >> 0xdU)) | 
                             ((0x40U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                        >> 0x15U)) 
                              | (0x20U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                          >> 8U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U] 
        = ((0xfffff8ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U]) 
           | (0xffffff00U & ((0x400U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU]) 
                             | ((0x200U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                           << 5U)) 
                                | (0x100U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                             >> 6U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U] 
        = ((0xffffc7ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                         << 1U)) | 
                             ((0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                          << 7U)) | 
                              (0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                         << 5U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U] 
        = ((0xfffe3fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                          << 0xbU)) 
                             | ((0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                            << 9U)) 
                                | (0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                              << 0xdU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U] 
        = ((0xfff1ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                          >> 0xaU)) 
                             | ((0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                             << 3U)) 
                                | (0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                               >> 4U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U] 
        = ((0xff8fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                           >> 4U)) 
                             | ((0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                              << 2U)) 
                                | (0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                                << 5U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U] 
        = ((0xfc7fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                            << 1U)) 
                             | ((0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                               << 3U)) 
                                | (0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                                << 4U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U] 
        = ((0xe3ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                             << 0x19U)) 
                             | ((0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                               << 0x19U)) 
                                | (0x4000000U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU])))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U] 
        = ((0x1fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x10U]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                             << 7U)) 
                             | ((0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                                << 2U)) 
                                | (0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                                  >> 1U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U] 
        = ((0xfffffff8U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U]) 
           | ((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                     >> 8U)) | ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                       >> 0x12U)) | 
                                (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                       >> 0x1bU)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U] 
        = ((0xffffffc7U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                       >> 0xcU)) | 
                             ((0x10U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                        >> 0x1aU)) 
                              | (8U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                       >> 0x12U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U] 
        = ((0xfffffe3fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                        >> 0x17U)) 
                             | ((0x80U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                          >> 1U)) | 
                                (0x40U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                          >> 0xcU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U] 
        = ((0xfffff1ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                        >> 1U)) | (
                                                   (0x400U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                                       >> 6U)) 
                                                   | (0x200U 
                                                      & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                                         << 3U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U] 
        = ((0xffff8fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                         >> 0xfU)) 
                             | ((0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                            >> 0x12U)) 
                                | (0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                              >> 0x13U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U] 
        = ((0xfffc7fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                          >> 5U)) | 
                             ((0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                           << 4U)) 
                              | (0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                            >> 0xdU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U] 
        = ((0xffe3ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                           >> 0xbU)) 
                             | ((0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                             >> 1U)) 
                                | (0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                               << 0xbU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U] 
        = ((0xff1fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                           << 0xcU)) 
                             | ((0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                              >> 2U)) 
                                | (0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                                << 0xdU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U] 
        = ((0xf8ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                            << 0x15U)) 
                             | ((0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                               >> 5U)) 
                                | (0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                                 << 0xeU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U] 
        = ((0xc7ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                             << 0x13U)) 
                             | ((0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                                << 1U)) 
                                | (0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                                 << 7U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U] 
        = ((0x3fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x11U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                             << 7U)) 
                             | (0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                               << 0x14U)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U] 
        = ((0xfffffffeU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U]) 
           | (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                    >> 7U)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U] 
        = ((0xfffffff1U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U]) 
           | (0xfffffffeU & ((8U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                    >> 0x16U)) | ((4U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                                      >> 1U)) 
                                                  | (2U 
                                                     & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                                        >> 0x19U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U] 
        = ((0xffffff8fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                       << 2U)) | ((0x20U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                                      >> 0x10U)) 
                                                  | (0x10U 
                                                     & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                                        >> 0xcU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U] 
        = ((0xfffffc7fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                        >> 0x12U)) 
                             | ((0x100U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                           >> 9U)) 
                                | (0x80U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                            >> 0xbU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U] 
        = ((0xffffe3ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                         << 0xaU)) 
                             | ((0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                           >> 0xaU)) 
                                | (0x400U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                             << 8U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U] 
        = ((0xffff1fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                         << 2U)) | 
                             ((0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                          << 0xcU)) 
                              | (0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                            << 0xcU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U] 
        = ((0xfff8ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                          << 0xeU)) 
                             | ((0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                             << 5U)) 
                                | (0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                               << 2U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U] 
        = ((0xffc7ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                           << 0x12U)) 
                             | ((0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                              << 0x13U)) 
                                | (0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                               << 0x12U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U] 
        = ((0xfe3fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                            << 0x13U)) 
                             | ((0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                              << 2U)) 
                                | (0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                                << 2U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U] 
        = ((0xf1ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                            << 0xcU)) 
                             | ((0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                               << 0xbU)) 
                                | (0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                                 << 0x17U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U] 
        = ((0x8fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                             << 3U)) 
                             | ((0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                                << 5U)) 
                                | (0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                                  << 7U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U] 
        = ((0x7fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x12U]) 
           | (0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                             << 0x10U)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U] 
        = ((0xfffffffcU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U]) 
           | (0x7fffffffU & ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                    >> 0x1aU)) | (1U 
                                                  & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                                     >> 9U)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U] 
        = ((0xffffffe3U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                       >> 0x13U)) | 
                             ((8U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                     >> 0x10U)) | (4U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                                      >> 0x15U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U] 
        = ((0xffffff1fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                       >> 0xeU)) | 
                             ((0x40U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U]) 
                              | (0x20U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                          >> 0xdU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U] 
        = ((0xfffff8ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                                        >> 7U)) | (
                                                   (0x200U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                                       << 4U)) 
                                                   | (0x100U 
                                                      & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                                         << 6U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U] 
        = ((0xffffc7ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                         << 0xaU)) 
                             | ((0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                            >> 8U)) 
                                | (0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                             << 8U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U] 
        = ((0xfffe3fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                          << 0xbU)) 
                             | ((0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                            >> 0xaU)) 
                                | (0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                              << 0xbU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U] 
        = ((0xfff1ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                          << 3U)) | 
                             ((0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                           << 7U)) 
                              | (0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                             >> 6U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U] 
        = ((0xff8fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                           << 3U)) 
                             | ((0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                              >> 1U)) 
                                | (0x100000U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU])))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U] 
        = ((0xfc7fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                            << 9U)) 
                             | ((0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                               << 4U)) 
                                | (0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                                << 0x16U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U] 
        = ((0xe3ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                             << 0x18U)) 
                             | ((0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                               << 0x13U)) 
                                | (0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                                 << 0xaU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U] 
        = ((0x1fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x13U]) 
           | (0xe0000000U & ((0x80000000U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U]) 
                             | ((0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                                << 5U)) 
                                | (0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                                  << 0x1bU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U] 
        = ((0xfffffff8U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U]) 
           | ((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                     >> 0x14U)) | ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                          >> 0xdU)) 
                                   | (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                            >> 2U)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U] 
        = ((0xffffffc7U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                       >> 0x10U)) | 
                             ((0x10U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                        >> 0xaU)) | 
                              (8U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                     >> 4U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U] 
        = ((0xfffffe3fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                        << 8U)) | (
                                                   (0x80U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                                       << 2U)) 
                                                   | (0x40U 
                                                      & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                                         >> 0xaU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U] 
        = ((0xfffff1ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                        << 0xbU)) | 
                             ((0x400U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                         >> 0x10U)) 
                              | (0x200U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                           >> 7U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U] 
        = ((0xffff8fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                         >> 1U)) | 
                             ((0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                          >> 9U)) | 
                              (0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                          << 8U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U] 
        = ((0xfffc7fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                          << 0x10U)) 
                             | ((0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                             << 0xcU)) 
                                | (0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                              << 7U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U] 
        = ((0xffe3ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                           << 0x10U)) 
                             | ((0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                             << 0xdU)) 
                                | (0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                               >> 7U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U] 
        = ((0xff1fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                           << 0xaU)) 
                             | ((0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                              << 5U)) 
                                | (0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                                << 0xeU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U] 
        = ((0xf8ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                            << 0xeU)) 
                             | ((0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                               << 0x17U)) 
                                | (0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                                 << 7U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U] 
        = ((0xc7ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                             << 0x14U)) 
                             | ((0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                                << 0xdU)) 
                                | (0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                                 << 0xeU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U] 
        = ((0x3fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x14U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                             << 3U)) 
                             | (0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                               << 0x1aU)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U] 
        = ((0xfffffffeU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U]) 
           | (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                    >> 0x13U)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U] 
        = ((0xfffffff1U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U]) 
           | (0xfffffffeU & ((8U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                    >> 8U)) | ((4U 
                                                & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                                   >> 0x12U)) 
                                               | (2U 
                                                  & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                                     >> 0x1cU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U] 
        = ((0xffffff8fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                       >> 0x13U)) | 
                             ((0x20U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                        >> 0x18U)) 
                              | (0x10U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                          >> 1U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U] 
        = ((0xfffffc7fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                        << 5U)) | (
                                                   (0x100U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                                       << 1U)) 
                                                   | (0x80U 
                                                      & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                                         >> 0xcU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U] 
        = ((0xffffe3ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                         >> 0xcU)) 
                             | ((0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                           >> 8U)) 
                                | (0x400U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                             << 4U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U] 
        = ((0xffff1fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                         << 5U)) | 
                             ((0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                          << 6U)) | 
                              (0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                          >> 9U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U] 
        = ((0xfff8ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                          >> 1U)) | 
                             ((0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                           >> 5U)) 
                              | (0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                             >> 0xdU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U] 
        = ((0xffc7ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                           >> 0xaU)) 
                             | ((0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                              << 5U)) 
                                | (0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                               << 8U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U] 
        = ((0xfe3fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U]) 
           | (0xffc00000U & ((0x1000000U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U]) 
                             | ((0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                              >> 6U)) 
                                | (0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                                >> 3U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U] 
        = ((0xf1ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                            << 0x12U)) 
                             | ((0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                               << 7U)) 
                                | (0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                                 << 0x18U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U] 
        = ((0x8fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U]) 
           | (0xf0000000U & ((0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                             << 3U)) 
                             | ((0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                                << 4U)) 
                                | (0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                                  << 4U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U] 
        = ((0x7fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x15U]) 
           | (0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U] 
                             << 0x1eU)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U] 
        = ((0xfffffffcU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U]) 
           | (0x7fffffffU & ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                    >> 6U)) | (1U & 
                                               (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                                >> 0xdU)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U] 
        = ((0xffffffe3U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U]) 
           | (0xfffffffcU & ((0x10U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                       >> 8U)) | ((8U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                                      >> 0xbU)) 
                                                  | (4U 
                                                     & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                                        >> 0xdU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U] 
        = ((0xffffff1fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U]) 
           | (0xffffffe0U & ((0x80U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                       >> 0x10U)) | 
                             ((0x40U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                        >> 8U)) | (0x20U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                                      << 4U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U] 
        = ((0xfffff8ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U]) 
           | (0xffffff00U & ((0x400U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                        >> 0x11U)) 
                             | ((0x200U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                           >> 7U)) 
                                | (0x100U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                             >> 0x17U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U] 
        = ((0xffffc7ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U]) 
           | (0xfffff800U & ((0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                         >> 0x11U)) 
                             | ((0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                            >> 0xcU)) 
                                | (0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                             << 0xaU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U] 
        = ((0xfffe3fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U]) 
           | (0xffffc000U & ((0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                          << 3U)) | 
                             ((0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                          << 4U)) | 
                              (0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                          >> 4U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U] 
        = ((0xfff1ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U]) 
           | (0xfffe0000U & ((0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                          << 0x13U)) 
                             | ((0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                             << 0x11U)) 
                                | (0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                               << 8U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U] 
        = ((0xff8fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U]) 
           | (0xfff00000U & ((0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                           >> 5U)) 
                             | ((0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                              >> 9U)) 
                                | (0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                                >> 2U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U] 
        = ((0xfc7fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U]) 
           | (0xff800000U & ((0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                            >> 3U)) 
                             | ((0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                               << 0x18U)) 
                                | (0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                                >> 2U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U] 
        = ((0xe3ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U]) 
           | (0xfc000000U & ((0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                             << 0xeU)) 
                             | ((0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xeU] 
                                               << 0x18U)) 
                                | (0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                                 << 2U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U] 
        = ((0x1fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x16U]) 
           | (0xe0000000U & ((0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                             << 0xdU)) 
                             | ((0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                                << 5U)) 
                                | (0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                                  << 1U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U] 
        = ((0xfffffff8U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U]) 
           | ((4U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                     << 1U)) | ((2U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                       >> 8U)) | (1U 
                                                  & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                                     >> 0xdU)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U] 
        = ((0xffffffc7U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U]) 
           | (0xfffffff8U & ((0x20U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                       >> 0x12U)) | 
                             ((0x10U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                        << 2U)) | (8U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[1U] 
                                                      >> 0x19U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U] 
        = ((0xfffffe3fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U]) 
           | (0xffffffc0U & ((0x100U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                        >> 0xfU)) | 
                             ((0x80U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                        >> 0x10U)) 
                              | (0x40U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                          >> 0x18U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U] 
        = ((0xfffff1ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U]) 
           | (0xfffffe00U & ((0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                        >> 0xcU)) | 
                             ((0x400U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                         >> 1U)) | 
                              (0x200U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                         >> 0x13U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U] 
        = ((0xffff8fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U]) 
           | (0xfffff000U & ((0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                         << 1U)) | 
                             ((0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                          >> 5U)) | 
                              (0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                          >> 7U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U] 
        = ((0xfffc7fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U]) 
           | (0xffff8000U & ((0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                          >> 0xdU)) 
                             | ((0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[4U] 
                                             << 7U)) 
                                | (0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                              << 0xcU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U] 
        = ((0xffe3ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U]) 
           | (0xfffc0000U & ((0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                           >> 1U)) 
                             | ((0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                             << 1U)) 
                                | (0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                                               >> 7U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U] 
        = ((0xff1fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U]) 
           | (0xffe00000U & ((0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[3U] 
                                           << 7U)) 
                             | ((0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                              << 0xcU)) 
                                | (0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                                << 0xaU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U] 
        = ((0xf8ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U]) 
           | (0xff000000U & ((0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                            << 0x15U)) 
                             | ((0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                               << 2U)) 
                                | (0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                                 << 9U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U] 
        = ((0xc7ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U]) 
           | (0xf8000000U & ((0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                             << 0x14U)) 
                             | ((0x10000000U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[5U]) 
                                | (0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                                 << 0x16U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U] 
        = ((0x3fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x17U]) 
           | (0xc0000000U & ((0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                             << 0xeU)) 
                             | (0x40000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xbU] 
                                               << 0xcU)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U] 
        = ((0xfffffffeU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U]) 
           | (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                    >> 7U)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U] 
        = ((0xfffffff1U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U]) 
           | (0xfffffffeU & ((8U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                    >> 0x1cU)) | ((4U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                                      >> 0xbU)) 
                                                  | (2U 
                                                     & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[6U] 
                                                        >> 0x13U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U] 
        = ((0xffffff8fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U]) 
           | (0xfffffff0U & ((0x40U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                       >> 0xcU)) | 
                             ((0x20U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                        << 4U)) | (0x10U 
                                                   & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x12U] 
                                                      >> 0x10U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U] 
        = ((0xfffffc7fU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U]) 
           | (0xffffff80U & ((0x200U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x18U] 
                                        << 7U)) | (
                                                   (0x100U 
                                                    & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                                       >> 5U)) 
                                                   | (0x80U 
                                                      & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                                         >> 0x16U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U] 
        = ((0xffffe3ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U]) 
           | (0xfffffc00U & ((0x1000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                         << 7U)) | 
                             ((0x800U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xaU] 
                                         >> 2U)) | 
                              (0x400U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                         >> 0xaU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U] 
        = ((0xffff1fffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U]) 
           | (0xffffe000U & ((0x8000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[7U] 
                                         << 9U)) | 
                             ((0x4000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                          << 4U)) | 
                              (0x2000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                          >> 0xdU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U] 
        = ((0xfff8ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U]) 
           | (0xffff0000U & ((0x40000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x15U] 
                                          << 8U)) | 
                             ((0x20000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[8U] 
                                           << 0x11U)) 
                              | (0x10000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                             << 0xaU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U] 
        = ((0xffc7ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U]) 
           | (0xfff80000U & ((0x200000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x13U] 
                                           << 0xaU)) 
                             | ((0x100000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[2U] 
                                              >> 2U)) 
                                | (0x80000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xfU] 
                                               << 7U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U] 
        = ((0xfe3fffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U]) 
           | (0xffc00000U & ((0x1000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xcU] 
                                            << 0xeU)) 
                             | ((0x800000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0xdU] 
                                              >> 4U)) 
                                | (0x400000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U] 
                                                << 0xaU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U] 
        = ((0xf1ffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U]) 
           | (0xfe000000U & ((0x8000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[9U] 
                                            << 2U)) 
                             | ((0x4000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x14U] 
                                               >> 5U)) 
                                | (0x2000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0U] 
                                                 << 0xeU))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U] 
        = ((0x8fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U]) 
           | (0xf0000000U & ((0x40000000U & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x11U]) 
                             | ((0x20000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x10U] 
                                                >> 1U)) 
                                | (0x10000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x17U] 
                                                  << 0x11U))))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U] 
        = ((0x7fffffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data_permuted[0x18U]) 
           | (0x80000000U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_data[0x16U] 
                             << 0x19U)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__cnt_q 
        = (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
            << 0xaU) | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q 
        = (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
            << 5U) | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_q 
        = (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
            << 5U) | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2[0U][8U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2[0U][9U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2[0U][6U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2[0U][7U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2[0U][4U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2[0U][5U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2[0U][2U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2[0U][3U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2[0U][0U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2[0U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2[1U][8U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2[1U][9U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2[1U][6U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2[1U][7U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2[1U][4U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2[1U][5U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2[1U][2U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2[1U][3U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2[1U][0U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__sheet2[1U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__4__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2[0U][8U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2[0U][9U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2[0U][6U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2[0U][7U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2[0U][4U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2[0U][5U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2[0U][2U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2[0U][3U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2[0U][0U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2[0U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2[1U][8U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2[1U][9U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2[1U][6U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2[1U][7U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2[1U][4U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2[1U][5U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2[1U][2U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2[1U][3U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2[1U][0U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__sheet2[1U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__3__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2[0U][8U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2[0U][9U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2[0U][6U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2[0U][7U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2[0U][4U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2[0U][5U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2[0U][2U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2[0U][3U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2[0U][0U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2[0U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2[1U][8U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2[1U][9U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2[1U][6U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2[1U][7U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2[1U][4U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2[1U][5U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2[1U][2U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2[1U][3U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2[1U][0U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__sheet2[1U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__2__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2[0U][8U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2[0U][9U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2[0U][6U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2[0U][7U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2[0U][4U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2[0U][5U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2[0U][2U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2[0U][3U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2[0U][0U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2[0U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2[1U][8U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2[1U][9U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2[1U][6U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2[1U][7U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2[1U][4U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2[1U][5U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2[1U][2U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2[1U][3U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2[1U][0U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__sheet2[1U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__1__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U]))) 
                   >> 0x20U));
    if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__dom_in_rand_ext_q) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[1U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[1U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[2U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[2U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[3U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[3U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[4U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[4U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[5U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[5U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[6U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[6U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[7U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[7U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[8U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[8U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[9U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[9U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xaU] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0xaU];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xbU] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0xbU];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xcU] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0xcU];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xdU] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0xdU];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xeU] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0xeU];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xfU] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0xfU];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x10U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x10U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x11U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x11U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x12U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x12U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x13U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x13U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x14U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x14U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x15U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x15U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x16U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x16U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x17U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x17U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x18U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x18U];
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0x14U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[1U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0x15U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[2U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0x16U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[3U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0x17U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[4U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0x18U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[5U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[6U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[1U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[7U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[2U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[8U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[3U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[9U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[4U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xaU] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[5U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xbU] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[6U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xcU] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[7U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xdU] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[8U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xeU] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[9U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0xfU] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0xaU];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x10U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0xbU];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x11U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0xcU];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x12U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0xdU];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x13U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0xeU];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x14U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0xfU];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x15U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0x10U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x16U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0x11U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x17U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0x12U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__in_prd[0x18U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__out_prd[0x13U];
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2[0U][8U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2[0U][9U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[5U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2[0U][6U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2[0U][7U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[6U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2[0U][4U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2[0U][5U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[7U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2[0U][2U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2[0U][3U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[8U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2[0U][0U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2[0U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[9U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2[1U][8U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2[1U][9U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[0U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2[1U][6U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2[1U][7U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[1U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2[1U][4U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2[1U][5U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[2U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2[1U][2U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2[1U][3U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[3U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2[1U][0U] 
        = (IData)((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U]))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__sheet2[1U][1U] 
        = (IData)(((((QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_keccak_p__DOT__g_2share_chi__DOT__g_chi_w__BRA__0__KET____DOT__u_dom__DOT____Vcellout__u_prim_xor_q01__out_o[4U]))) 
                   >> 0x20U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_enable = 0U;
    if (((((((((0x278U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
               | (0x184U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
              | (0x327U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
             | (0x2f6U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
            | (0xcU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
           | (0x63U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
          | (0x390U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
         | (0x21eU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)))) {
        if ((0x278U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x184U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_enable = 1U;
            } else if ((0x327U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_enable = 1U;
            }
        }
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__entropy_state_error = 0U;
    if ((1U & (~ ((((((((0x278U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
                        | (0x184U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
                       | (0x327U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
                      | (0x2f6U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
                     | (0xcU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
                    | (0x63U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
                   | (0x390U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
                  | (0x21eU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)))))) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__entropy_state_error = 1U;
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_entropy__err_o = 0ULL;
    if (((((((((0x278U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
               | (0x184U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
              | (0x327U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
             | (0x2f6U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
            | (0xcU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
           | (0x63U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
          | (0x390U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
         | (0x21eU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)))) {
        if ((0x278U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x184U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x327U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x2f6U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0xcU != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                            if ((0x63U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_entropy__err_o 
                                    = (0x104000000ULL 
                                       | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_value)));
                            } else if ((0x390U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_entropy__err_o 
                                    = (0x105000000ULL 
                                       | (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__mode_q)));
                            }
                        }
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__aux_update = 0U;
                        if ((0xcU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__aux_update = 1U;
                        }
                    } else {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__aux_update = 0U;
                    }
                } else {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__aux_update = 0U;
                }
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__aux_update = 0U;
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__aux_update = 0U;
        }
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__aux_update = 0U;
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellinp__u_sha3__msg_data_i[0U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_masked
        [0U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellinp__u_sha3__msg_data_i[1U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_masked
        [1U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_addr 
        = ((0x11U > (0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))
            ? (0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q))
            : 0U);
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_keccak_run = 0U;
    if ((0x40U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x20U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                                if ((0x11U == (0x1fU 
                                               & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))) {
                                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_keccak_run = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw)))) {
                            if ((0x11U == (0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))) {
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_keccak_run = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                             >> 3U)))) {
            if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x11U == (0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_keccak_run = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_keccak_run = 1U;
                    }
                }
            }
        }
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__prefix_data[1U] 
        = (((QData)((IData)(Vkmac_reduced_tb__ConstPool__CONST_ha26e03e5_0[
                            (((IData)(0x3fU) + (0x7ffU 
                                                & (((0x11U 
                                                     > 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))
                                                     ? 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q))
                                                     : 0U) 
                                                   << 6U))) 
                             >> 5U)])) << ((0U == (0x1fU 
                                                   & (((0x11U 
                                                        > 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q))
                                                        : 0U) 
                                                      << 6U)))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & (((0x11U 
                                                       > 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))
                                                       ? 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q))
                                                       : 0U) 
                                                     << 6U))))) 
           | (((0U == (0x1fU & (((0x11U > (0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))
                                  ? (0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q))
                                  : 0U) << 6U))) ? 0ULL
                : ((QData)((IData)(Vkmac_reduced_tb__ConstPool__CONST_ha26e03e5_0[
                                   (((IData)(0x1fU) 
                                     + (0x7ffU & ((
                                                   (0x11U 
                                                    > 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))
                                                    ? 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q))
                                                    : 0U) 
                                                  << 6U))) 
                                    >> 5U)])) << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((0x11U 
                                                        > 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q))
                                                        : 0U) 
                                                      << 6U))))) 
              | ((QData)((IData)(Vkmac_reduced_tb__ConstPool__CONST_ha26e03e5_0[
                                 (0x3eU & (((0x11U 
                                             > (0x1fU 
                                                & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))
                                             ? (0x1fU 
                                                & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q))
                                             : 0U) 
                                           << 1U))])) 
                 >> (0x1fU & (((0x11U > (0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))
                                ? (0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q))
                                : 0U) << 6U)))));
    if ((0x40U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
        if ((0x20U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
            if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
                if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
                    if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
                        if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
                            if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] 
                                    = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf
                                    [0U];
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] 
                                    = (0x600000000000000ULL 
                                       | (((QData)((IData)(
                                                           (0x11U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))))) 
                                           << 0x3fU) 
                                          | vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf
                                          [1U]));
                            } else {
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] = 0ULL;
                            }
                        } else {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] = 0ULL;
                        }
                    } else {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] = 0ULL;
                    }
                } else {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] = 0ULL;
                }
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] = 0ULL;
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] = 0ULL;
        }
    } else if ((0x20U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
        if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
            if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
                if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
                    if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
                        if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] 
                                = (0xffffffffffffULL 
                                   & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf
                                   [0U]);
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] 
                                = (0x6000000000000ULL 
                                   | (((QData)((IData)(
                                                       (0x11U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))))) 
                                       << 0x3fU) | 
                                      (0xffffffffffffULL 
                                       & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf
                                       [1U])));
                        } else {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] = 0ULL;
                        }
                    } else {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] = 0ULL;
                    }
                } else {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] = 0ULL;
                }
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] = 0ULL;
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] = 0ULL;
        }
    } else if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
        if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
            if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
                if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
                    if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] 
                            = (0xffffffffffULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf
                               [0U]);
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] 
                            = (0x60000000000ULL | (
                                                   ((QData)((IData)(
                                                                    (0x11U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & ((IData)(1U) 
                                                                         + (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))))) 
                                                    << 0x3fU) 
                                                   | (0xffffffffffULL 
                                                      & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf
                                                      [1U])));
                    } else {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] = 0ULL;
                    }
                } else {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] = 0ULL;
                }
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] = 0ULL;
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] = 0ULL;
        }
    } else if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
        if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
            if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
                if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] 
                        = (QData)((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf
                                          [0U]));
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] 
                        = (((QData)((IData)((6U | (
                                                   (0x11U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))) 
                                                   << 0x1fU)))) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf
                                                        [1U])));
                } else {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] = 0ULL;
                }
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] = 0ULL;
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] = 0ULL;
        }
    } else if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
        if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
            if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] 
                    = (QData)((IData)((0xffffffU & (IData)(
                                                           vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf
                                                           [0U]))));
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] 
                    = (0x6000000ULL | (((QData)((IData)(
                                                        (0x11U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(1U) 
                                                             + (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))))) 
                                        << 0x3fU) | (QData)((IData)(
                                                                    (0xffffffU 
                                                                     & (IData)(
                                                                               vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf
                                                                               [1U]))))));
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] = 0ULL;
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] = 0ULL;
        }
    } else if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
        if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] 
                = (QData)((IData)((0xffffU & (IData)(
                                                     vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf
                                                     [0U]))));
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] 
                = (0x60000ULL | (((QData)((IData)((0x11U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))))) 
                                  << 0x3fU) | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(
                                                                         vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf
                                                                         [1U]))))));
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] = 0ULL;
        }
    } else if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_strb))) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] 
            = (QData)((IData)((0xffU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf
                                               [0U]))));
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] 
            = (0x600ULL | (((QData)((IData)((0x11U 
                                             == (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))))) 
                            << 0x3fU) | (QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(
                                                                   vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__msg_buf
                                                                   [1U]))))));
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[0U] = 0ULL;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data[1U] 
            = (6ULL | ((QData)((IData)((0x11U == (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))))) 
                       << 0x3fU));
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__zero_with_endbit[1U] 
        = ((0x7fffffffffffffffULL & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__zero_with_endbit
            [1U]) | ((QData)((IData)((0x11U == (0x1fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))))) 
                     << 0x3fU));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__fsm_keccak_valid = 0U;
    if ((0x40U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x20U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw)))) {
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__fsm_keccak_valid = 1U;
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__fsm_keccak_valid 
                                = (0x11U != (0x1fU 
                                             & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)));
                        }
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__fsm_keccak_valid 
                                = (0x11U != (0x1fU 
                                             & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)));
                        }
                    }
                }
            }
        }
    }
    vlSelf->kmac_reduced_tb__DOT__count_d = (0x3ffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->kmac_reduced_tb__DOT__count_q)));
    vlSelf->kmac_reduced_tb__DOT__test_done = 0U;
    if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q))) {
        if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q))) {
            if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q))) {
                if ((0U == (IData)(vlSelf->kmac_reduced_tb__DOT__sha3_fsm))) {
                    vlSelf->kmac_reduced_tb__DOT__test_done = 1U;
                }
            }
            vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_d 
                = vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q;
            if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q)))) {
                vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_d = 7U;
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_d 
                = vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q;
            if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q))) {
                if ((6U == (IData)(vlSelf->kmac_reduced_tb__DOT__absorbed))) {
                    vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_d = 6U;
                }
            } else if ((3U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_ready_shares))) {
                vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_d = 5U;
            }
        }
    } else {
        vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_d 
            = vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q;
        if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q))) {
            vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_d 
                = ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q))
                    ? 4U : 3U);
        } else if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q))) {
            if ((1U == (IData)(vlSelf->kmac_reduced_tb__DOT__reseed_count_q))) {
                vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_d = 2U;
            }
        } else if ((2U < (IData)(vlSelf->kmac_reduced_tb__DOT__count_q))) {
            vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_d = 1U;
        }
    }
    vlSelf->kmac_reduced_tb__DOT__msg_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q))) {
            if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q))) {
                vlSelf->kmac_reduced_tb__DOT__msg_valid = 1U;
            }
        }
    }
    vlSelf->kmac_reduced_tb__DOT__done = 9U;
    if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q))) {
        if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q))) {
            if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q)))) {
                vlSelf->kmac_reduced_tb__DOT__done = 6U;
            }
        }
    }
    vlSelf->kmac_reduced_tb__DOT__sha3_start = 0U;
    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q))) {
            if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q)))) {
                vlSelf->kmac_reduced_tb__DOT__sha3_start = 1U;
            }
        }
    }
    vlSelf->kmac_reduced_tb__DOT__sha3_process = 0U;
    if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q))) {
        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q)))) {
                if ((3U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_ready_shares))) {
                    vlSelf->kmac_reduced_tb__DOT__sha3_process = 1U;
                }
            }
        }
    }
    vlSelf->kmac_reduced_tb__DOT__entropy_refresh_req = 0U;
    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q))) {
                vlSelf->kmac_reduced_tb__DOT__entropy_refresh_req = 1U;
                if ((1U == (IData)(vlSelf->kmac_reduced_tb__DOT__reseed_count_q))) {
                    vlSelf->kmac_reduced_tb__DOT__entropy_refresh_req = 0U;
                }
            }
            vlSelf->kmac_reduced_tb__DOT__entropy_ready = 0U;
            if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q)))) {
                if ((2U < (IData)(vlSelf->kmac_reduced_tb__DOT__count_q))) {
                    vlSelf->kmac_reduced_tb__DOT__entropy_ready = 1U;
                }
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__entropy_ready = 0U;
        }
    } else {
        vlSelf->kmac_reduced_tb__DOT__entropy_ready = 0U;
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__complete_d = 0U;
    if ((0x20U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw)))) {
                            if ((0x17U == (0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_q)))) {
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__complete_d = 1U;
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_rnd_num = 0U;
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_rnd_num = 1U;
                            } else {
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_rnd_num = 0U;
                            }
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__inc_rnd_num = 0U;
                            if ((0x17U != (0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_q)))) {
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__inc_rnd_num = 1U;
                            }
                        } else {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_rnd_num = 0U;
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__inc_rnd_num = 0U;
                        }
                    } else {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_rnd_num = 0U;
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__inc_rnd_num = 0U;
                    }
                } else {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_rnd_num = 0U;
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__inc_rnd_num = 0U;
                }
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_rnd_num = 0U;
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__inc_rnd_num = 0U;
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_rnd_num = 0U;
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__inc_rnd_num = 0U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                         >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw)))) {
                        if ((0x17U == (0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_q)))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__complete_d = 1U;
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_rnd_num = 0U;
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_rnd_num = 1U;
                        } else {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_rnd_num = 0U;
                        }
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__inc_rnd_num = 0U;
                        if ((0x17U != (0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_q)))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__inc_rnd_num = 1U;
                        }
                    } else {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_rnd_num = 0U;
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__inc_rnd_num = 0U;
                    }
                } else {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_rnd_num = 0U;
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__inc_rnd_num = 0U;
                }
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_rnd_num = 0U;
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__inc_rnd_num = 0U;
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_rnd_num = 0U;
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__inc_rnd_num = 0U;
        }
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_rnd_num = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__inc_rnd_num = 0U;
    }
    if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__aux_update) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__aux_rand_d 
            = (1U & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x18U] 
                     >> 0x1fU));
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en_rand_d 
            = (0xfU & ((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x18U] 
                        << 5U) | (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_data_q[0x18U] 
                                  >> 0x1bU)));
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__aux_rand_d 
            = (1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__aux_rand_q));
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en_rand_d 
            = (0xfU & (7U & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en_rand_q) 
                             >> 1U)));
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellinp__u_pad__msg_data_i[0U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellinp__u_sha3__msg_data_i
        [0U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellinp__u_pad__msg_data_i[1U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellinp__u_sha3__msg_data_i
        [1U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_run_req_d 
        = ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__sha3pad_keccak_run) 
           | ((~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_complete)) 
              & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_run_req_q)));
    vlSelf->kmac_reduced_tb__DOT__msg_handshake = ((IData)(vlSelf->kmac_reduced_tb__DOT__msg_valid) 
                                                   & (3U 
                                                      == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_ready_shares)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__load_data 
        = ((IData)(vlSelf->kmac_reduced_tb__DOT__msg_valid) 
           & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_msg_unpacker_share0__wready_o));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__load_data 
        = ((IData)(vlSelf->kmac_reduced_tb__DOT__msg_valid) 
           & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_msg_unpacker_share1__wready_o));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_start = 0U;
    if ((0x20U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw)))) {
                            if (vlSelf->kmac_reduced_tb__DOT__sha3_start) {
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_start = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x1fU] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x1eU] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x1dU] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x1cU] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x1bU] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x1aU] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x19U] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x18U] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x17U] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x16U] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x15U] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x14U] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x13U] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x12U] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x11U] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x10U] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0xfU] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0xeU] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0xdU] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0xcU] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0xbU] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0xaU] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[9U] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[8U] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[7U] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[6U] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[5U] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[4U] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[3U] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[2U] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[1U] = 0U;
    vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0U] = 0U;
    if (vlSelf->kmac_reduced_tb__DOT__sha3_process) {
        Vkmac_reduced_tb_digestpp_dpi_pkg____Vdpiimwrap_c_dpi_sha3_256__Vdpioc2_TOP__digestpp_dpi_pkg(
                                                                                (&(vlSymsp->__Vscope_kmac_reduced_tb)), 
                                                                                "src/lowrisc_dv_verilator_kmac_reduced_tb_0/rtl/kmac_reduced_tb.sv", 0x191U, vlSelf->kmac_reduced_tb__DOT__input_msg_bytes, 0x10ULL, vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest);
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x1fU] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0x1fU];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x1eU] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0x1eU];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x1dU] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0x1dU];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x1cU] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0x1cU];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x1bU] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0x1bU];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x1aU] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0x1aU];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x19U] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0x19U];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x18U] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0x18U];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x17U] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0x17U];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x16U] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0x16U];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x15U] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0x15U];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x14U] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0x14U];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x13U] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0x13U];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x12U] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0x12U];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x11U] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0x11U];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0x10U] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0x10U];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0xfU] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0xfU];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0xeU] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0xeU];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0xdU] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0xdU];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0xcU] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0xcU];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0xbU] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0xbU];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0xaU] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0xaU];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[9U] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [9U];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[8U] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [8U];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[7U] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [7U];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[6U] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [6U];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[5U] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [5U];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[4U] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [4U];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[3U] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [3U];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[2U] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [2U];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[1U] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [1U];
        vlSelf->kmac_reduced_tb__DOT__dpi_digest_bytes_d[0U] 
            = vlSelf->__Vtask_c_dpi_sha3_256__Vdpioc2__0__digest
            [0U];
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__sha3_err = 0ULL;
    if ((0x20U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelf->__Vfunc_mubi4_test_true_loose__11__val 
                                = vlSelf->kmac_reduced_tb__DOT__done;
                            vlSelf->__Vfunc_mubi4_test_true_loose__11__Vfuncout 
                                = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__11__val));
                            if (((IData)(vlSelf->kmac_reduced_tb__DOT__sha3_process) 
                                 | (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__11__Vfuncout))) {
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__sha3_err 
                                    = (0x180000000ULL 
                                       | (QData)((IData)(
                                                         (((IData)(vlSelf->kmac_reduced_tb__DOT__done) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->kmac_reduced_tb__DOT__sha3_process) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->kmac_reduced_tb__DOT__sha3_start))))));
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                                 >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->__Vfunc_mubi4_test_true_loose__12__val 
                            = vlSelf->kmac_reduced_tb__DOT__done;
                        vlSelf->__Vfunc_mubi4_test_true_loose__12__Vfuncout 
                            = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__12__val));
                        if ((((IData)(vlSelf->kmac_reduced_tb__DOT__sha3_start) 
                              | (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__12__Vfuncout)) 
                             | ((IData)(vlSelf->kmac_reduced_tb__DOT__sha3_process) 
                                & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__processing)))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__sha3_err 
                                = (0x180000000ULL | (QData)((IData)(
                                                                    (((IData)(vlSelf->kmac_reduced_tb__DOT__done) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->kmac_reduced_tb__DOT__sha3_process) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->kmac_reduced_tb__DOT__sha3_start))))));
                        }
                    }
                }
            }
        }
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_done = 9U;
        if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d = 0x3aU;
        } else if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d 
                = ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))
                    ? ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))
                        ? 0x3aU : ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))
                                    ? 0x3aU : ((IData)(vlSelf->kmac_reduced_tb__DOT__sha3_start)
                                                ? 0x21U
                                                : 0x2cU)))
                    : 0x3aU);
        } else if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d = 0x3aU;
        } else if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d = 0x3aU;
        } else if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            if (((IData)(vlSelf->kmac_reduced_tb__DOT__sha3_process) 
                 & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__processing)))) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d = 0x21U;
            } else {
                vlSelf->__Vfunc_mubi4_test_true_strict__8__val 
                    = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__absorbed;
                vlSelf->__Vfunc_mubi4_test_true_strict__8__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__8__val));
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d 
                    = ((IData)(vlSelf->__Vfunc_mubi4_test_true_strict__8__Vfuncout)
                        ? 0xbU : 0x21U);
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d = 0x3aU;
        }
    } else if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelf->__Vfunc_mubi4_test_true_loose__13__val 
                            = vlSelf->kmac_reduced_tb__DOT__done;
                        vlSelf->__Vfunc_mubi4_test_true_loose__13__Vfuncout 
                            = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__13__val));
                        if ((((IData)(vlSelf->kmac_reduced_tb__DOT__sha3_start) 
                              | (IData)(vlSelf->kmac_reduced_tb__DOT__sha3_process)) 
                             | (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__13__Vfuncout))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__sha3_err 
                                = (0x180000000ULL | (QData)((IData)(
                                                                    (((IData)(vlSelf->kmac_reduced_tb__DOT__done) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSelf->kmac_reduced_tb__DOT__sha3_process) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->kmac_reduced_tb__DOT__sha3_start))))));
                        }
                    }
                }
            }
        }
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_done = 9U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d 
            = ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))
                ? 0x3aU : ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))
                            ? 0x3aU : ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))
                                        ? 0x3aU : (
                                                   (1U 
                                                    & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))
                                                    ? 0x3aU
                                                    : 
                                                   ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_complete)
                                                     ? 0xbU
                                                     : 0x10U)))));
    } else if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                    if (((IData)(vlSelf->kmac_reduced_tb__DOT__sha3_start) 
                         | (IData)(vlSelf->kmac_reduced_tb__DOT__sha3_process))) {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__sha3_err 
                            = (0x180000000ULL | (QData)((IData)(
                                                                (((IData)(vlSelf->kmac_reduced_tb__DOT__done) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelf->kmac_reduced_tb__DOT__sha3_process) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelf->kmac_reduced_tb__DOT__sha3_start))))));
                    }
                }
            }
        }
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_done = 9U;
        if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d = 0x3aU;
        } else if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->__Vfunc_mubi4_test_true_strict__9__val 
                    = vlSelf->kmac_reduced_tb__DOT__done;
                vlSelf->__Vfunc_mubi4_test_true_strict__9__Vfuncout 
                    = (6U == (IData)(vlSelf->__Vfunc_mubi4_test_true_strict__9__val));
                if (vlSelf->__Vfunc_mubi4_test_true_strict__9__Vfuncout) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d = 6U;
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_done 
                        = vlSelf->kmac_reduced_tb__DOT__done;
                } else {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d = 0xbU;
                }
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d = 0x3aU;
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d = 0x3aU;
        }
    } else if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
        if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw)))) {
                vlSelf->__Vfunc_mubi4_test_true_loose__14__val 
                    = vlSelf->kmac_reduced_tb__DOT__done;
                vlSelf->__Vfunc_mubi4_test_true_loose__14__Vfuncout 
                    = (9U != (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__14__val));
                if ((((IData)(vlSelf->kmac_reduced_tb__DOT__sha3_start) 
                      | (IData)(vlSelf->kmac_reduced_tb__DOT__sha3_process)) 
                     | (IData)(vlSelf->__Vfunc_mubi4_test_true_loose__14__Vfuncout))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__sha3_err 
                        = (0x180000000ULL | (QData)((IData)(
                                                            (((IData)(vlSelf->kmac_reduced_tb__DOT__done) 
                                                              << 3U) 
                                                             | (((IData)(vlSelf->kmac_reduced_tb__DOT__sha3_process) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->kmac_reduced_tb__DOT__sha3_start))))));
                }
            }
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw;
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_done = 9U;
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d 
                = ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))
                    ? 0x3aU : 0x2cU);
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw;
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_done = 9U;
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d = 0x3aU;
        }
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_done = 9U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d = 0x3aU;
    }
    __Vfunc_lc_tx_test_true_loose__10__val = (0xfU 
                                              & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_prim_lc_sync__lc_en_o));
    __Vfunc_lc_tx_test_true_loose__10__Vfuncout = (0xaU 
                                                   != (IData)(__Vfunc_lc_tx_test_true_loose__10__val));
    if (__Vfunc_lc_tx_test_true_loose__10__Vfuncout) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__st_d = 0x3aU;
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_process = 0U;
    if ((0x20U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                            if (((IData)(vlSelf->kmac_reduced_tb__DOT__sha3_process) 
                                 & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__processing)))) {
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_process = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__hash_cnt_clr 
        = ((0x3ffU <= (0x3ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__cnt_q)) 
           | (IData)(vlSelf->kmac_reduced_tb__DOT__entropy_refresh_req));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__mode_latch = 0U;
    if (((((((((0x278U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
               | (0x184U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
              | (0x327U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
             | (0x2f6U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
            | (0xcU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
           | (0x63U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
          | (0x390U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
         | (0x21eU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)))) {
        if ((0x278U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSelf->kmac_reduced_tb__DOT__entropy_ready) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__mode_latch = 1U;
            }
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_valid_set = 0U;
            if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__entropy_ready)))) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_valid_set = 1U;
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_valid_set = 0U;
            if ((0x184U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x327U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x2f6U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0xcU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_valid_set = 1U;
                        } else if ((0x63U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                            if ((0x390U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_valid_set = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_valid_set = 0U;
    }
    if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__inc_rnd_num) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
            = (0x3fU & ((IData)(1U) + (0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_q))));
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
            = (0x3fU & ((0x1fU & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_q) 
                                  >> 5U)) - (IData)(1U)));
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
            = (0x3fU & (0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_q)));
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
            = (0x3fU & (0x1fU & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_q) 
                                 >> 5U)));
    }
    if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux))) {
        if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellout__u_pad__keccak_data_o[0U] = 0ULL;
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellout__u_pad__keccak_data_o[1U] = 0ULL;
        } else if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellout__u_pad__keccak_data_o[0U] = 0ULL;
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellout__u_pad__keccak_data_o[1U] = 0ULL;
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellout__u_pad__keccak_data_o[0U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__zero_with_endbit
                [0U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellout__u_pad__keccak_data_o[1U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__zero_with_endbit
                [1U];
        }
    } else if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux))) {
        if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux))) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellout__u_pad__keccak_data_o[0U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data
                [0U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellout__u_pad__keccak_data_o[1U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data
                [1U];
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellout__u_pad__keccak_data_o[0U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__prefix_data
                [0U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellout__u_pad__keccak_data_o[1U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__prefix_data
                [1U];
        }
    } else if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux))) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellout__u_pad__keccak_data_o[0U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellinp__u_pad__msg_data_i
            [0U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellout__u_pad__keccak_data_o[1U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellinp__u_pad__msg_data_i
            [1U];
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellout__u_pad__keccak_data_o[0U] = 0ULL;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellout__u_pad__keccak_data_o[1U] = 0ULL;
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_run 
        = ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_run_req_d) 
           & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_triggered_q)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__hold_msg = 0U;
    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                                if ((0x11U == (0x1fU 
                                               & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))) {
                                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__hold_msg = 1U;
                                } else if (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__process_latched) 
                                            | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_process))) {
                                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__hold_msg = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                             >> 4U)))) {
            if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__hold_msg = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__cnt_d 
        = ((((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__hash_cnt_clr)
              ? 0x3ffU : (0x3ffU & (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__cnt_q 
                                    >> 0xaU))) << 0xaU) 
           | ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__hash_cnt_clr)
               ? 0U : (0x3ffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__cnt_q)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_update = 0U;
    if ((0x20U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                            if (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_valid_set) 
                                 | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__sha3_rand_valid))) {
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_update = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_update = 1U;
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_update = 1U;
                }
            }
        }
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_d 
        = ((0x3e0U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_d)) 
           | ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_rnd_num)
               ? 0U : (0x1fU & (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__inc_rnd_num) 
                                 & (~ (IData)((0x1fU 
                                               == (0x1fU 
                                                   & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_q))))))
                                 ? (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__inc_rnd_num) 
                                     & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                        >> 5U)) ? 0x1fU
                                     : (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                                 : (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_q)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_d 
        = ((0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_d)) 
           | (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__rst_rnd_num)
                ? 0x1fU : (0x1fU & (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__inc_rnd_num) 
                                     & (0U != (0x1fU 
                                               & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_q) 
                                                  >> 5U))))
                                     ? (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__inc_rnd_num) 
                                         & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                            >> 5U))
                                         ? 0U : (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                                     : ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_q) 
                                        >> 5U)))) << 5U));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_data[0U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellout__u_pad__keccak_data_o
        [0U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_data[1U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellout__u_pad__keccak_data_o
        [1U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_triggered_d 
        = ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_run) 
           | ((~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_complete)) 
              & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_triggered_q)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_ready 
        = (IData)((((1U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux)) 
                    & (0x1fU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) 
                   & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__hold_msg))));
    __Vtableidx1 = (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__hold_msg) 
                     << 5U) | (((IData)((3U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_valid_shares))) 
                                << 4U) | (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__fsm_keccak_valid) 
                                           << 3U) | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__sel_mux))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_valid 
        = Vkmac_reduced_tb__ConstPool__TABLE_hf3969bbb_0
        [__Vtableidx1];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__cnt_d_committed 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_hash_count__DOT__cnt_d;
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__threshold_hit_clr = 0U;
    if (((((((((0x278U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
               | (0x184U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
              | (0x327U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
             | (0x2f6U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
            | (0xcU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
           | (0x63U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
          | (0x390U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
         | (0x21eU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)))) {
        if ((0x278U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x184U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_update) 
                              | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_consumed))))) {
                    if (((1U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__mode_q)) 
                         & ((IData)(vlSelf->kmac_reduced_tb__DOT__entropy_refresh_req) 
                            | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__threshold_hit_q)))) {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__threshold_hit_clr = 1U;
                    }
                }
            }
        }
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_update = 0U;
        if ((0x278U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSelf->kmac_reduced_tb__DOT__entropy_ready) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_update = 1U;
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_en = 0U;
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_en = 1U;
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_en = 0U;
            }
        } else if ((0x184U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_update) 
                          | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_consumed))))) {
                if (((1U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__mode_q)) 
                     & ((IData)(vlSelf->kmac_reduced_tb__DOT__entropy_refresh_req) 
                        | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__threshold_hit_q)))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_update = 1U;
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_en = 0U;
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_en = 1U;
                } else {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_en = 0U;
                }
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_en = 0U;
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_en = 0U;
        }
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_update = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_en = 0U;
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_d_committed 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_round_count__DOT__cnt_d;
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellinp__u_keccak__data_i[0U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_data
        [0U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT____Vcellinp__u_keccak__data_i[1U] 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_data
        [1U];
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_msg_unpacker_share0__rvalid_o) 
           & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_ready));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_msg_unpacker_share1__rvalid_o) 
           & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_ready));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__clear_status 
        = (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_ready) 
            & (1U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__depth_q))) 
           | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__clr_q));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__clear_status 
        = (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_ready) 
            & (1U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__depth_q))) 
           | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__clr_q));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_en 
        = ((3U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_valid_shares)) 
           & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_ready));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__xor_message = 0U;
    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw) 
                  >> 5U)))) {
        if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw))) {
                            if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_valid) {
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__xor_message = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__keccak_ack 
        = ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_valid) 
           & (0x1fU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__inc_sentmsg 
        = ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_valid) 
           & (0x1fU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_req 
        = ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_en) 
           | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_req_q));
    if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__clear_status) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__depth_d = 0U;
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__gen_unpack_mode__DOT__ptr_d 
            = (3U & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__gen_unpack_mode__DOT__pull_data)
                      ? ((IData)(1U) + (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__gen_unpack_mode__DOT__ptr_q))
                      : (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__gen_unpack_mode__DOT__ptr_q)));
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__depth_d 
            = ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__load_data)
                ? 2U : (3U & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__gen_unpack_mode__DOT__pull_data)
                               ? ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__depth_q) 
                                  - (IData)(1U)) : (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__depth_q))));
    }
    if (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__clear_status) 
         | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__clr_q))) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_d[0U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_d[1U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_d[2U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_d[3U] = 0U;
    } else if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__load_data) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_d[0U] 
            = vlSelf->kmac_reduced_tb__DOT____Vcellinp__u_kmac_reduced__msg_i
            [0U][0U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_d[1U] 
            = vlSelf->kmac_reduced_tb__DOT____Vcellinp__u_kmac_reduced__msg_i
            [0U][1U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_d[2U] 
            = vlSelf->kmac_reduced_tb__DOT____Vcellinp__u_kmac_reduced__msg_i
            [0U][2U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_d[3U] 
            = vlSelf->kmac_reduced_tb__DOT____Vcellinp__u_kmac_reduced__msg_i
            [0U][3U];
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_d[0U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_q[0U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_d[1U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_q[1U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_d[2U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_q[2U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_d[3U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share0__DOT__data_q[3U];
    }
    if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__clear_status) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__depth_d = 0U;
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__gen_unpack_mode__DOT__ptr_d 
            = (3U & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__gen_unpack_mode__DOT__pull_data)
                      ? ((IData)(1U) + (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__gen_unpack_mode__DOT__ptr_q))
                      : (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__gen_unpack_mode__DOT__ptr_q)));
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__depth_d 
            = ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__load_data)
                ? 2U : (3U & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__gen_unpack_mode__DOT__pull_data)
                               ? ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__depth_q) 
                                  - (IData)(1U)) : (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__depth_q))));
    }
    if (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__clear_status) 
         | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__clr_q))) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_d[0U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_d[1U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_d[2U] = 0U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_d[3U] = 0U;
    } else if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__load_data) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_d[0U] 
            = vlSelf->kmac_reduced_tb__DOT____Vcellinp__u_kmac_reduced__msg_i
            [1U][0U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_d[1U] 
            = vlSelf->kmac_reduced_tb__DOT____Vcellinp__u_kmac_reduced__msg_i
            [1U][1U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_d[2U] 
            = vlSelf->kmac_reduced_tb__DOT____Vcellinp__u_kmac_reduced__msg_i
            [1U][2U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_d[3U] 
            = vlSelf->kmac_reduced_tb__DOT____Vcellinp__u_kmac_reduced__msg_i
            [1U][3U];
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_d[0U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_q[0U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_d[1U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_q[1U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_d[2U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_q[2U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_d[3U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_msg_unpacker_share1__DOT__data_q[3U];
    }
    if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__xor_message) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__unnamedblk1__DOT__j = 2U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0x19U;
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__clr_msgbuf = 0U;
    if ((0x40U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x20U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw)))) {
                                if (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__keccak_ack) 
                                     & (0x11U == (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))))) {
                                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__clr_msgbuf = 1U;
                                } else if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__keccak_ack) {
                                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__clr_msgbuf = 1U;
                                }
                            }
                        }
                    }
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__st_d 
                        = ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                            ? 0x33U : ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                        ? ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                            ? 0x33U
                                            : (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__keccak_ack) 
                                                & (0x11U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))))
                                                ? 0x19U
                                                : ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__keccak_ack)
                                                    ? 0x69U
                                                    : 0x7aU)))
                                        : 0x33U));
                } else {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                }
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__st_d 
                    = ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                        ? ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                            ? 0x33U : ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                        ? 0x33U : (
                                                   (1U 
                                                    & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                                    ? 
                                                   ((0x11U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))
                                                     ? 0x57U
                                                     : 0x69U)
                                                    : 0x33U)))
                        : 0x33U);
            }
        } else if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__clr_msgbuf = 1U;
                        }
                    }
                }
            }
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__st_d 
                = ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                    ? 0x33U : ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                ? ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                    ? ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                        ? ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_complete)
                                            ? 0x42U
                                            : 0x57U)
                                        : 0x33U) : 0x33U)
                                : 0x33U));
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__st_d 
                = ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                    ? ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                        ? ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                            ? 0x33U : ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                        ? 0x33U : ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_complete)
                                                    ? 0x25U
                                                    : 0x4cU)))
                        : 0x33U) : ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                     ? 0x33U : ((2U 
                                                 & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                                  ? 0x33U
                                                  : 
                                                 ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_start)
                                                   ? 0x25U
                                                   : 0x42U))
                                                 : 0x33U)));
        }
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__st_d 
            = ((0x20U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                ? ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                    ? ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                        ? ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                            ? ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                ? 0x33U : ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                            ? 0x33U
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))
                                                ? 0x4cU
                                                : 0x3cU)))
                            : 0x33U) : ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                         ? 0x33U : 
                                        ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                          ? ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                              ? (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw)
                                              : 0x33U)
                                          : 0x33U)))
                    : ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                        ? 0x33U : ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                    ? ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                        ? 0x33U : (
                                                   (1U 
                                                    & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                                    ? 
                                                   ((0x11U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))
                                                     ? 0xfU
                                                     : 
                                                    (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__process_latched) 
                                                      | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_process))
                                                      ? 0x7aU
                                                      : 0x25U))
                                                    : 0x33U))
                                    : 0x33U))) : ((0x10U 
                                                   & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                                     ? 0x33U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                                      ? 0x33U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                                       ? 0x57U
                                                       : 0x33U)))
                                                    : 0x33U)
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))
                                                       ? 
                                                      ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__keccak_complete)
                                                        ? 0x25U
                                                        : 0xfU)
                                                       : 0x33U)
                                                      : 0x33U)
                                                     : 0x33U)
                                                    : 0x33U)));
    }
    __Vfunc_lc_tx_test_true_loose__16__val = (0xfU 
                                              & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_prim_lc_sync__lc_en_o));
    __Vfunc_lc_tx_test_true_loose__16__Vfuncout = (0xaU 
                                                   != (IData)(__Vfunc_lc_tx_test_true_loose__16__val));
    if (__Vfunc_lc_tx_test_true_loose__16__Vfuncout) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__clr_sentmsg = 0U;
    if ((0x40U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x20U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw)))) {
                                if (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__keccak_ack) 
                                     & (0x11U == (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))))) {
                                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__clr_sentmsg = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                            if ((0x11U == (0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))) {
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__clr_sentmsg = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__clr_sentmsg = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw)))) {
                            if ((0x11U == (0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))) {
                                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__clr_sentmsg = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                             >> 3U)))) {
            if ((4U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x11U == (0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__clr_sentmsg = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__clr_sentmsg = 1U;
                    }
                }
            }
        }
    }
    if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__inc_sentmsg) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
            = (0x3fU & ((IData)(1U) + (0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q))));
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
            = (0x3fU & ((0x1fU & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q) 
                                  >> 5U)) - (IData)(1U)));
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
            = (0x3fU & (0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)));
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
            = (0x3fU & (0x1fU & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q) 
                                 >> 5U)));
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__entropy_req = 0U;
    if (((((((((0x278U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
               | (0x184U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
              | (0x327U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
             | (0x2f6U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
            | (0xcU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
           | (0x63U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
          | (0x390U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
         | (0x21eU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)))) {
        if ((0x278U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x184U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x327U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__entropy_req 
                        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_req;
                }
            }
        }
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_d 
        = ((0x3e0U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_d)) 
           | ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__clr_sentmsg)
               ? 0U : (0x1fU & (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__inc_sentmsg) 
                                 & (~ (IData)((0x1fU 
                                               == (0x1fU 
                                                   & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q))))))
                                 ? (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__inc_sentmsg) 
                                     & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                        >> 5U)) ? 0x1fU
                                     : (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                                 : (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q)))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_d 
        = ((0x1fU & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_d)) 
           | (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__clr_sentmsg)
                ? 0x1fU : (0x1fU & (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__inc_sentmsg) 
                                     & (0U != (0x1fU 
                                               & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q) 
                                                  >> 5U))))
                                     ? (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__inc_sentmsg) 
                                         & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                            >> 5U))
                                         ? 0U : (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                                     : ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_q) 
                                        >> 5U)))) << 5U));
    vlSelf->kmac_reduced_tb__DOT__entropy_req = ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__entropy_req) 
                                                 | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__entropy_req_hold_q));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_d_committed 
        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__cnt_d;
    vlSelf->kmac_reduced_tb__DOT__reseed_count_increment = 0U;
    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->kmac_reduced_tb__DOT__kmac_reduced_tb_state_q))) {
                vlSelf->kmac_reduced_tb__DOT__reseed_count_increment 
                    = ((IData)(vlSelf->kmac_reduced_tb__DOT__entropy_req_q) 
                       & (~ (IData)(vlSelf->kmac_reduced_tb__DOT__entropy_req)));
            }
        }
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_ack = 0U;
    if (((((((((0x278U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
               | (0x184U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
              | (0x327U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
             | (0x2f6U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
            | (0xcU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
           | (0x63U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
          | (0x390U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
         | (0x21eU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)))) {
        if ((0x278U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x184U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x327U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_expired) 
                                  & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__non_zero_wait_timer_limit))))) {
                        if (vlSelf->kmac_reduced_tb__DOT__entropy_req) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_ack = 1U;
                        }
                    }
                } else if ((0x2f6U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_ack = 0U;
                }
            }
        }
    }
    vlSelf->kmac_reduced_tb__DOT__reseed_count_d = 
        (0xffU & ((IData)(vlSelf->kmac_reduced_tb__DOT__reseed_count_increment)
                   ? ((IData)(1U) + (IData)(vlSelf->kmac_reduced_tb__DOT__reseed_count_q))
                   : (IData)(vlSelf->kmac_reduced_tb__DOT__reseed_count_q)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_req_d 
        = (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_en) 
            | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__seed_req_q)) 
           & ((~ (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_ack)) 
              | (5U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__wr_en_seed 
        = ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_req) 
           & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_ack));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_done 
        = (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_req) 
            & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_ack)) 
           & (5U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q)));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_d 
        = (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__wr_en_seed) 
            & (5U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q)))
            ? 0U : (7U & (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__wr_en_seed) 
                           & (5U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q)))
                           ? ((IData)(1U) + (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q))
                           : (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q))));
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_valid_clear = 0U;
    if (((((((((0x278U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
               | (0x184U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
              | (0x327U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
             | (0x2f6U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
            | (0xcU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
           | (0x63U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
          | (0x390U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
         | (0x21eU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)))) {
        if ((0x278U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSelf->kmac_reduced_tb__DOT__entropy_ready) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_valid_clear = 1U;
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__st_d = 0x327U;
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__st_d = 0x278U;
            }
        } else if ((0x184U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
            if (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_update) 
                 | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_consumed))) {
                if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_consumed) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_valid_clear = 1U;
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__st_d = 0xcU;
                } else {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__st_d = 0x184U;
                }
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__st_d 
                    = (((1U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__mode_q)) 
                        & ((IData)(vlSelf->kmac_reduced_tb__DOT__entropy_refresh_req) 
                           | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__threshold_hit_q)))
                        ? 0x327U : 0x184U);
            }
        } else if ((0x327U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_expired) 
                          & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__non_zero_wait_timer_limit))))) {
                if (vlSelf->kmac_reduced_tb__DOT__entropy_req) {
                    if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_done) {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_valid_clear = 1U;
                    }
                } else if (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_update) 
                            | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_consumed))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_valid_clear 
                        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_consumed;
                }
            }
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__st_d 
                = (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_expired) 
                    & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__non_zero_wait_timer_limit))
                    ? 0x63U : ((IData)(vlSelf->kmac_reduced_tb__DOT__entropy_req)
                                ? ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_done)
                                    ? 0xcU : 0x327U)
                                : 0x327U));
        } else if ((0x2f6U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
            if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_done) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__rand_valid_clear = 1U;
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__st_d = 0xcU;
            } else {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__st_d = 0x2f6U;
            }
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__st_d 
                = ((0xcU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))
                    ? 0x184U : 0x21eU);
        }
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__st_d 
            = ((0x98U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))
                ? (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)
                : 0x98U);
    }
    __Vfunc_lc_tx_test_true_loose__43__val = (0xfU 
                                              & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT____Vcellout__u_prim_lc_sync__lc_en_o) 
                                                 >> 4U));
    __Vfunc_lc_tx_test_true_loose__43__Vfuncout = (0xaU 
                                                   != (IData)(__Vfunc_lc_tx_test_true_loose__43__val));
    if (__Vfunc_lc_tx_test_true_loose__43__Vfuncout) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__st_d = 0x98U;
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en = 0U;
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__data_update = 0U;
    if (((((((((0x278U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)) 
               | (0x184U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
              | (0x327U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
             | (0x2f6U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
            | (0xcU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
           | (0x63U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
          | (0x390U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) 
         | (0x21eU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw)))) {
        if ((0x278U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x184U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en 
                    = (1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en_rand_q));
                if (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_update) 
                     | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_consumed))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en = 1U;
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__data_update = 1U;
                }
            } else if ((0x327U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__timer_expired) 
                              & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__non_zero_wait_timer_limit))))) {
                    if (vlSelf->kmac_reduced_tb__DOT__entropy_req) {
                        if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_done) {
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en = 1U;
                            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__data_update = 1U;
                        }
                    } else if (((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_update) 
                                | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_consumed))) {
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en = 1U;
                        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__data_update = 1U;
                    }
                }
            } else if ((0x2f6U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed_done) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en = 1U;
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__data_update = 1U;
                }
            } else if ((0xcU == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en 
                    = (1U & (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en_rand_q));
            } else if ((0x63U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x390U != (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en 
                        = ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_update) 
                           | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_sha3__DOT__u_keccak__DOT__keccak_rand_consumed));
                    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__data_update 
                        = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en;
                }
            }
        }
    }
    vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT____Vcellinp__u_prim_trivium__en_i 
        = ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__prng_en) 
           | (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__msg_mask_en));
    if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT____Vcellinp__u_prim_trivium__en_i) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[0U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[0U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[1U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[1U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[2U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[2U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[3U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[3U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[4U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[4U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[5U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[5U];
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[0U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[0U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[1U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[1U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[2U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[2U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[3U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[3U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[4U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[4U];
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[5U] 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[5U];
    }
    if ((5U == (IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q))) {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[5U] 
            = (0x1ffffU & vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed);
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT____Vlvbound_h06762e8a__0 
            = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__seed;
        if ((0xb0U >= (0xffU & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q) 
                                << 5U)))) {
            VL_ASSIGNSEL_WI(177,32,(0xffU & ((IData)(vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_idx_q) 
                                             << 5U)), vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed, vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT____Vlvbound_h06762e8a__0);
        }
    }
    if ((0U != (((((vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[0U] 
                    | vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[1U]) 
                   | vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[2U]) 
                  | vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[3U]) 
                 | vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[4U]) 
                | vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[5U]))) {
        if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__wr_en_seed) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[0U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[0U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[1U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[1U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[2U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[2U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[3U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[3U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[4U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[4U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[5U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_seed[5U];
        } else if (vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT____Vcellinp__u_prim_trivium__en_i) {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[0U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[0U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[1U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[1U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[2U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[2U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[3U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[3U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[4U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[4U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[5U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_update[5U];
        } else {
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[0U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[0U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[1U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[1U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[2U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[2U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[3U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[3U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[4U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[4U];
            vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[5U] 
                = vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_q[5U];
        }
    } else {
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[0U] = 0x74f1713aU;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[1U] = 0xc32d580fU;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[2U] = 0x4743b3c7U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[3U] = 0x23c5a4cfU;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[4U] = 0xc132b57U;
        vlSelf->kmac_reduced_tb__DOT__u_kmac_reduced__DOT__u_entropy__DOT__u_prim_trivium__DOT__state_d[5U] = 0x82a3U;
    }
}
