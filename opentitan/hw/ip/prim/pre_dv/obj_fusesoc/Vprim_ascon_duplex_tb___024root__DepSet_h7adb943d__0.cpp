// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprim_ascon_duplex_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vprim_ascon_duplex_tb___024root.h"

extern const VlWide<10>/*319:0*/ Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0;

VL_INLINE_OPT void Vprim_ascon_duplex_tb___024root___sequent__TOP__4(Vprim_ascon_duplex_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root___sequent__TOP__4\n"); );
    // Init
    CData/*7:0*/ __Vfunc_get_ascon_rcon__16__Vfuncout;
    CData/*3:0*/ __Vfunc_get_ascon_rcon__16__round;
    CData/*7:0*/ __Vfunc_get_ascon_rcon__16__result;
    VlWide<6>/*191:0*/ __Vtemp_h7532461e__0;
    // Body
    if (((IData)(vlSelf->rst_ni) & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__fsm_done))) {
        if (VL_UNLIKELY(((((((((((((((((((((((((((vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                                  [0U] 
                                                  != 
                                                  vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                                  [0U]) 
                                                 | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                                    [1U] 
                                                    != 
                                                    vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                                    [1U])) 
                                                | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                                   [2U] 
                                                   != 
                                                   vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                                   [2U])) 
                                               | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                                  [3U] 
                                                  != 
                                                  vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                                  [3U])) 
                                              | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                                 [4U] 
                                                 != 
                                                 vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                                 [4U])) 
                                             | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                                [5U] 
                                                != 
                                                vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                                [5U])) 
                                            | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                               [6U] 
                                               != vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                               [6U])) 
                                           | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                              [7U] 
                                              != vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                              [7U])) 
                                          | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                             [8U] != 
                                             vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                             [8U])) 
                                         | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                            [9U] != 
                                            vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                            [9U])) 
                                        | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                           [0xaU] != 
                                           vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                           [0xaU])) 
                                       | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                          [0xbU] != 
                                          vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                          [0xbU])) 
                                      | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                         [0xcU] != 
                                         vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                         [0xcU])) | 
                                     (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                      [0xdU] != vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                      [0xdU])) | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                                  [0xeU] 
                                                  != 
                                                  vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                                  [0xeU])) 
                                   | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                      [0xfU] != vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                      [0xfU])) | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                                  [0x10U] 
                                                  != 
                                                  vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                                  [0x10U])) 
                                 | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                    [0x11U] != vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                    [0x11U])) | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                                 [0x12U] 
                                                 != 
                                                 vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                                 [0x12U])) 
                               | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                  [0x13U] != vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                  [0x13U])) | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                               [0x14U] 
                                               != vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                               [0x14U])) 
                             | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                [0x15U] != vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                [0x15U])) | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                             [0x16U] 
                                             != vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                             [0x16U])) 
                           | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                              [0x17U] != vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                              [0x17U])) | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                                           [0x18U] 
                                           != vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                                           [0x18U])) 
                         | (vlSelf->prim_ascon_duplex_tb__DOT__actual_ct
                            [0x19U] != vlSelf->prim_ascon_duplex_tb__DOT__expected_ct
                            [0x19U])))) {
            VL_WRITEF("\nERROR: Mismatch between DPI-based Ascon and Implementation found.\n");
            vlSelf->test_passed_o = 0U;
            vlSelf->test_done_o = 1U;
        }
    }
    if (VL_UNLIKELY((0x64U == vlSelf->prim_ascon_duplex_tb__DOT__count_q))) {
        VL_WRITEF("\nSUCCESS: Outputs matches.\n");
        vlSelf->test_done_o = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->prim_ascon_duplex_tb__DOT__tb_state 
            = vlSelf->prim_ascon_duplex_tb__DOT__nxt_tb_state;
        vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q 
            = vlSelf->prim_ascon_duplex_tb__DOT__ad_count_d;
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[0U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[0U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[1U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[1U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[2U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[2U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[3U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[3U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[4U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[4U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[5U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[5U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[6U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[6U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[7U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[7U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[8U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[8U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[9U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[9U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d;
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__err_q 
            = (0xfU != (0x1fU & ((0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)) 
                                 + (0xfU & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q) 
                                            >> 4U)))));
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
            = (0xfU & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d_committed) 
                       >> 4U));
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
            = (0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d_committed));
        vlSelf->prim_ascon_duplex_tb__DOT__count_q 
            = vlSelf->prim_ascon_duplex_tb__DOT__count_d;
    } else {
        vlSelf->prim_ascon_duplex_tb__DOT__tb_state = 0U;
        vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q = 0U;
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[0U] 
            = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[0U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[1U] 
            = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[1U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[2U] 
            = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[2U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[3U] 
            = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[3U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[4U] 
            = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[4U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[5U] 
            = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[5U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[6U] 
            = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[6U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[7U] 
            = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[7U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[8U] 
            = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[8U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[9U] 
            = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[9U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw = 0x2aeU;
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__err_q = 0U;
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = 0xfU;
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = 0U;
        vlSelf->prim_ascon_duplex_tb__DOT__count_q = 0U;
    }
    vlSelf->prim_ascon_duplex_tb__DOT__fsm_done = 0U;
    if ((1U & (~ ((((((((0U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state) 
                        | (1U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
                       | (2U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
                      | (4U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
                     | (3U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
                    | (5U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
                   | (6U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
                  | (7U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state))))) {
        if ((8U != vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
            if ((5U != vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                if ((6U != vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                    if ((0xbU == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                        vlSelf->prim_ascon_duplex_tb__DOT__fsm_done = 1U;
                    }
                }
            }
        }
    }
    vlSelf->prim_ascon_duplex_tb__DOT__start = 0U;
    if (((((((((0U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state) 
               | (1U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
              | (2U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
             | (4U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
            | (3U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
           | (5U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
          | (6U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) 
         | (7U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state))) {
        if ((0U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
            vlSelf->prim_ascon_duplex_tb__DOT__start = 1U;
        }
        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_valid = 0U;
        if ((0U != vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
            if ((1U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                vlSelf->prim_ascon_duplex_tb__DOT__dut_input_valid = 1U;
            } else if ((2U != vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                if ((4U != vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                    if ((3U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_valid = 1U;
                    }
                }
            }
            vlSelf->prim_ascon_duplex_tb__DOT__ad_count_d 
                = vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q;
            if ((1U != vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                if ((2U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                    if ((8U > (((IData)(1U) + vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q) 
                               << 3U))) {
                        vlSelf->prim_ascon_duplex_tb__DOT__ad_count_d 
                            = ((IData)(1U) + vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q);
                    }
                }
            }
            vlSelf->prim_ascon_duplex_tb__DOT__dut_last_block_ad = 9U;
            if ((1U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
                vlSelf->prim_ascon_duplex_tb__DOT__dut_last_block_ad 
                    = ((8U > (((IData)(1U) + vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q) 
                              << 3U)) ? 9U : 6U);
            }
        } else {
            vlSelf->prim_ascon_duplex_tb__DOT__ad_count_d 
                = vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q;
            vlSelf->prim_ascon_duplex_tb__DOT__dut_last_block_ad = 9U;
        }
    } else {
        vlSelf->prim_ascon_duplex_tb__DOT__dut_input_valid = 0U;
        if ((8U == vlSelf->prim_ascon_duplex_tb__DOT__tb_state)) {
            vlSelf->prim_ascon_duplex_tb__DOT__dut_input_valid = 1U;
        }
        vlSelf->prim_ascon_duplex_tb__DOT__ad_count_d 
            = vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q;
        vlSelf->prim_ascon_duplex_tb__DOT__dut_last_block_ad = 9U;
    }
    vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_ad[2U] 
        = (IData)((((QData)((IData)(((vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad
                                      [(7U & (vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q 
                                              << 3U))] 
                                      << 0x18U) | (
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad
                                                    [
                                                    (7U 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q 
                                                         << 3U)))] 
                                                    << 0x10U) 
                                                   | ((vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad
                                                       [
                                                       (7U 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q 
                                                            << 3U)))] 
                                                       << 8U) 
                                                      | vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad
                                                      [
                                                      (7U 
                                                       & ((IData)(3U) 
                                                          + 
                                                          (vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q 
                                                           << 3U)))]))))) 
                    << 0x20U) | (QData)((IData)(((vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad
                                                  [
                                                  (7U 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q 
                                                       << 3U)))] 
                                                  << 0x18U) 
                                                 | ((vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad
                                                     [
                                                     (7U 
                                                      & ((IData)(5U) 
                                                         + 
                                                         (vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q 
                                                          << 3U)))] 
                                                     << 0x10U) 
                                                    | ((vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad
                                                        [
                                                        (7U 
                                                         & ((IData)(6U) 
                                                            + 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q 
                                                             << 3U)))] 
                                                        << 8U) 
                                                       | vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad
                                                       [
                                                       (7U 
                                                        & ((IData)(7U) 
                                                           + 
                                                           (vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q 
                                                            << 3U)))])))))));
    vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_ad[3U] 
        = (IData)(((((QData)((IData)(((vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad
                                       [(7U & (vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q 
                                               << 3U))] 
                                       << 0x18U) | 
                                      ((vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad
                                        [(7U & ((IData)(1U) 
                                                + (vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q 
                                                   << 3U)))] 
                                        << 0x10U) | 
                                       ((vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad
                                         [(7U & ((IData)(2U) 
                                                 + 
                                                 (vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q 
                                                  << 3U)))] 
                                         << 8U) | vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad
                                        [(7U & ((IData)(3U) 
                                                + (vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q 
                                                   << 3U)))]))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad
                                                   [
                                                   (7U 
                                                    & ((IData)(4U) 
                                                       + 
                                                       (vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q 
                                                        << 3U)))] 
                                                   << 0x18U) 
                                                  | ((vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad
                                                      [
                                                      (7U 
                                                       & ((IData)(5U) 
                                                          + 
                                                          (vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q 
                                                           << 3U)))] 
                                                      << 0x10U) 
                                                     | ((vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad
                                                         [
                                                         (7U 
                                                          & ((IData)(6U) 
                                                             + 
                                                             (vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q 
                                                              << 3U)))] 
                                                         << 8U) 
                                                        | vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad
                                                        [
                                                        (7U 
                                                         & ((IData)(7U) 
                                                            + 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q 
                                                             << 3U)))])))))) 
                   >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__done_o = 0U;
    if ((0x200U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x100U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__done_o = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 0U;
                    if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        } else if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 0U;
                    if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        } else if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        } else if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        } else if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                }
            } else {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 0U;
                if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                                } else if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                                    }
                                } else {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            }
                        } else if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                                } else if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                }
            }
        } else {
            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 0U;
            if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                                } else if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                                } else if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                                }
                            } else if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                                    }
                                } else {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                } else if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                } else if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                } else if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                }
            } else if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
            } else if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
            } else if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                }
            } else {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
            }
        }
        vlSelf->prim_ascon_duplex_tb__DOT__idle = 9U;
        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                      >> 8U)))) {
            if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            vlSelf->prim_ascon_duplex_tb__DOT__idle = 6U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2 = 2U;
        if ((0x100U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2 = 3U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 3U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 3U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 3U;
                                        } else {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                        }
                                    } else {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                    }
                                } else {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                }
            } else {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
            }
            vlSelf->prim_ascon_duplex_tb__DOT__dut_ready_data = 0U;
            if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            vlSelf->prim_ascon_duplex_tb__DOT__dut_ready_data = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2 = 3U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 3U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 3U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 3U;
                                        } else {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                        }
                                    } else {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                    }
                                } else {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                }
                            } else if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2 = 3U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 3U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 3U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 3U;
                                    } else {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                    }
                                } else {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                    }
                } else if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                     >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2 = 3U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 3U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 3U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 3U;
                                    } else {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                    }
                                } else {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2 = 1U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 1U;
                                        } else {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                        }
                                    } else {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                    }
                                } else {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                }
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
            }
            vlSelf->prim_ascon_duplex_tb__DOT__dut_ready_data = 0U;
        }
    } else {
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 0U;
        if ((0x100U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                } else if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                } else if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                } else if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                } else if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                }
                vlSelf->prim_ascon_duplex_tb__DOT__idle = 9U;
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2 = 2U;
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2 = 0U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 0U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 0U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 0U;
                                        } else {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                        }
                                    } else {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                    }
                                } else {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                }
            } else {
                if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                } else if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        } else if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        } else if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        }
                    } else if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            } else if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                }
                vlSelf->prim_ascon_duplex_tb__DOT__idle = 9U;
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2 = 2U;
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
            }
        } else if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                }
                vlSelf->prim_ascon_duplex_tb__DOT__idle = 9U;
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2 = 2U;
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2 = 3U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 3U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 3U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 3U;
                                    } else {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                    }
                                } else {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                }
            } else if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            } else if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            }
                            vlSelf->prim_ascon_duplex_tb__DOT__idle = 9U;
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2 = 2U;
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2 = 3U;
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 3U;
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 3U;
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 3U;
                                } else {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            vlSelf->prim_ascon_duplex_tb__DOT__idle = 9U;
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2 = 2U;
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        vlSelf->prim_ascon_duplex_tb__DOT__idle = 9U;
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2 = 2U;
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    vlSelf->prim_ascon_duplex_tb__DOT__idle = 9U;
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2 = 2U;
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                }
            } else {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                vlSelf->prim_ascon_duplex_tb__DOT__idle = 9U;
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2 = 2U;
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
            }
        } else if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
            } else if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                } else if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                } else if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                }
            } else if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                }
            } else {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
            }
            vlSelf->prim_ascon_duplex_tb__DOT__idle = 9U;
            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2 = 2U;
            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2 = 3U;
                                }
                            }
                        }
                    }
                }
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 3U;
                            }
                        }
                    }
                }
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 3U;
                                }
                            }
                        }
                    }
                }
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
                if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 3U;
                            }
                        }
                    }
                }
            } else {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
            }
        } else {
            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
            vlSelf->prim_ascon_duplex_tb__DOT__idle = 9U;
            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2 = 2U;
            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = 2U;
            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = 2U;
        }
        vlSelf->prim_ascon_duplex_tb__DOT__dut_ready_data = 0U;
        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                      >> 8U)))) {
            if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            vlSelf->prim_ascon_duplex_tb__DOT__dut_ready_data = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_dom_sep = 0U;
    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                  >> 9U)))) {
        if ((0x100U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 7U)))) {
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_dom_sep = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__perm_offset = 0U;
    if ((0x200U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x100U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__perm_offset = 6U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 1U;
                                        } else {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                                        }
                                    } else {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                                    }
                                } else {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                }
            } else if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__perm_offset = 6U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 1U;
                                    } else {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                                    }
                                } else {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                }
            } else {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
            }
        } else if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                             >> 7U)))) {
            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__perm_offset = 0U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 1U;
                                    } else {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                                    }
                                } else {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                }
            } else {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
            }
        } else {
            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
        }
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word2 = 0U;
        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                      >> 8U)))) {
            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 7U)))) {
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word2 = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x100U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__perm_offset = 0U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 1U;
                                        } else {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                                        }
                                    } else {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                                    }
                                } else {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                }
            } else {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
            }
        } else if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__perm_offset = 6U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 1U;
                                    } else {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                                    }
                                } else {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
                }
            } else {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
            }
        } else {
            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = 0U;
        }
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word2 = 0U;
    }
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word3 = 1U;
    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                  >> 9U)))) {
        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                      >> 8U)))) {
            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word3 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word1 = 1U;
    if ((0x200U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                      >> 8U)))) {
            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 7U)))) {
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word1 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_round_input = 1U;
        if ((0x100U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_round_input = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_round_input = 0U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_round_input = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                 >> 5U)))) {
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_round_input = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_round_input = 1U;
        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                      >> 8U)))) {
            if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_round_input = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_round_input = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_round_input = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q 
        = (((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
            << 4U) | (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0 = 2U;
    if ((0x200U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x100U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            if (vlSelf->prim_ascon_duplex_tb__DOT__dut_input_valid) {
                                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0 = 1U;
                                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 0U;
                                            } else {
                                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                                            }
                                        } else {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                                        }
                                    } else {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                                    }
                                } else {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                }
            } else if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0 = 1U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                                    } else {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                                    }
                                } else {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                        }
                    } else {
                        if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0 = 3U;
                                    }
                                }
                            }
                        }
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                }
            } else {
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
            }
        } else {
            if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0 = 3U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0 = 3U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                     >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0 = 3U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
        }
    } else if ((0x100U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0 = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                             >> 6U)))) {
            if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0 = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if (vlSelf->prim_ascon_duplex_tb__DOT__dut_input_valid) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0 = 1U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 0U;
                                    } else {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                                    }
                                } else {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                                }
                            } else {
                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                            }
                        } else {
                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                        }
                    } else {
                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                    }
                } else {
                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
                }
            } else {
                if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0 = 3U;
                                }
                            }
                        }
                    }
                }
                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
            }
        } else {
            if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0 = 3U;
                                }
                            }
                        }
                    }
                }
            }
            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
        }
    } else {
        if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0 = 3U;
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = 2U;
    }
    vlSelf->prim_ascon_duplex_tb__DOT__dut_read_data 
        = ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__dut_ready_data) 
           & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__dut_input_valid));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__word4_dom_sep 
        = ((0xfffffffffffffffeULL & (((QData)((IData)(
                                                      vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[9U])) 
                                      << 0x20U) | (0xfffffffffffffffeULL 
                                                   & (QData)((IData)(
                                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[8U]))))) 
           | (QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[8U] 
                                    ^ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_dom_sep))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[4U] 
        = (IData)(((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word2)
                    ? 0xdeadbeefcafef00dULL : 0ULL));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[5U] 
        = (IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word2)
                     ? 0xdeadbeefcafef00dULL : 0ULL) 
                   >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[6U] 
        = (IData)(((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word3)
                    ? 0xdeadbeefcafef00dULL : 0ULL));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[7U] 
        = (IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word3)
                     ? 0xdeadbeefcafef00dULL : 0ULL) 
                   >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter = 0U;
    if ((0x200U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x100U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            if ((0xbU 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        if ((0xbU != 
                                             (0xfU 
                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    if ((0xbU != (0xfU 
                                                  & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                 >> 5U)))) {
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    if ((0xbU != (0xfU 
                                                  & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                         >> 8U)))) {
        if ((0x80U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        if ((0xbU != 
                                             (0xfU 
                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x20U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    if ((0xbU != (0xfU 
                                                  & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x40U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    if ((0xbU != (0xfU 
                                                  & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __Vfunc_get_ascon_rcon__16__round = (0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q));
    __Vfunc_get_ascon_rcon__16__result = ((8U & (IData)(__Vfunc_get_ascon_rcon__16__round))
                                           ? ((4U & (IData)(__Vfunc_get_ascon_rcon__16__round))
                                               ? 0U
                                               : ((2U 
                                                   & (IData)(__Vfunc_get_ascon_rcon__16__round))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_get_ascon_rcon__16__round))
                                                    ? 0x4bU
                                                    : 0x5aU)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_get_ascon_rcon__16__round))
                                                    ? 0x69U
                                                    : 0x78U)))
                                           : ((4U & (IData)(__Vfunc_get_ascon_rcon__16__round))
                                               ? ((2U 
                                                   & (IData)(__Vfunc_get_ascon_rcon__16__round))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_get_ascon_rcon__16__round))
                                                    ? 0x87U
                                                    : 0x96U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_get_ascon_rcon__16__round))
                                                    ? 0xa5U
                                                    : 0xb4U))
                                               : ((2U 
                                                   & (IData)(__Vfunc_get_ascon_rcon__16__round))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_get_ascon_rcon__16__round))
                                                    ? 0xc3U
                                                    : 0xd2U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_get_ascon_rcon__16__round))
                                                    ? 0xe1U
                                                    : 0xf0U))));
    __Vfunc_get_ascon_rcon__16__Vfuncout = __Vfunc_get_ascon_rcon__16__result;
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT____Vcellinp__u_prim_ascon_round__rcon_i 
        = __Vfunc_get_ascon_rcon__16__Vfuncout;
    vlSelf->prim_ascon_duplex_tb__DOT__count_d = ((IData)(1U) 
                                                  + vlSelf->prim_ascon_duplex_tb__DOT__count_q);
    if (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter) {
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
            = (0x1fU & ((IData)(1U) + (0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q))));
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
            = (0x1fU & ((0xfU & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q) 
                                 >> 4U)) - (IData)(1U)));
    } else {
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
            = (0x1fU & (0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)));
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
            = (0x1fU & (0xfU & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q) 
                                >> 4U)));
    }
    VL_EXTEND_WI(192,8, __Vtemp_h7532461e__0, (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT____Vcellinp__u_prim_ascon_round__rcon_i));
    if (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_round_input) {
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[0U] 
            = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[0U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[1U] 
            = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[1U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[2U] 
            = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[2U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[3U] 
            = Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[3U];
    } else {
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[0U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[0U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[1U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[1U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[2U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[2U];
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[3U] 
            = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[3U];
    }
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[4U] 
        = (((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_round_input)
             ? Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[4U]
             : vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[4U]) 
           ^ __Vtemp_h7532461e__0[0U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[5U] 
        = (((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_round_input)
             ? Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[5U]
             : vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[5U]) 
           ^ __Vtemp_h7532461e__0[1U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[6U] 
        = (((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_round_input)
             ? Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[6U]
             : vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[6U]) 
           ^ __Vtemp_h7532461e__0[2U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[7U] 
        = (((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_round_input)
             ? Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[7U]
             : vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[7U]) 
           ^ __Vtemp_h7532461e__0[3U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[8U] 
        = (((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_round_input)
             ? Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[8U]
             : vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[8U]) 
           ^ __Vtemp_h7532461e__0[4U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[9U] 
        = (((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_round_input)
             ? Vprim_ascon_duplex_tb__ConstPool__CONST_hab76c978_0[9U]
             : vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[9U]) 
           ^ __Vtemp_h7532461e__0[5U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d 
        = ((0xf0U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d)) 
           | (0xfU & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter)
                       ? (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__perm_offset)
                       : (((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter) 
                           & (~ (IData)((0xfU == (0xfU 
                                                  & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q))))))
                           ? (((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter) 
                               & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                  >> 4U)) ? 0xfU : (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                           : (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d 
        = ((0xfU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d)) 
           | (0xf0U & (((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter)
                         ? ((IData)(0xfU) - (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__perm_offset))
                         : (((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter) 
                             & (0U != (0xfU & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q) 
                                               >> 4U))))
                             ? (((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter) 
                                 & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                    >> 4U)) ? 0U : (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                             : ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q) 
                                >> 4U))) << 4U)));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[0U] 
        = (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[0U])));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[1U] 
        = (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[2U])));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[2U] 
        = (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[4U])));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[3U] 
        = (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[7U])) 
            << 0x20U) | (QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[6U])));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[4U] 
        = (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[9U])) 
            << 0x20U) | (QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[8U])));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d_committed 
        = vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d;
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0U] 
        = ((0x10U & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                             [4U]) << 4U)) | ((8U & 
                                               ((IData)(
                                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                        [3U]) 
                                                << 3U)) 
                                              | ((4U 
                                                  & ((IData)(
                                                             vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                             [2U]) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(
                                                                vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                                [1U]) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                                 [0U]))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[1U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 1U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 1U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 1U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 1U)) << 1U)) 
                    | (1U & (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                     [0U] >> 1U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[2U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 2U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 2U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 2U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 2U)) << 1U)) 
                    | (1U & (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                     [0U] >> 2U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[3U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 3U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 3U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 3U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 3U)) << 1U)) 
                    | (1U & (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                     [0U] >> 3U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[4U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 4U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 4U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 4U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 4U)) << 1U)) 
                    | (1U & (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                     [0U] >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[5U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 5U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 5U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 5U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 5U)) << 1U)) 
                    | (1U & (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                     [0U] >> 5U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[6U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 6U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 6U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 6U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 6U)) << 1U)) 
                    | (1U & (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                     [0U] >> 6U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[7U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 7U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 7U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 7U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 7U)) << 1U)) 
                    | (1U & (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                     [0U] >> 7U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[8U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 8U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 8U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 8U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 8U)) << 1U)) 
                    | (1U & (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                     [0U] >> 8U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[9U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 9U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 9U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 9U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 9U)) << 1U)) 
                    | (1U & (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                     [0U] >> 9U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0xaU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0xaU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0xaU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0xaU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0xaU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0xaU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0xbU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0xbU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0xbU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0xbU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0xbU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0xbU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0xcU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0xcU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0xcU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0xcU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0xcU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0xcU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0xdU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0xdU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0xdU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0xdU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0xdU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0xdU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0xeU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0xeU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0xeU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0xeU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0xeU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0xeU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0xfU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0xfU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0xfU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0xfU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0xfU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0xfU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x10U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x10U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x10U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x10U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x10U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x10U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x11U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x11U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x11U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x11U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x11U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x11U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x12U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x12U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x12U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x12U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x12U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x12U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x13U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x13U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x13U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x13U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x13U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x13U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x14U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x14U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x14U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x14U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x14U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x14U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x15U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x15U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x15U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x15U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x15U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x15U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x16U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x16U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x16U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x16U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x16U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x16U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x17U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x17U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x17U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x17U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x17U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x17U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x18U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x18U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x18U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x18U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x18U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x18U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x19U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x19U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x19U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x19U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x19U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x19U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x1aU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x1aU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x1aU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x1aU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x1aU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x1aU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x1bU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x1bU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x1bU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x1bU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x1bU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x1bU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x1cU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x1cU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x1cU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x1cU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x1cU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x1cU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x1dU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x1dU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x1dU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x1dU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x1dU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x1dU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x1eU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x1eU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x1eU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x1eU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x1eU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x1eU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x1fU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x1fU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x1fU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x1fU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x1fU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x1fU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x20U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x20U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x20U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x20U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x20U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x20U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x21U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x21U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x21U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x21U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x21U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x21U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x22U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x22U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x22U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x22U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x22U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x22U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x23U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x23U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x23U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x23U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x23U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x23U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x24U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x24U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x24U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x24U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x24U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x24U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x25U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x25U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x25U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x25U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x25U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x25U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x26U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x26U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x26U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x26U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x26U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x26U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x27U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x27U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x27U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x27U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x27U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x27U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x28U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x28U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x28U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x28U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x28U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x28U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x29U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x29U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x29U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x29U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x29U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x29U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x2aU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x2aU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x2aU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x2aU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x2aU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x2aU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x2bU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x2bU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x2bU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x2bU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x2bU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x2bU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x2cU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x2cU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x2cU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x2cU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x2cU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x2cU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x2dU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x2dU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x2dU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x2dU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x2dU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x2dU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x2eU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x2eU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x2eU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x2eU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x2eU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x2eU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x2fU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x2fU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x2fU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x2fU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x2fU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x2fU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x30U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x30U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x30U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x30U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x30U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x30U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x31U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x31U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x31U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x31U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x31U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x31U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x32U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x32U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x32U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x32U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x32U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x32U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x33U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x33U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x33U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x33U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x33U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x33U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x34U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x34U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x34U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x34U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x34U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x34U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x35U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x35U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x35U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x35U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x35U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x35U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x36U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x36U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x36U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x36U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x36U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x36U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x37U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x37U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x37U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x37U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x37U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x37U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x38U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x38U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x38U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x38U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x38U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x38U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x39U] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x39U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x39U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x39U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x39U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x39U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x3aU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x3aU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x3aU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x3aU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x3aU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x3aU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x3bU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x3bU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x3bU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x3bU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x3bU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x3bU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x3cU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x3cU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x3cU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x3cU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x3cU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x3cU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x3dU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x3dU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x3dU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x3dU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x3dU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x3dU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x3eU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x3eU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x3eU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x3eU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x3eU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x3eU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x3fU] 
        = ((0x10U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x3fU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x3fU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x3fU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x3fU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x3fU)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0U] << 1U)) ^ 
                     (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                      [0U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                  [0U]) | ((4U & ((0xfffffffcU 
                                                   & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [0U] 
                                                      << 1U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                   [0U]))) 
                                           | ((2U & 
                                               vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                               [0U]) 
                                              | (1U 
                                                 & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                    [0U] 
                                                    ^ 
                                                    (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [0U] 
                                                     >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [1U] << 1U)) ^ 
                     (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                      [1U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                  [1U]) | ((4U & ((0xfffffffcU 
                                                   & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [1U] 
                                                      << 1U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                   [1U]))) 
                                           | ((2U & 
                                               vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                               [1U]) 
                                              | (1U 
                                                 & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                    [1U] 
                                                    ^ 
                                                    (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [1U] 
                                                     >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [2U] << 1U)) ^ 
                     (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                      [2U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                  [2U]) | ((4U & ((0xfffffffcU 
                                                   & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [2U] 
                                                      << 1U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                   [2U]))) 
                                           | ((2U & 
                                               vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                               [2U]) 
                                              | (1U 
                                                 & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                    [2U] 
                                                    ^ 
                                                    (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [2U] 
                                                     >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [3U] << 1U)) ^ 
                     (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                      [3U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                  [3U]) | ((4U & ((0xfffffffcU 
                                                   & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [3U] 
                                                      << 1U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                   [3U]))) 
                                           | ((2U & 
                                               vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                               [3U]) 
                                              | (1U 
                                                 & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                    [3U] 
                                                    ^ 
                                                    (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [3U] 
                                                     >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [4U] << 1U)) ^ 
                     (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                      [4U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                  [4U]) | ((4U & ((0xfffffffcU 
                                                   & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [4U] 
                                                      << 1U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                   [4U]))) 
                                           | ((2U & 
                                               vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                               [4U]) 
                                              | (1U 
                                                 & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                    [4U] 
                                                    ^ 
                                                    (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [4U] 
                                                     >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [5U] << 1U)) ^ 
                     (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                      [5U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                  [5U]) | ((4U & ((0xfffffffcU 
                                                   & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [5U] 
                                                      << 1U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                   [5U]))) 
                                           | ((2U & 
                                               vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                               [5U]) 
                                              | (1U 
                                                 & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                    [5U] 
                                                    ^ 
                                                    (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [5U] 
                                                     >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [6U] << 1U)) ^ 
                     (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                      [6U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                  [6U]) | ((4U & ((0xfffffffcU 
                                                   & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [6U] 
                                                      << 1U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                   [6U]))) 
                                           | ((2U & 
                                               vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                               [6U]) 
                                              | (1U 
                                                 & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                    [6U] 
                                                    ^ 
                                                    (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [6U] 
                                                     >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [7U] << 1U)) ^ 
                     (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                      [7U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                  [7U]) | ((4U & ((0xfffffffcU 
                                                   & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [7U] 
                                                      << 1U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                   [7U]))) 
                                           | ((2U & 
                                               vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                               [7U]) 
                                              | (1U 
                                                 & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                    [7U] 
                                                    ^ 
                                                    (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [7U] 
                                                     >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [8U] << 1U)) ^ 
                     (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                      [8U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                  [8U]) | ((4U & ((0xfffffffcU 
                                                   & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [8U] 
                                                      << 1U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                   [8U]))) 
                                           | ((2U & 
                                               vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                               [8U]) 
                                              | (1U 
                                                 & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                    [8U] 
                                                    ^ 
                                                    (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [8U] 
                                                     >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [9U] << 1U)) ^ 
                     (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                      [9U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                  [9U]) | ((4U & ((0xfffffffcU 
                                                   & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [9U] 
                                                      << 1U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                   [9U]))) 
                                           | ((2U & 
                                               vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                               [9U]) 
                                              | (1U 
                                                 & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                    [9U] 
                                                    ^ 
                                                    (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [9U] 
                                                     >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0xaU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0xaU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                      [0xaU]) | ((4U 
                                                  & ((0xfffffffcU 
                                                      & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                         [0xaU] 
                                                         << 1U)) 
                                                     ^ 
                                                     (0xfffffffcU 
                                                      & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [0xaU]))) 
                                                 | ((2U 
                                                     & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [0xaU]) 
                                                    | (1U 
                                                       & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                          [0xaU] 
                                                          ^ 
                                                          (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0xaU] 
                                                           >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0xbU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0xbU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                      [0xbU]) | ((4U 
                                                  & ((0xfffffffcU 
                                                      & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                         [0xbU] 
                                                         << 1U)) 
                                                     ^ 
                                                     (0xfffffffcU 
                                                      & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [0xbU]))) 
                                                 | ((2U 
                                                     & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [0xbU]) 
                                                    | (1U 
                                                       & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                          [0xbU] 
                                                          ^ 
                                                          (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0xbU] 
                                                           >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0xcU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0xcU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                      [0xcU]) | ((4U 
                                                  & ((0xfffffffcU 
                                                      & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                         [0xcU] 
                                                         << 1U)) 
                                                     ^ 
                                                     (0xfffffffcU 
                                                      & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [0xcU]))) 
                                                 | ((2U 
                                                     & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [0xcU]) 
                                                    | (1U 
                                                       & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                          [0xcU] 
                                                          ^ 
                                                          (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0xcU] 
                                                           >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0xdU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0xdU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                      [0xdU]) | ((4U 
                                                  & ((0xfffffffcU 
                                                      & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                         [0xdU] 
                                                         << 1U)) 
                                                     ^ 
                                                     (0xfffffffcU 
                                                      & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [0xdU]))) 
                                                 | ((2U 
                                                     & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [0xdU]) 
                                                    | (1U 
                                                       & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                          [0xdU] 
                                                          ^ 
                                                          (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0xdU] 
                                                           >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0xeU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0xeU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                      [0xeU]) | ((4U 
                                                  & ((0xfffffffcU 
                                                      & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                         [0xeU] 
                                                         << 1U)) 
                                                     ^ 
                                                     (0xfffffffcU 
                                                      & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [0xeU]))) 
                                                 | ((2U 
                                                     & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [0xeU]) 
                                                    | (1U 
                                                       & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                          [0xeU] 
                                                          ^ 
                                                          (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0xeU] 
                                                           >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0xfU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0xfU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                      [0xfU]) | ((4U 
                                                  & ((0xfffffffcU 
                                                      & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                         [0xfU] 
                                                         << 1U)) 
                                                     ^ 
                                                     (0xfffffffcU 
                                                      & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [0xfU]))) 
                                                 | ((2U 
                                                     & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [0xfU]) 
                                                    | (1U 
                                                       & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                          [0xfU] 
                                                          ^ 
                                                          (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0xfU] 
                                                           >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x10U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x10U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x10U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x10U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x10U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x10U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x10U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x10U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x11U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x11U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x11U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x11U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x11U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x11U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x11U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x11U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x12U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x12U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x12U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x12U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x12U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x12U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x12U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x12U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x13U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x13U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x13U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x13U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x13U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x13U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x13U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x13U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x14U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x14U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x14U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x14U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x14U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x14U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x14U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x14U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x15U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x15U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x15U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x15U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x15U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x15U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x15U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x15U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x16U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x16U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x16U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x16U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x16U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x16U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x16U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x16U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x17U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x17U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x17U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x17U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x17U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x17U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x17U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x17U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x18U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x18U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x18U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x18U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x18U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x18U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x18U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x18U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x19U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x19U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x19U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x19U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x19U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x19U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x19U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x19U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x1aU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x1aU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x1aU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x1aU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x1aU]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x1aU]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x1aU] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x1aU] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x1bU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x1bU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x1bU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x1bU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x1bU]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x1bU]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x1bU] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x1bU] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x1cU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x1cU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x1cU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x1cU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x1cU]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x1cU]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x1cU] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x1cU] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x1dU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x1dU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x1dU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x1dU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x1dU]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x1dU]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x1dU] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x1dU] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x1eU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x1eU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x1eU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x1eU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x1eU]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x1eU]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x1eU] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x1eU] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x1fU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x1fU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x1fU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x1fU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x1fU]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x1fU]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x1fU] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x1fU] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x20U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x20U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x20U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x20U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x20U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x20U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x20U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x20U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x21U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x21U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x21U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x21U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x21U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x21U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x21U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x21U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x22U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x22U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x22U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x22U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x22U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x22U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x22U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x22U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x23U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x23U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x23U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x23U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x23U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x23U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x23U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x23U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x24U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x24U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x24U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x24U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x24U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x24U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x24U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x24U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x25U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x25U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x25U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x25U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x25U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x25U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x25U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x25U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x26U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x26U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x26U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x26U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x26U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x26U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x26U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x26U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x27U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x27U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x27U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x27U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x27U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x27U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x27U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x27U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x28U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x28U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x28U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x28U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x28U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x28U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x28U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x28U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x29U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x29U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x29U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x29U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x29U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x29U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x29U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x29U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x2aU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x2aU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x2aU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x2aU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x2aU]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x2aU]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x2aU] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x2aU] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x2bU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x2bU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x2bU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x2bU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x2bU]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x2bU]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x2bU] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x2bU] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x2cU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x2cU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x2cU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x2cU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x2cU]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x2cU]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x2cU] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x2cU] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x2dU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x2dU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x2dU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x2dU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x2dU]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x2dU]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x2dU] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x2dU] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x2eU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x2eU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x2eU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x2eU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x2eU]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x2eU]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x2eU] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x2eU] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x2fU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x2fU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x2fU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x2fU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x2fU]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x2fU]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x2fU] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x2fU] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x30U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x30U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x30U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x30U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x30U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x30U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x30U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x30U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x31U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x31U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x31U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x31U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x31U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x31U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x31U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x31U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x32U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x32U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x32U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x32U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x32U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x32U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x32U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x32U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x33U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x33U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x33U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x33U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x33U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x33U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x33U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x33U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x34U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x34U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x34U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x34U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x34U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x34U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x34U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x34U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x35U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x35U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x35U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x35U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x35U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x35U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x35U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x35U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x36U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x36U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x36U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x36U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x36U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x36U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x36U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x36U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x37U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x37U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x37U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x37U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x37U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x37U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x37U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x37U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x38U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x38U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x38U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x38U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x38U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x38U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x38U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x38U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x39U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x39U]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x39U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x39U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x39U]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x39U]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x39U] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x39U] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x3aU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x3aU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x3aU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x3aU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x3aU]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x3aU]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x3aU] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x3aU] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x3bU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x3bU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x3bU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x3bU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x3bU]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x3bU]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x3bU] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x3bU] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x3cU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x3cU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x3cU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x3cU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x3cU]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x3cU]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x3cU] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x3cU] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x3dU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x3dU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x3dU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x3dU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x3dU]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x3dU]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x3dU] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x3dU] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x3eU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x3eU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x3eU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x3eU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x3eU]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x3eU]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x3eU] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x3eU] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x3fU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x3fU]))) | ((8U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x3fU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x3fU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x3fU]))) 
                                                   | ((2U 
                                                       & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x3fU]) 
                                                      | (1U 
                                                         & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x3fU] 
                                                            ^ 
                                                            (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x3fU] 
                                                             >> 4U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[1U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[2U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[3U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[4U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[5U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[6U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[7U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[8U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[9U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0xaU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0xbU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0xcU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0xdU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0xeU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0xfU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x10U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x11U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x12U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x13U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x14U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x15U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x16U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x17U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x18U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x19U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x1aU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x1bU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x1cU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x1dU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x1eU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x1fU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x20U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x21U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x22U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x23U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x24U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x25U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x26U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x27U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x28U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x29U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x2aU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x2bU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x2cU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x2dU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x2eU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x2fU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x30U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x31U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x32U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x33U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x34U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x35U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x36U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x37U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x38U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x39U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x3aU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x3bU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x3cU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x3dU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x3eU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x3fU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffffffeULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | (IData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                           [0U] >> 4U)))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffffffeULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | (IData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                           [0U] >> 3U)))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffffffeULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | (IData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                           [0U] >> 2U)))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffffffeULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | (IData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                           [0U] >> 1U)))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffffffeULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | (IData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                     [0U]))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffffffdULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [1U] >> 4U)))) 
                     << 1U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffffffdULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [1U] >> 3U)))) 
                     << 1U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffffffdULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [1U] >> 2U)))) 
                     << 1U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffffffdULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [1U] >> 1U)))) 
                     << 1U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffffffdULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [1U]))) << 1U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffffffbULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [2U] >> 4U)))) 
                     << 2U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffffffbULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [2U] >> 3U)))) 
                     << 2U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffffffbULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [2U] >> 2U)))) 
                     << 2U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffffffbULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [2U] >> 1U)))) 
                     << 2U));
}
