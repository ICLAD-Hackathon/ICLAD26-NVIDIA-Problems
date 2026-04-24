// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_sim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vascon_sim___024root.h"

extern const VlWide<10>/*319:0*/ Vascon_sim__ConstPool__CONST_hab76c978_0;

VL_ATTR_COLD void Vascon_sim___024root___settle__TOP__4(Vascon_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_sim___024root___settle__TOP__4\n"); );
    // Init
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__75__Vfuncout;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__75__tl;
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__75__payload;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__82__Vfuncout;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__82__val;
    VlWide<4>/*127:0*/ __Vfunc_swap_endianess_byte__90__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_swap_endianess_byte__90__vector_in;
    VlWide<4>/*127:0*/ __Vfunc_swap_endianess_byte__91__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_swap_endianess_byte__91__vector_in;
    VlWide<4>/*127:0*/ __Vfunc_swap_endianess_byte__92__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_swap_endianess_byte__92__vector_in;
    VlWide<4>/*127:0*/ __Vfunc_swap_endianess_byte__93__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_swap_endianess_byte__93__vector_in;
    CData/*7:0*/ __Vfunc_get_ascon_rcon__109__Vfuncout;
    CData/*3:0*/ __Vfunc_get_ascon_rcon__109__round;
    CData/*7:0*/ __Vfunc_get_ascon_rcon__109__result;
    VlWide<3>/*95:0*/ __Vtemp_hfd5fc168__0;
    VlWide<6>/*191:0*/ __Vtemp_h20ebfedd__0;
    // Body
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1dU] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1dU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1eU] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1eU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x19U] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x19U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1aU] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1aU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1eU] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1eU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1fU] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1fU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1aU] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1aU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1bU] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1bU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1fU] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1fU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x20U] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x20U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1bU] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1bU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1cU] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1cU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x20U] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x20U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x21U] = 0U;
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1cU] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1cU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1dU] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x1dU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xdU] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xdU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xeU] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xeU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[9U] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[9U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xaU] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xaU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xeU] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xeU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xfU] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xfU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xaU] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xaU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xbU] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xbU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xfU] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xfU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x10U] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x10U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xbU] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xbU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xcU] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xcU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x10U] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x10U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x11U] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x11U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xcU] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xcU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xdU] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0xdU]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x15U] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x15U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x16U] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x16U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x11U] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x11U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x12U] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x12U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x16U] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x16U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x17U] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x17U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x12U] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x12U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x13U] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x13U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x17U] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x17U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x18U] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x18U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x13U] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x13U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x14U] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x14U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x18U] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x18U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x19U] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x19U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x14U] 
        = (0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x14U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x15U] 
        = (0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[0x15U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
        = (0x28000000U | (0x87ffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U]));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
        = (0xa00000U | (0xfe1fffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U]));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
        = (0x100U | vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U]);
    vlSelf->test_passed_o = vlSelf->ascon_sim__DOT__test_passed_q;
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__duplex_done = 0U;
    if ((0x200U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x100U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__duplex_done = 1U;
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
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_ns 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs;
    vlSelf->ascon_sim__DOT____Vcellout__u_ascon__alert_tx_o 
        = (((8U & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                   << 3U)) | (4U & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                    << 1U))) | ((2U 
                                                 & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____Vcellout__u_prim_flop_alert__q_o) 
                                                      >> 1U))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__edn_ack = 0U;
    if (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__edn_ack 
                = (1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_ack)));
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__edn_ack 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_ack;
    }
    vlSelf->ascon_sim__DOT__gen_delay_logic__DOT__delay_done_q[9U] 
        = (VL_LTES_III(32, 0xbU, vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__response_counter) 
           & VL_LTES_III(32, 0x3dU, vlSelf->ascon_sim__DOT__g_ascon_tl_ul_stim__DOT__stimulus_counter));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word2 = 2U;
    if ((0x200U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x100U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word2 = 3U;
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 3U;
                                        } else {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                        }
                                    } else {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                    }
                                } else {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                }
                            } else {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
            }
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_valid = 0U;
            if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_valid = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_ready = 0U;
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_ready = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_ready = 0U;
            }
        } else {
            if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word2 = 3U;
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 3U;
                                        } else {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                        }
                                    } else {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                    }
                                } else {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                }
                            } else if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word2 = 3U;
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 3U;
                                    } else {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                    }
                                } else {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                }
                            } else {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                    }
                } else if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                     >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word2 = 3U;
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 3U;
                                    } else {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                    }
                                } else {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                }
                            } else {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word2 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
            }
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_valid = 0U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_ready = 0U;
        }
    } else {
        if ((0x100U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word2 = 0U;
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 0U;
                                        } else {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                        }
                                    } else {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                    }
                                } else {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                }
                            } else {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word2 = 3U;
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 3U;
                                    } else {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                    }
                                } else {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                }
                            } else {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                }
            } else if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word2 = 3U;
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 3U;
                                } else {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                                }
                            } else {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
            }
        } else if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word2 = 3U;
                                }
                            }
                        }
                    }
                }
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
                if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 3U;
                            }
                        }
                    }
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word4 = 2U;
        }
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_valid = 0U;
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_ready = 0U;
        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                      >> 8U)))) {
            if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_ready = 1U;
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
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__set_dom_sep = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                  >> 9U)))) {
        if ((0x100U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 7U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__set_dom_sep = 1U;
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
    vlSelf->ascon_sim__DOT__u_ascon__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o = 0U;
    if (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o 
                = (1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req)));
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_req;
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__set_round_counter = 0U;
    if ((0x200U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x100U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__set_round_counter = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__set_round_counter = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                             >> 7U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__set_round_counter = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x100U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__set_round_counter = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__set_round_counter = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_in[0U] 
        = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_q[0U] 
           ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_q[0U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_in[1U] 
        = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_q[1U] 
           ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_q[1U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_in[2U] 
        = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_q[2U] 
           ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_q[2U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_in[3U] 
        = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_q[3U] 
           ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_q[3U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
        = ((0x7fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U]) 
           | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_q[0U] 
              << 0x1fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[2U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_q[0U] 
            >> 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_q[1U] 
                      << 0x1fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[3U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_q[1U] 
            >> 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_q[2U] 
                      << 0x1fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[4U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_q[2U] 
            >> 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_q[3U] 
                      << 0x1fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[5U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_q[3U] 
            >> 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_q[0U] 
                      << 0x1fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[6U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_q[0U] 
            >> 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_q[1U] 
                      << 0x1fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[7U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_q[1U] 
            >> 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_q[2U] 
                      << 0x1fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[8U] 
        = ((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_q[2U] 
            >> 1U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_q[3U] 
                      << 0x1fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[9U] 
        = ((0x80000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[9U]) 
           | (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_q[3U] 
              >> 1U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
        = ((0xffff87ffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U]) 
           | (0xfffff800U & (0x2800U | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_reg_valid) 
                                         << 0xeU) | 
                                        ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_reg_valid) 
                                         << 0xcU)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__duplex_idle = 9U;
    if ((0x200U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                      >> 8U)))) {
            if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__duplex_idle = 6U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 0U;
        if ((0x100U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        } else if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                                }
                            } else {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                } else if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                }
            } else if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            } else if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                                }
                            } else {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        }
                    } else if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            } else if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
            }
        } else if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            } else if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            } else if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            }
                        } else if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                                }
                            } else {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                }
            } else if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                } else if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                }
            } else if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
            } else if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
            } else if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
            } else if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
            }
        } else if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
        } else if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
        } else if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                } else if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 0U;
        if ((0x100U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                } else if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                } else if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                } else if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                } else if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                }
            } else if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
            } else if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        } else if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
            }
        } else if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                }
            } else if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            } else if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                            }
                        } else {
                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                        }
                    } else {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
            }
        } else if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
            } else if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                } else if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                } else if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                }
            } else if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    } else if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                    }
                } else {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sparse_fsm_error = 1U;
        }
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_operation_storage_err 
        = (((7U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__committed_q)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__phase_q)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_ascon_variant_storage_err 
        = (((3U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__committed_q)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__phase_q)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_sideload_key_storage_err 
        = (((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__committed_q)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__phase_q)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_masked_ad_input_storage_err 
        = (((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__committed_q)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__phase_q)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_masked_msg_input_storage_err 
        = (((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__committed_q)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__phase_q)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_no_msg_storage_err 
        = (((0xfU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__committed_q)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__phase_q)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_shadowed_no_ad_storage_err 
        = (((0xfU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__committed_q)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__phase_q)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_manual_start_trigger_storage_err 
        = (((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__committed_q)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__phase_q)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__ctrl_aux_shadowed_force_data_overwrite_storage_err 
        = (((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__committed_q)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__phase_q)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_data_type_start_storage_err 
        = (((0xfffU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__committed_q)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__phase_q)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_data_type_last_storage_err 
        = (((0xfffU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__committed_q)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__phase_q)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__block_ctrl_shadowed_valid_bytes_storage_err 
        = (((0x1fU & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__shadow_q))) 
            != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__committed_q)) 
           & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__phase_q)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_new_key 
        = (1U & (~ ((0xfU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_new_q)) 
                    & (0xfU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_new_q)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__no_new_nonce 
        = (1U & (~ ((0xfU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share0_in_new_q)) 
                    & (0xfU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_share1_in_new_q)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_in[0U] 
        = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_q[0U] 
           ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_q[0U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_in[1U] 
        = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_q[1U] 
           ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_q[1U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_in[2U] 
        = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_q[2U] 
           ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_q[2U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_in[3U] 
        = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share0_in_q[3U] 
           ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_share1_in_q[3U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_valid 
        = ((0xfU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_new_q)) 
           & (0xfU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_new_q)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in[0U] 
        = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_q[0U] 
           ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_q[0U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in[1U] 
        = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_q[1U] 
           ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_q[1U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in[2U] 
        = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_q[2U] 
           ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_q[2U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in[3U] 
        = (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share0_in_q[3U] 
           ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_share1_in_q[3U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xdU] 
        = ((0x1fffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xdU]) 
           | ((IData)((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_3__q)) 
                        << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_3_qe)))) 
              << 0x1dU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xeU] 
        = ((0xc0000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xeU]) 
           | (((IData)((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_3__q)) 
                         << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_3_qe)))) 
               >> 3U) | ((IData)(((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_3__q)) 
                                    << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_3_qe))) 
                                  >> 0x20U)) << 0x1dU)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0U] 
        = (IData)((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_trigger_wipe__q)) 
                    << 0x22U) | ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_trigger_start__q)) 
                                 << 0x21U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
        = ((0xfffffff8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U]) 
           | (IData)(((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_trigger_wipe__q)) 
                        << 0x22U) | ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_trigger_start__q)) 
                                     << 0x21U)) >> 0x20U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
        = ((0xfffc01ffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U]) 
           | (0xfffffe00U & (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_ad__DOT__committed_q) 
                              << 0xeU) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_no_msg__DOT__committed_q) 
                                           << 0xaU) 
                                          | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_msg_input__DOT__committed_q) 
                                             << 9U)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
        = ((0xfffffe03U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U]) 
           | (0xfffffffcU & (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_masked_ad_input__DOT__committed_q) 
                              << 8U) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_sideload_key__DOT__committed_q) 
                                         << 7U) | (
                                                   ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_ascon_variant__DOT__committed_q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_shadowed_operation__DOT__committed_q) 
                                                      << 2U))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U] 
        = ((7U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[1U]) 
           | (0xfffffff8U & (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__committed_q) 
                              << 0x1bU) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__committed_q) 
                                            << 0xfU) 
                                           | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__committed_q) 
                                              << 3U)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U] 
        = ((0xfffffffcU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[2U]) 
           | (7U & (((6U & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_data_overwrite__DOT__committed_q) 
                            << 1U)) | (7U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_ctrl_aux_shadowed_manual_start_trigger__DOT__committed_q))) 
                    | ((7U & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_valid_bytes__DOT__committed_q) 
                              >> 5U)) | ((7U & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_last__DOT__committed_q) 
                                                >> 0x11U)) 
                                         | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_block_ctrl_shadowed_data_type_start__DOT__committed_q) 
                                            >> 0x1dU))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xaU] 
        = ((0x3ffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xaU]) 
           | ((IData)((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_0__q)) 
                        << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_0_qe)))) 
              << 0x1aU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xbU] 
        = (((IData)((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_0__q)) 
                      << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_0_qe)))) 
            >> 6U) | (((IData)((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_1__q)) 
                                 << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_1_qe)))) 
                       << 0x1bU) | ((IData)(((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_0__q)) 
                                               << 1U) 
                                              | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_0_qe))) 
                                             >> 0x20U)) 
                                    << 0x1aU)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xcU] 
        = (((0x3ffffffU & ((IData)((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_1__q)) 
                                     << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_1_qe)))) 
                           >> 5U)) | ((IData)(((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_0__q)) 
                                                 << 1U) 
                                                | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_0_qe))) 
                                               >> 0x20U)) 
                                      >> 6U)) | (((IData)(
                                                          (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_2__q)) 
                                                            << 1U) 
                                                           | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_2_qe)))) 
                                                  << 0x1cU) 
                                                 | ((0x4000000U 
                                                     & ((IData)(
                                                                (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_1__q)) 
                                                                  << 1U) 
                                                                 | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_1_qe)))) 
                                                        >> 5U)) 
                                                    | ((IData)(
                                                               ((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_1__q)) 
                                                                  << 1U) 
                                                                 | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_1_qe))) 
                                                                >> 0x20U)) 
                                                       << 0x1bU))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xdU] 
        = ((0xe0000000U & vlSelf->ascon_sim__DOT__u_ascon__DOT__reg2hw[0xdU]) 
           | ((0x3ffffffU & (((IData)((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_2__q)) 
                                        << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_2_qe)))) 
                              >> 4U) | ((IData)(((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_1__q)) 
                                                   << 1U) 
                                                  | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_1_qe))) 
                                                 >> 0x20U)) 
                                        >> 5U))) | 
              ((0xc000000U & ((IData)((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_2__q)) 
                                        << 1U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_2_qe)))) 
                              >> 4U)) | ((IData)(((
                                                   ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT____Vcellout__u_tag_in_2__q)) 
                                                    << 1U) 
                                                   | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tag_in_2_qe))) 
                                                  >> 0x20U)) 
                                         << 0x1cU))));
    __Vtemp_hfd5fc168__0[1U] = (((IData)((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
                                           << 0x3fU) 
                                          | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q)) 
                                              << 0x3cU) 
                                             | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                                 << 0x37U) 
                                                | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                    << 0x2fU) 
                                                   | ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                      << 0xeU)))))) 
                                 >> 0x1eU) | ((IData)(
                                                      ((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
                                                         << 0x3fU) 
                                                        | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q)) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                                               << 0x37U) 
                                                              | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                                  << 0x2fU) 
                                                                 | ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                                    << 0xeU))))) 
                                                       >> 0x20U)) 
                                              << 2U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[0U] 
        = (((IData)((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
                      << 0x3fU) | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q)) 
                                    << 0x3cU) | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                                  << 0x37U) 
                                                 | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                     << 0x2fU) 
                                                    | ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                       << 0xeU)))))) 
            << 2U) | (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__error_q) 
                       << 1U) | (1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
                                          | (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__rst_done)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[1U] 
        = __Vtemp_hfd5fc168__0[1U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[2U] 
        = ((IData)(((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
                      << 0x3fU) | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rspop_q)) 
                                    << 0x3cU) | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                                                  << 0x37U) 
                                                 | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                                     << 0x2fU) 
                                                    | ((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                       << 0xeU))))) 
                    >> 0x20U)) >> 0x1eU);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[0U] 
        = (0xffff0003U & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[0U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_round_input = 1U;
    if ((0x200U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x100U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_round_input = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_round_input = 0U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_round_input = 0U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                 >> 5U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_round_input = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                         >> 8U)))) {
        if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_round_input = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_round_input = 0U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_round_input = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q 
        = (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
            << 4U) | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_p_edge 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq) 
           ^ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_n_edge 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq) 
           ^ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_p_edge 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pq) 
           ^ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_n_edge 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nq) 
           ^ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) 
           ^ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) 
           ^ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_nd));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_ready 
        = ((0xfU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_read_q)) 
           | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__track_reset_tag_q));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_p_edge 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq) 
           ^ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_n_edge 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq) 
           ^ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_p_edge 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pq) 
           ^ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_n_edge 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nq) 
           ^ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) 
           ^ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) 
           ^ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_nd));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_d 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_q;
    if (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_fsm_cs) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_d = 1U;
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__src_req_d = 0U;
    }
    vlSelf->test_done_o = vlSelf->ascon_sim__DOT__gen_delay_logic__DOT__delay_done_q
        [0U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__word4_dom_sep 
        = ((0xfffffffffffffffeULL & (((QData)((IData)(
                                                      vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[9U])) 
                                      << 0x20U) | (0xfffffffffffffffeULL 
                                                   & (QData)((IData)(
                                                                     vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[8U]))))) 
           | (QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[8U] 
                                    ^ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__set_dom_sep))))));
    vlSelf->ascon_sim__DOT____Vcellinp__u_ascon__edn_i 
        = (0x100000000ULL | (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o)) 
                              << 0x21U) | (QData)((IData)(vlSelf->ascon_sim__DOT__entropy_q))));
    __Vfunc_swap_endianess_byte__92__vector_in[0U] 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_in[0U];
    __Vfunc_swap_endianess_byte__92__vector_in[1U] 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_in[1U];
    __Vfunc_swap_endianess_byte__92__vector_in[2U] 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_in[2U];
    __Vfunc_swap_endianess_byte__92__vector_in[3U] 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__nonce_in[3U];
    vlSelf->__Vfunc_swap_endianess_byte__92__vector_out[3U] 
        = ((0xffU & vlSelf->__Vfunc_swap_endianess_byte__92__vector_out[3U]) 
           | (0xffffff00U & ((__Vfunc_swap_endianess_byte__92__vector_in[0U] 
                              << 0x18U) | ((0xff0000U 
                                            & (__Vfunc_swap_endianess_byte__92__vector_in[0U] 
                                               << 8U)) 
                                           | (0xff00U 
                                              & (__Vfunc_swap_endianess_byte__92__vector_in[0U] 
                                                 >> 8U))))));
    vlSelf->__Vfunc_swap_endianess_byte__92__vector_out[2U] 
        = ((0xffffU & vlSelf->__Vfunc_swap_endianess_byte__92__vector_out[2U]) 
           | (0xffff0000U & ((__Vfunc_swap_endianess_byte__92__vector_in[1U] 
                              << 0x18U) | (0xff0000U 
                                           & (__Vfunc_swap_endianess_byte__92__vector_in[1U] 
                                              << 8U)))));
    vlSelf->__Vfunc_swap_endianess_byte__92__vector_out[3U] 
        = ((0xffffff00U & vlSelf->__Vfunc_swap_endianess_byte__92__vector_out[3U]) 
           | (0xffffU & (__Vfunc_swap_endianess_byte__92__vector_in[0U] 
                         >> 0x18U)));
    vlSelf->__Vfunc_swap_endianess_byte__92__vector_out[1U] 
        = ((0xffffffU & vlSelf->__Vfunc_swap_endianess_byte__92__vector_out[1U]) 
           | (__Vfunc_swap_endianess_byte__92__vector_in[2U] 
              << 0x18U));
    vlSelf->__Vfunc_swap_endianess_byte__92__vector_out[2U] 
        = ((0xffff0000U & vlSelf->__Vfunc_swap_endianess_byte__92__vector_out[2U]) 
           | (0xffffffU & ((0xff00U & (__Vfunc_swap_endianess_byte__92__vector_in[1U] 
                                       >> 8U)) | (__Vfunc_swap_endianess_byte__92__vector_in[1U] 
                                                  >> 0x18U))));
    vlSelf->__Vfunc_swap_endianess_byte__92__vector_out[1U] 
        = ((0xff000000U & vlSelf->__Vfunc_swap_endianess_byte__92__vector_out[1U]) 
           | ((0xff0000U & (__Vfunc_swap_endianess_byte__92__vector_in[2U] 
                            << 8U)) | ((0xff00U & (
                                                   __Vfunc_swap_endianess_byte__92__vector_in[2U] 
                                                   >> 8U)) 
                                       | (__Vfunc_swap_endianess_byte__92__vector_in[2U] 
                                          >> 0x18U))));
    vlSelf->__Vfunc_swap_endianess_byte__92__vector_out[0U] 
        = ((0xffU & vlSelf->__Vfunc_swap_endianess_byte__92__vector_out[0U]) 
           | (0xffffff00U & ((__Vfunc_swap_endianess_byte__92__vector_in[3U] 
                              << 0x18U) | ((0xff0000U 
                                            & (__Vfunc_swap_endianess_byte__92__vector_in[3U] 
                                               << 8U)) 
                                           | (0xff00U 
                                              & (__Vfunc_swap_endianess_byte__92__vector_in[3U] 
                                                 >> 8U))))));
    vlSelf->__Vfunc_swap_endianess_byte__92__vector_out[0U] 
        = ((0xffffff00U & vlSelf->__Vfunc_swap_endianess_byte__92__vector_out[0U]) 
           | (__Vfunc_swap_endianess_byte__92__vector_in[3U] 
              >> 0x18U));
    __Vfunc_swap_endianess_byte__92__Vfuncout[0U] = 
        vlSelf->__Vfunc_swap_endianess_byte__92__vector_out[0U];
    __Vfunc_swap_endianess_byte__92__Vfuncout[1U] = 
        vlSelf->__Vfunc_swap_endianess_byte__92__vector_out[1U];
    __Vfunc_swap_endianess_byte__92__Vfuncout[2U] = 
        vlSelf->__Vfunc_swap_endianess_byte__92__vector_out[2U];
    __Vfunc_swap_endianess_byte__92__Vfuncout[3U] = 
        vlSelf->__Vfunc_swap_endianess_byte__92__vector_out[3U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__nonce_i[0U] 
        = __Vfunc_swap_endianess_byte__92__Vfuncout[0U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__nonce_i[1U] 
        = __Vfunc_swap_endianess_byte__92__Vfuncout[1U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__nonce_i[2U] 
        = __Vfunc_swap_endianess_byte__92__Vfuncout[2U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__nonce_i[3U] 
        = __Vfunc_swap_endianess_byte__92__Vfuncout[3U];
    __Vfunc_mubi4_test_true_strict__82__val = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__duplex_idle;
    __Vfunc_mubi4_test_true_strict__82__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__82__val));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U] 
        = ((0xf9ffffffU & vlSelf->ascon_sim__DOT__u_ascon__DOT__hw2reg[1U]) 
           | (0xfe000000U & (0x2000000U | ((IData)(__Vfunc_mubi4_test_true_strict__82__Vfuncout) 
                                           << 0x1aU))));
    __Vfunc_swap_endianess_byte__93__vector_in[0U] 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_in[0U];
    __Vfunc_swap_endianess_byte__93__vector_in[1U] 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_in[1U];
    __Vfunc_swap_endianess_byte__93__vector_in[2U] 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_in[2U];
    __Vfunc_swap_endianess_byte__93__vector_in[3U] 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__key_in[3U];
    vlSelf->__Vfunc_swap_endianess_byte__93__vector_out[3U] 
        = ((0xffU & vlSelf->__Vfunc_swap_endianess_byte__93__vector_out[3U]) 
           | (0xffffff00U & ((__Vfunc_swap_endianess_byte__93__vector_in[0U] 
                              << 0x18U) | ((0xff0000U 
                                            & (__Vfunc_swap_endianess_byte__93__vector_in[0U] 
                                               << 8U)) 
                                           | (0xff00U 
                                              & (__Vfunc_swap_endianess_byte__93__vector_in[0U] 
                                                 >> 8U))))));
    vlSelf->__Vfunc_swap_endianess_byte__93__vector_out[2U] 
        = ((0xffffU & vlSelf->__Vfunc_swap_endianess_byte__93__vector_out[2U]) 
           | (0xffff0000U & ((__Vfunc_swap_endianess_byte__93__vector_in[1U] 
                              << 0x18U) | (0xff0000U 
                                           & (__Vfunc_swap_endianess_byte__93__vector_in[1U] 
                                              << 8U)))));
    vlSelf->__Vfunc_swap_endianess_byte__93__vector_out[3U] 
        = ((0xffffff00U & vlSelf->__Vfunc_swap_endianess_byte__93__vector_out[3U]) 
           | (0xffffU & (__Vfunc_swap_endianess_byte__93__vector_in[0U] 
                         >> 0x18U)));
    vlSelf->__Vfunc_swap_endianess_byte__93__vector_out[1U] 
        = ((0xffffffU & vlSelf->__Vfunc_swap_endianess_byte__93__vector_out[1U]) 
           | (__Vfunc_swap_endianess_byte__93__vector_in[2U] 
              << 0x18U));
    vlSelf->__Vfunc_swap_endianess_byte__93__vector_out[2U] 
        = ((0xffff0000U & vlSelf->__Vfunc_swap_endianess_byte__93__vector_out[2U]) 
           | (0xffffffU & ((0xff00U & (__Vfunc_swap_endianess_byte__93__vector_in[1U] 
                                       >> 8U)) | (__Vfunc_swap_endianess_byte__93__vector_in[1U] 
                                                  >> 0x18U))));
    vlSelf->__Vfunc_swap_endianess_byte__93__vector_out[1U] 
        = ((0xff000000U & vlSelf->__Vfunc_swap_endianess_byte__93__vector_out[1U]) 
           | ((0xff0000U & (__Vfunc_swap_endianess_byte__93__vector_in[2U] 
                            << 8U)) | ((0xff00U & (
                                                   __Vfunc_swap_endianess_byte__93__vector_in[2U] 
                                                   >> 8U)) 
                                       | (__Vfunc_swap_endianess_byte__93__vector_in[2U] 
                                          >> 0x18U))));
    vlSelf->__Vfunc_swap_endianess_byte__93__vector_out[0U] 
        = ((0xffU & vlSelf->__Vfunc_swap_endianess_byte__93__vector_out[0U]) 
           | (0xffffff00U & ((__Vfunc_swap_endianess_byte__93__vector_in[3U] 
                              << 0x18U) | ((0xff0000U 
                                            & (__Vfunc_swap_endianess_byte__93__vector_in[3U] 
                                               << 8U)) 
                                           | (0xff00U 
                                              & (__Vfunc_swap_endianess_byte__93__vector_in[3U] 
                                                 >> 8U))))));
    vlSelf->__Vfunc_swap_endianess_byte__93__vector_out[0U] 
        = ((0xffffff00U & vlSelf->__Vfunc_swap_endianess_byte__93__vector_out[0U]) 
           | (__Vfunc_swap_endianess_byte__93__vector_in[3U] 
              >> 0x18U));
    __Vfunc_swap_endianess_byte__93__Vfuncout[0U] = 
        vlSelf->__Vfunc_swap_endianess_byte__93__vector_out[0U];
    __Vfunc_swap_endianess_byte__93__Vfuncout[1U] = 
        vlSelf->__Vfunc_swap_endianess_byte__93__vector_out[1U];
    __Vfunc_swap_endianess_byte__93__Vfuncout[2U] = 
        vlSelf->__Vfunc_swap_endianess_byte__93__vector_out[2U];
    __Vfunc_swap_endianess_byte__93__Vfuncout[3U] = 
        vlSelf->__Vfunc_swap_endianess_byte__93__vector_out[3U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[0U] 
        = __Vfunc_swap_endianess_byte__93__Vfuncout[0U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[1U] 
        = __Vfunc_swap_endianess_byte__93__Vfuncout[1U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[2U] 
        = __Vfunc_swap_endianess_byte__93__Vfuncout[2U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[3U] 
        = __Vfunc_swap_endianess_byte__93__Vfuncout[3U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_read 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_ready) 
           & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_valid));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word0 = 2U;
    if ((0x200U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x100U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                            if (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_valid) {
                                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word0 = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word0 = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word0 = 3U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word0 = 3U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word0 = 3U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                 >> 5U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word0 = 3U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x100U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word0 = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                             >> 6U)))) {
            if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word0 = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_valid) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word0 = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word0 = 3U;
                            }
                        }
                    }
                }
            }
        } else if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word0 = 3U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_mux_word0 = 3U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                  >> 9U)))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                      >> 8U)))) {
            if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                        if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            if (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in_valid) {
                                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_valid = 1U;
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
    }
    __Vfunc_swap_endianess_byte__91__vector_in[0U] 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in[0U];
    __Vfunc_swap_endianess_byte__91__vector_in[1U] 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in[1U];
    __Vfunc_swap_endianess_byte__91__vector_in[2U] 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in[2U];
    __Vfunc_swap_endianess_byte__91__vector_in[3U] 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__data_in[3U];
    vlSelf->__Vfunc_swap_endianess_byte__91__vector_out[3U] 
        = ((0xffU & vlSelf->__Vfunc_swap_endianess_byte__91__vector_out[3U]) 
           | (0xffffff00U & ((__Vfunc_swap_endianess_byte__91__vector_in[0U] 
                              << 0x18U) | ((0xff0000U 
                                            & (__Vfunc_swap_endianess_byte__91__vector_in[0U] 
                                               << 8U)) 
                                           | (0xff00U 
                                              & (__Vfunc_swap_endianess_byte__91__vector_in[0U] 
                                                 >> 8U))))));
    vlSelf->__Vfunc_swap_endianess_byte__91__vector_out[2U] 
        = ((0xffffU & vlSelf->__Vfunc_swap_endianess_byte__91__vector_out[2U]) 
           | (0xffff0000U & ((__Vfunc_swap_endianess_byte__91__vector_in[1U] 
                              << 0x18U) | (0xff0000U 
                                           & (__Vfunc_swap_endianess_byte__91__vector_in[1U] 
                                              << 8U)))));
    vlSelf->__Vfunc_swap_endianess_byte__91__vector_out[3U] 
        = ((0xffffff00U & vlSelf->__Vfunc_swap_endianess_byte__91__vector_out[3U]) 
           | (0xffffU & (__Vfunc_swap_endianess_byte__91__vector_in[0U] 
                         >> 0x18U)));
    vlSelf->__Vfunc_swap_endianess_byte__91__vector_out[1U] 
        = ((0xffffffU & vlSelf->__Vfunc_swap_endianess_byte__91__vector_out[1U]) 
           | (__Vfunc_swap_endianess_byte__91__vector_in[2U] 
              << 0x18U));
    vlSelf->__Vfunc_swap_endianess_byte__91__vector_out[2U] 
        = ((0xffff0000U & vlSelf->__Vfunc_swap_endianess_byte__91__vector_out[2U]) 
           | (0xffffffU & ((0xff00U & (__Vfunc_swap_endianess_byte__91__vector_in[1U] 
                                       >> 8U)) | (__Vfunc_swap_endianess_byte__91__vector_in[1U] 
                                                  >> 0x18U))));
    vlSelf->__Vfunc_swap_endianess_byte__91__vector_out[1U] 
        = ((0xff000000U & vlSelf->__Vfunc_swap_endianess_byte__91__vector_out[1U]) 
           | ((0xff0000U & (__Vfunc_swap_endianess_byte__91__vector_in[2U] 
                            << 8U)) | ((0xff00U & (
                                                   __Vfunc_swap_endianess_byte__91__vector_in[2U] 
                                                   >> 8U)) 
                                       | (__Vfunc_swap_endianess_byte__91__vector_in[2U] 
                                          >> 0x18U))));
    vlSelf->__Vfunc_swap_endianess_byte__91__vector_out[0U] 
        = ((0xffU & vlSelf->__Vfunc_swap_endianess_byte__91__vector_out[0U]) 
           | (0xffffff00U & ((__Vfunc_swap_endianess_byte__91__vector_in[3U] 
                              << 0x18U) | ((0xff0000U 
                                            & (__Vfunc_swap_endianess_byte__91__vector_in[3U] 
                                               << 8U)) 
                                           | (0xff00U 
                                              & (__Vfunc_swap_endianess_byte__91__vector_in[3U] 
                                                 >> 8U))))));
    vlSelf->__Vfunc_swap_endianess_byte__91__vector_out[0U] 
        = ((0xffffff00U & vlSelf->__Vfunc_swap_endianess_byte__91__vector_out[0U]) 
           | (__Vfunc_swap_endianess_byte__91__vector_in[3U] 
              >> 0x18U));
    __Vfunc_swap_endianess_byte__91__Vfuncout[0U] = 
        vlSelf->__Vfunc_swap_endianess_byte__91__vector_out[0U];
    __Vfunc_swap_endianess_byte__91__Vfuncout[1U] = 
        vlSelf->__Vfunc_swap_endianess_byte__91__vector_out[1U];
    __Vfunc_swap_endianess_byte__91__Vfuncout[2U] = 
        vlSelf->__Vfunc_swap_endianess_byte__91__vector_out[2U];
    __Vfunc_swap_endianess_byte__91__Vfuncout[3U] = 
        vlSelf->__Vfunc_swap_endianess_byte__91__vector_out[3U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__data_in_i[0U] 
        = __Vfunc_swap_endianess_byte__91__Vfuncout[0U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__data_in_i[1U] 
        = __Vfunc_swap_endianess_byte__91__Vfuncout[1U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__data_in_i[2U] 
        = __Vfunc_swap_endianess_byte__91__Vfuncout[2U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__data_in_i[3U] 
        = __Vfunc_swap_endianess_byte__91__Vfuncout[3U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = (QData)((IData)(((vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                            << 0x10U) | (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                         >> 0x10U))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x7effffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2606bd25ULL 
                                                  & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x7dffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xdeba8050ULL 
                                                  & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x21U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x7bffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x413d89aaULL 
                                                  & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x22U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x77ffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x31234ed1ULL 
                                                  & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x23U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x6fffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0xc2c1323bULL 
                                                  & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x24U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x5fffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x2dcc624cULL 
                                                  & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x25U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = ((0x3fffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x98505586ULL 
                                                  & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o))))) 
              << 0x26U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
        = (0x2a00000000ULL ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o);
    __Vfunc_extract_d2h_rsp_intg__75__tl[0U] = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[0U];
    __Vfunc_extract_d2h_rsp_intg__75__tl[1U] = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[1U];
    __Vfunc_extract_d2h_rsp_intg__75__tl[2U] = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[2U];
    __Vfunc_extract_d2h_rsp_intg__75__payload = ((0x38U 
                                                  & ((__Vfunc_extract_d2h_rsp_intg__75__tl[2U] 
                                                      << 5U) 
                                                     | (0x18U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__75__tl[1U] 
                                                           >> 0x1bU)))) 
                                                 | ((6U 
                                                     & (__Vfunc_extract_d2h_rsp_intg__75__tl[1U] 
                                                        >> 0x18U)) 
                                                    | (1U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__75__tl[0U] 
                                                          >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__75__Vfuncout = __Vfunc_extract_d2h_rsp_intg__75__payload;
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__75__Vfuncout;
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__inc_round_counter = 0U;
    if ((0x200U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x100U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                            if ((0xbU 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__inc_round_counter = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        if ((0xbU != 
                                             (0xfU 
                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__inc_round_counter = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    if ((0xbU != (0xfU 
                                                  & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__inc_round_counter = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                 >> 5U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    if ((0xbU != (0xfU 
                                                  & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__inc_round_counter = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                         >> 8U)))) {
        if ((0x80U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                        if ((0xbU != 
                                             (0xfU 
                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                                            vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__inc_round_counter = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x20U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                    if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    if ((0xbU != (0xfU 
                                                  & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__inc_round_counter = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x40U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                        if ((4U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw))) {
                            if ((1U & (~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw)))) {
                                    if ((0xbU != (0xfU 
                                                  & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)))) {
                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__inc_round_counter = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __Vfunc_get_ascon_rcon__109__round = (0xfU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q));
    __Vfunc_get_ascon_rcon__109__result = ((8U & (IData)(__Vfunc_get_ascon_rcon__109__round))
                                            ? ((4U 
                                                & (IData)(__Vfunc_get_ascon_rcon__109__round))
                                                ? 0U
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_get_ascon_rcon__109__round))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_get_ascon_rcon__109__round))
                                                     ? 0x4bU
                                                     : 0x5aU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_get_ascon_rcon__109__round))
                                                     ? 0x69U
                                                     : 0x78U)))
                                            : ((4U 
                                                & (IData)(__Vfunc_get_ascon_rcon__109__round))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_get_ascon_rcon__109__round))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_get_ascon_rcon__109__round))
                                                     ? 0x87U
                                                     : 0x96U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_get_ascon_rcon__109__round))
                                                     ? 0xa5U
                                                     : 0xb4U))
                                                : (
                                                   (2U 
                                                    & (IData)(__Vfunc_get_ascon_rcon__109__round))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_get_ascon_rcon__109__round))
                                                     ? 0xc3U
                                                     : 0xd2U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_get_ascon_rcon__109__round))
                                                     ? 0xe1U
                                                     : 0xf0U))));
    __Vfunc_get_ascon_rcon__109__Vfuncout = __Vfunc_get_ascon_rcon__109__result;
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT____Vcellinp__u_prim_ascon_round__rcon_i 
        = __Vfunc_get_ascon_rcon__109__Vfuncout;
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q;
    if ((0U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok)))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d = 1U;
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q;
        }
        vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o = 0U;
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
            if (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_p_edge) 
                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_n_edge))) {
                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd)))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o = 1U;
                }
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 0U;
                if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 1U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 0U;
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 0U;
        }
    } else if ((1U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d 
            = ((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok)) 
               & ((1U > (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q)) 
                  & ((IData)(1U) + (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q))));
        vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q;
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d = 0U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o = 0U;
            if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd)))) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o = 1U;
            }
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 0U;
            if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 1U;
            }
        } else {
            if ((1U <= (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q))) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d = 2U;
            }
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o = 0U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 0U;
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q;
        if ((2U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))) {
            if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d = 0U;
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o = 0U;
                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd)))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o = 1U;
                }
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 0U;
                if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 1U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o = 0U;
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 0U;
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o = 0U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 0U;
        }
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 0U;
    if ((0U != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))) {
        if ((1U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok)))) {
                if ((1U <= (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 1U;
                }
            }
        } else if ((2U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 1U;
            if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 0U;
            }
        }
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q;
    if ((0U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))) {
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd;
        }
    } else if ((1U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))) {
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd;
        }
    } else if ((2U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))) {
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd;
        }
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q;
    if ((0U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok)))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d = 1U;
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q;
        }
        vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o = 0U;
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
            if (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_p_edge) 
                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_n_edge))) {
                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd)))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o = 1U;
                }
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 0U;
                if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 1U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 0U;
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 0U;
        }
    } else if ((1U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_d 
            = ((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok)) 
               & ((1U > (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q)) 
                  & ((IData)(1U) + (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q))));
        vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q;
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d = 0U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o = 0U;
            if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd)))) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o = 1U;
            }
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 0U;
            if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 1U;
            }
        } else {
            if ((1U <= (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q))) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d = 2U;
            }
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o = 0U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 0U;
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q;
        if ((2U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))) {
            if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_d = 0U;
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o = 0U;
                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd)))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o = 1U;
                }
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 0U;
                if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 1U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o = 0U;
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 0U;
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__fall_o = 0U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__rise_o = 0U;
        }
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 0U;
    if ((0U != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))) {
        if ((1U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok)))) {
                if ((1U <= (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__skew_cnt_q))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 1U;
                }
            }
        } else if ((2U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 1U;
            if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 0U;
            }
        }
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_q;
    if ((0U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))) {
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd;
        }
    } else if ((1U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))) {
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd;
        }
    } else if ((2U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__state_q))) {
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__level_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ack__DOT__gen_async__DOT__diff_pd;
        }
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_we 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_valid) 
           & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_ready));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q;
    if ((0U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok)))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d = 1U;
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q;
        }
        vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q;
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd;
        }
    } else if ((1U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d 
            = ((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok)) 
               & ((1U > (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q)) 
                  & ((IData)(1U) + (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q))));
        vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q;
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d = 0U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd;
        } else {
            if ((1U <= (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q))) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d = 2U;
            }
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q;
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q;
        if ((2U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))) {
            if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d = 0U;
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
                    = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q;
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
                    = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd;
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
                    = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q;
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q;
        }
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 0U;
    if ((0U != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))) {
        if ((1U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok)))) {
                if ((1U <= (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 1U;
                }
            }
        } else if ((2U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 1U;
            if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 0U;
            }
        }
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o = 0U;
    if ((0U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))) {
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
            if (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_p_edge) 
                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_n_edge))) {
                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd)))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o = 1U;
                }
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 0U;
                if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 1U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 0U;
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 0U;
        }
    } else if ((1U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))) {
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
            if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd)))) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o = 1U;
            }
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 0U;
            if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 1U;
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 0U;
        }
    } else if ((2U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))) {
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
            if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd)))) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o = 1U;
            }
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 0U;
            if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 1U;
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 0U;
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 0U;
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q;
    if ((0U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok)))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d = 1U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d = 1U;
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q;
        }
        vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q;
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd;
        }
    } else if ((1U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_d 
            = ((~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok)) 
               & ((1U > (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q)) 
                  & ((IData)(1U) + (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q))));
        vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q;
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d = 0U;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q;
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd;
        } else {
            if ((1U <= (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q))) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d = 2U;
            }
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q;
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q;
        if ((2U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))) {
            if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_d = 0U;
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
                    = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q;
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
                    = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd;
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
                    = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q;
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_d 
                = vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__level_q;
        }
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 0U;
    if ((0U != (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))) {
        if ((1U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok)))) {
                if ((1U <= (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__skew_cnt_q))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 1U;
                }
            }
        } else if ((2U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 1U;
            if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 0U;
            }
        }
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o = 0U;
    if ((0U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))) {
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
            if (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_p_edge) 
                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_n_edge))) {
                if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd)))) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o = 1U;
                }
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 0U;
                if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) {
                    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 1U;
                }
            } else {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 0U;
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 0U;
        }
    } else if ((1U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))) {
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
            if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd)))) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o = 1U;
            }
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 0U;
            if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 1U;
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 0U;
        }
    } else if ((2U == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__state_q))) {
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
            if ((1U & (~ (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd)))) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o = 1U;
            }
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 0U;
            if (vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__gen_async__DOT__diff_pd) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 1U;
            }
        } else {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 0U;
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o = 0U;
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT____Vcellout__u_prim_sync_reqack_data__dst_req_o) 
           & (IData)((vlSelf->ascon_sim__DOT____Vcellinp__u_ascon__edn_i 
                      >> 0x21U)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d 
        = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_q;
    if (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d 
                = (1U & (~ (IData)((vlSelf->ascon_sim__DOT____Vcellinp__u_ascon__edn_i 
                                    >> 0x21U))));
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_ack_d 
            = (1U & (IData)((vlSelf->ascon_sim__DOT____Vcellinp__u_ascon__edn_i 
                             >> 0x21U)));
    }
    __Vfunc_swap_endianess_byte__90__vector_in[0U] 
        = ((IData)((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[9U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[8U])))) 
           ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[0U]);
    __Vfunc_swap_endianess_byte__90__vector_in[1U] 
        = ((IData)(((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[9U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[8U]))) 
                    >> 0x20U)) ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[1U]);
    __Vfunc_swap_endianess_byte__90__vector_in[2U] 
        = ((IData)((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[7U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[6U])))) 
           ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[2U]);
    __Vfunc_swap_endianess_byte__90__vector_in[3U] 
        = ((IData)(((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[7U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[6U]))) 
                    >> 0x20U)) ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[3U]);
    vlSelf->__Vfunc_swap_endianess_byte__90__vector_out[3U] 
        = ((0xffU & vlSelf->__Vfunc_swap_endianess_byte__90__vector_out[3U]) 
           | (0xffffff00U & ((__Vfunc_swap_endianess_byte__90__vector_in[0U] 
                              << 0x18U) | ((0xff0000U 
                                            & (__Vfunc_swap_endianess_byte__90__vector_in[0U] 
                                               << 8U)) 
                                           | (0xff00U 
                                              & (__Vfunc_swap_endianess_byte__90__vector_in[0U] 
                                                 >> 8U))))));
    vlSelf->__Vfunc_swap_endianess_byte__90__vector_out[2U] 
        = ((0xffffU & vlSelf->__Vfunc_swap_endianess_byte__90__vector_out[2U]) 
           | (0xffff0000U & ((__Vfunc_swap_endianess_byte__90__vector_in[1U] 
                              << 0x18U) | (0xff0000U 
                                           & (__Vfunc_swap_endianess_byte__90__vector_in[1U] 
                                              << 8U)))));
    vlSelf->__Vfunc_swap_endianess_byte__90__vector_out[3U] 
        = ((0xffffff00U & vlSelf->__Vfunc_swap_endianess_byte__90__vector_out[3U]) 
           | (0xffffU & (__Vfunc_swap_endianess_byte__90__vector_in[0U] 
                         >> 0x18U)));
    vlSelf->__Vfunc_swap_endianess_byte__90__vector_out[1U] 
        = ((0xffffffU & vlSelf->__Vfunc_swap_endianess_byte__90__vector_out[1U]) 
           | (__Vfunc_swap_endianess_byte__90__vector_in[2U] 
              << 0x18U));
    vlSelf->__Vfunc_swap_endianess_byte__90__vector_out[2U] 
        = ((0xffff0000U & vlSelf->__Vfunc_swap_endianess_byte__90__vector_out[2U]) 
           | (0xffffffU & ((0xff00U & (__Vfunc_swap_endianess_byte__90__vector_in[1U] 
                                       >> 8U)) | (__Vfunc_swap_endianess_byte__90__vector_in[1U] 
                                                  >> 0x18U))));
    vlSelf->__Vfunc_swap_endianess_byte__90__vector_out[1U] 
        = ((0xff000000U & vlSelf->__Vfunc_swap_endianess_byte__90__vector_out[1U]) 
           | ((0xff0000U & (__Vfunc_swap_endianess_byte__90__vector_in[2U] 
                            << 8U)) | ((0xff00U & (
                                                   __Vfunc_swap_endianess_byte__90__vector_in[2U] 
                                                   >> 8U)) 
                                       | (__Vfunc_swap_endianess_byte__90__vector_in[2U] 
                                          >> 0x18U))));
    vlSelf->__Vfunc_swap_endianess_byte__90__vector_out[0U] 
        = ((0xffU & vlSelf->__Vfunc_swap_endianess_byte__90__vector_out[0U]) 
           | (0xffffff00U & ((__Vfunc_swap_endianess_byte__90__vector_in[3U] 
                              << 0x18U) | ((0xff0000U 
                                            & (__Vfunc_swap_endianess_byte__90__vector_in[3U] 
                                               << 8U)) 
                                           | (0xff00U 
                                              & (__Vfunc_swap_endianess_byte__90__vector_in[3U] 
                                                 >> 8U))))));
    vlSelf->__Vfunc_swap_endianess_byte__90__vector_out[0U] 
        = ((0xffffff00U & vlSelf->__Vfunc_swap_endianess_byte__90__vector_out[0U]) 
           | (__Vfunc_swap_endianess_byte__90__vector_in[3U] 
              >> 0x18U));
    __Vfunc_swap_endianess_byte__90__Vfuncout[0U] = 
        vlSelf->__Vfunc_swap_endianess_byte__90__vector_out[0U];
    __Vfunc_swap_endianess_byte__90__Vfuncout[1U] = 
        vlSelf->__Vfunc_swap_endianess_byte__90__vector_out[1U];
    __Vfunc_swap_endianess_byte__90__Vfuncout[2U] = 
        vlSelf->__Vfunc_swap_endianess_byte__90__vector_out[2U];
    __Vfunc_swap_endianess_byte__90__Vfuncout[3U] = 
        vlSelf->__Vfunc_swap_endianess_byte__90__vector_out[3U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_d[0U] 
        = __Vfunc_swap_endianess_byte__90__Vfuncout[0U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_d[1U] 
        = __Vfunc_swap_endianess_byte__90__Vfuncout[1U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_d[2U] 
        = __Vfunc_swap_endianess_byte__90__Vfuncout[2U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__tag_out_d[3U] 
        = __Vfunc_swap_endianess_byte__90__Vfuncout[3U];
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[8U] 
        = (IData)((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[0U]))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__xor_with_state[9U] 
        = (IData)(((((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT____Vcellinp__ascon_duplex__key_i[0U]))) 
                   >> 0x20U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_we 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_valid) 
           & ((0xfU == (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__msg_out_read_q)) 
              | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__track_reset_msg_q)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xfdffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x103fff800007fffULL 
                                                  & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x39U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xfbffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x17c1ff801ff801fULL 
                                                  & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3aU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xf7ffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1bde1f87e0781e1ULL 
                                                  & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3bU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xefffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1deee3b8e388e22ULL 
                                                  & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3cU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xdfffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1ef76cdb2c93244ULL 
                                                  & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3dU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0xbfffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1f7bb56d5525488ULL 
                                                  & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3eU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = ((0x7fffffffffffffffULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o) 
           | ((QData)((IData)((1U & VL_REDXOR_64((0x1fbdda769a46910ULL 
                                                  & vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o))))) 
              << 0x3fU));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
        = (0x5400000000000000ULL ^ vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o);
    if (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__inc_round_counter) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
            = (0x1fU & ((IData)(1U) + (0xfU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q))));
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
            = (0x1fU & ((0xfU & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q) 
                                 >> 4U)) - (IData)(1U)));
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
            = (0x1fU & (0xfU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q)));
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
            = (0x1fU & (0xfU & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q) 
                                >> 4U)));
    }
    VL_EXTEND_WI(192,8, __Vtemp_h20ebfedd__0, (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT____Vcellinp__u_prim_ascon_round__rcon_i));
    if (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_round_input) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[0U] 
            = Vascon_sim__ConstPool__CONST_hab76c978_0[0U];
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[1U] 
            = Vascon_sim__ConstPool__CONST_hab76c978_0[1U];
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[2U] 
            = Vascon_sim__ConstPool__CONST_hab76c978_0[2U];
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[3U] 
            = Vascon_sim__ConstPool__CONST_hab76c978_0[3U];
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[0U] 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[0U];
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[1U] 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[1U];
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[2U] 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[2U];
        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[3U] 
            = vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[3U];
    }
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[4U] 
        = (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_round_input)
             ? Vascon_sim__ConstPool__CONST_hab76c978_0[4U]
             : vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[4U]) 
           ^ __Vtemp_h20ebfedd__0[0U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[5U] 
        = (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_round_input)
             ? Vascon_sim__ConstPool__CONST_hab76c978_0[5U]
             : vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[5U]) 
           ^ __Vtemp_h20ebfedd__0[1U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[6U] 
        = (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_round_input)
             ? Vascon_sim__ConstPool__CONST_hab76c978_0[6U]
             : vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[6U]) 
           ^ __Vtemp_h20ebfedd__0[2U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[7U] 
        = (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_round_input)
             ? Vascon_sim__ConstPool__CONST_hab76c978_0[7U]
             : vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[7U]) 
           ^ __Vtemp_h20ebfedd__0[3U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[8U] 
        = (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_round_input)
             ? Vascon_sim__ConstPool__CONST_hab76c978_0[8U]
             : vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[8U]) 
           ^ __Vtemp_h20ebfedd__0[4U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[9U] 
        = (((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__sel_round_input)
             ? Vascon_sim__ConstPool__CONST_hab76c978_0[9U]
             : vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__ascon_state_q[9U]) 
           ^ __Vtemp_h20ebfedd__0[5U]);
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q) 
           | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o) 
              | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o)));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_trigger 
        = ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__ping_set_q) 
           | ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__rise_o) 
              | (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__gen_alert_tx__BRA__1__KET____DOT__u_prim_alert_sender__DOT__u_decode_ping__DOT__fall_o)));
    if (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
            if (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake) {
                vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
            }
        }
    } else {
        vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake) {
            vlSelf->ascon_sim__DOT__u_ascon__DOT__u_prim_sync_reqack_data__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
    vlSelf->ascon_sim__DOT__tl_o[0U] = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[0U];
    vlSelf->ascon_sim__DOT__tl_o[1U] = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[1U];
    vlSelf->ascon_sim__DOT__tl_o[2U] = vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__tl_reg_d2h[2U];
    vlSelf->ascon_sim__DOT__tl_o[0U] = ((0xffff0003U 
                                         & vlSelf->ascon_sim__DOT__tl_o[0U]) 
                                        | (0xfffffffcU 
                                           & ((0xfe00U 
                                               & ((IData)(
                                                          (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_rsp_intg__DOT__u_rsp_gen__data_o 
                                                           >> 0x39U)) 
                                                  << 9U)) 
                                              | (0x1fcU 
                                                 & ((IData)(
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__u_reg__DOT__u_rsp_intg_gen__DOT____Vcellout__gen_data_intg__DOT__u_tlul_data_integ_enc__data_intg_o 
                                                             >> 0x20U)) 
                                                    << 2U)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[0U] 
        = (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[0U])));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[1U] 
        = (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[2U])));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[2U] 
        = (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[4U])));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[3U] 
        = (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[7U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[6U])));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[4U] 
        = (((QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[9U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w[8U])));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0U] 
        = ((0x10U & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                             [4U]) << 4U)) | ((8U & 
                                               ((IData)(
                                                        vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                        [3U]) 
                                                << 3U)) 
                                              | ((4U 
                                                  & ((IData)(
                                                             vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                             [2U]) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(
                                                                vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                                [1U]) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                                 [0U]))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[1U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 1U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 1U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 1U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 1U)) << 1U)) 
                    | (1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                     [0U] >> 1U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[2U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 2U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 2U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 2U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 2U)) << 1U)) 
                    | (1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                     [0U] >> 2U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[3U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 3U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 3U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 3U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 3U)) << 1U)) 
                    | (1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                     [0U] >> 3U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[4U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 4U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 4U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 4U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 4U)) << 1U)) 
                    | (1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                     [0U] >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[5U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 5U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 5U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 5U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 5U)) << 1U)) 
                    | (1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                     [0U] >> 5U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[6U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 6U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 6U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 6U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 6U)) << 1U)) 
                    | (1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                     [0U] >> 6U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[7U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 7U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 7U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 7U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 7U)) << 1U)) 
                    | (1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                     [0U] >> 7U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[8U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 8U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 8U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 8U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 8U)) << 1U)) 
                    | (1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                     [0U] >> 8U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[9U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 9U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 9U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 9U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 9U)) << 1U)) 
                    | (1U & (IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                     [0U] >> 9U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0xaU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0xaU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0xaU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0xaU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0xaU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0xaU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0xbU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0xbU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0xbU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0xbU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0xbU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0xbU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0xcU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0xcU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0xcU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0xcU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0xcU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0xcU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0xdU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0xdU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0xdU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0xdU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0xdU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0xdU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0xeU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0xeU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0xeU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0xeU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0xeU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0xeU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0xfU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0xfU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0xfU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0xfU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0xfU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0xfU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x10U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x10U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x10U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x10U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x10U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x10U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x11U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x11U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x11U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x11U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x11U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x11U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x12U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x12U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x12U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x12U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x12U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x12U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x13U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x13U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x13U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x13U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x13U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x13U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x14U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x14U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x14U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x14U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x14U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x14U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x15U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x15U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x15U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x15U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x15U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x15U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x16U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x16U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x16U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x16U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x16U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x16U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x17U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x17U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x17U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x17U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x17U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x17U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x18U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x18U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x18U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x18U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x18U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x18U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x19U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x19U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x19U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x19U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x19U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x19U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x1aU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x1aU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x1aU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x1aU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x1aU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x1aU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x1bU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x1bU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x1bU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x1bU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x1bU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x1bU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x1cU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x1cU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x1cU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x1cU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x1cU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x1cU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x1dU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x1dU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x1dU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x1dU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x1dU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x1dU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x1eU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x1eU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x1eU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x1eU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x1eU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x1eU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x1fU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x1fU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x1fU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x1fU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x1fU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x1fU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x20U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x20U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x20U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x20U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x20U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x20U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x21U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x21U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x21U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x21U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x21U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x21U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x22U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x22U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x22U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x22U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x22U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x22U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x23U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x23U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x23U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x23U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x23U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x23U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x24U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x24U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x24U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x24U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x24U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x24U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x25U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x25U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x25U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x25U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x25U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x25U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x26U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x26U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x26U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x26U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x26U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x26U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x27U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x27U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x27U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x27U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x27U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x27U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x28U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x28U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x28U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x28U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x28U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x28U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x29U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x29U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x29U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x29U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x29U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x29U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x2aU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x2aU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x2aU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x2aU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x2aU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x2aU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x2bU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x2bU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x2bU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x2bU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x2bU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x2bU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x2cU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x2cU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x2cU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x2cU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x2cU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x2cU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x2dU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x2dU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x2dU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x2dU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x2dU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x2dU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x2eU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x2eU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x2eU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x2eU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x2eU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x2eU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x2fU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x2fU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x2fU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x2fU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x2fU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x2fU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x30U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x30U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x30U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x30U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x30U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x30U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x31U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x31U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x31U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x31U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x31U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x31U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x32U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x32U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x32U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x32U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x32U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x32U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x33U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x33U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x33U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x33U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x33U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x33U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x34U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x34U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x34U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x34U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x34U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x34U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x35U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x35U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x35U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x35U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x35U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x35U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x36U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x36U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x36U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x36U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x36U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x36U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x37U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x37U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x37U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x37U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x37U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x37U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x38U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x38U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x38U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x38U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x38U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x38U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x39U] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x39U)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x39U)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x39U)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x39U)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x39U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x3aU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x3aU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x3aU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x3aU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x3aU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x3aU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x3bU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x3bU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x3bU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x3bU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x3bU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x3bU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x3cU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x3cU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x3cU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x3cU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x3cU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x3cU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x3dU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x3dU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x3dU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x3dU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x3dU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x3dU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x3eU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x3eU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x3eU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x3eU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x3eU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x3eU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[0x3fU] 
        = ((0x10U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [4U] >> 0x3fU)) << 4U)) 
           | ((8U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                              [3U] >> 0x3fU)) << 3U)) 
              | ((4U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                 [2U] >> 0x3fU)) << 2U)) 
                 | ((2U & ((IData)((vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                    [1U] >> 0x3fU)) 
                           << 1U)) | (1U & (IData)(
                                                   (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w
                                                    [0U] 
                                                    >> 0x3fU)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0U] << 1U)) ^ 
                     (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                      [0U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                  [0U]) | ((4U & ((0xfffffffcU 
                                                   & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [0U] 
                                                      << 1U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                   [0U]))) 
                                           | ((2U & 
                                               vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                               [0U]) 
                                              | (1U 
                                                 & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                    [0U] 
                                                    ^ 
                                                    (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [0U] 
                                                     >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [1U] << 1U)) ^ 
                     (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                      [1U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                  [1U]) | ((4U & ((0xfffffffcU 
                                                   & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [1U] 
                                                      << 1U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                   [1U]))) 
                                           | ((2U & 
                                               vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                               [1U]) 
                                              | (1U 
                                                 & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                    [1U] 
                                                    ^ 
                                                    (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [1U] 
                                                     >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [2U] << 1U)) ^ 
                     (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                      [2U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                  [2U]) | ((4U & ((0xfffffffcU 
                                                   & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [2U] 
                                                      << 1U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                   [2U]))) 
                                           | ((2U & 
                                               vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                               [2U]) 
                                              | (1U 
                                                 & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                    [2U] 
                                                    ^ 
                                                    (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [2U] 
                                                     >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [3U] << 1U)) ^ 
                     (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                      [3U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                  [3U]) | ((4U & ((0xfffffffcU 
                                                   & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [3U] 
                                                      << 1U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                   [3U]))) 
                                           | ((2U & 
                                               vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                               [3U]) 
                                              | (1U 
                                                 & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                    [3U] 
                                                    ^ 
                                                    (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [3U] 
                                                     >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [4U] << 1U)) ^ 
                     (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                      [4U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                  [4U]) | ((4U & ((0xfffffffcU 
                                                   & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [4U] 
                                                      << 1U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                   [4U]))) 
                                           | ((2U & 
                                               vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                               [4U]) 
                                              | (1U 
                                                 & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                    [4U] 
                                                    ^ 
                                                    (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [4U] 
                                                     >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [5U] << 1U)) ^ 
                     (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                      [5U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                  [5U]) | ((4U & ((0xfffffffcU 
                                                   & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [5U] 
                                                      << 1U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                   [5U]))) 
                                           | ((2U & 
                                               vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                               [5U]) 
                                              | (1U 
                                                 & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                    [5U] 
                                                    ^ 
                                                    (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [5U] 
                                                     >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [6U] << 1U)) ^ 
                     (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                      [6U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                  [6U]) | ((4U & ((0xfffffffcU 
                                                   & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [6U] 
                                                      << 1U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                   [6U]))) 
                                           | ((2U & 
                                               vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                               [6U]) 
                                              | (1U 
                                                 & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                    [6U] 
                                                    ^ 
                                                    (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [6U] 
                                                     >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [7U] << 1U)) ^ 
                     (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                      [7U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                  [7U]) | ((4U & ((0xfffffffcU 
                                                   & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [7U] 
                                                      << 1U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                   [7U]))) 
                                           | ((2U & 
                                               vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                               [7U]) 
                                              | (1U 
                                                 & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                    [7U] 
                                                    ^ 
                                                    (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [7U] 
                                                     >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [8U] << 1U)) ^ 
                     (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                      [8U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                  [8U]) | ((4U & ((0xfffffffcU 
                                                   & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [8U] 
                                                      << 1U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                   [8U]))) 
                                           | ((2U & 
                                               vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                               [8U]) 
                                              | (1U 
                                                 & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                    [8U] 
                                                    ^ 
                                                    (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [8U] 
                                                     >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [9U] << 1U)) ^ 
                     (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                      [9U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                  [9U]) | ((4U & ((0xfffffffcU 
                                                   & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [9U] 
                                                      << 1U)) 
                                                  ^ 
                                                  (0xfffffffcU 
                                                   & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                   [9U]))) 
                                           | ((2U & 
                                               vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                               [9U]) 
                                              | (1U 
                                                 & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                    [9U] 
                                                    ^ 
                                                    (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [9U] 
                                                     >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0xaU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0xaU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                      [0xaU]) | ((4U 
                                                  & ((0xfffffffcU 
                                                      & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                         [0xaU] 
                                                         << 1U)) 
                                                     ^ 
                                                     (0xfffffffcU 
                                                      & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [0xaU]))) 
                                                 | ((2U 
                                                     & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [0xaU]) 
                                                    | (1U 
                                                       & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                          [0xaU] 
                                                          ^ 
                                                          (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0xaU] 
                                                           >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0xbU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0xbU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                      [0xbU]) | ((4U 
                                                  & ((0xfffffffcU 
                                                      & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                         [0xbU] 
                                                         << 1U)) 
                                                     ^ 
                                                     (0xfffffffcU 
                                                      & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [0xbU]))) 
                                                 | ((2U 
                                                     & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [0xbU]) 
                                                    | (1U 
                                                       & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                          [0xbU] 
                                                          ^ 
                                                          (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0xbU] 
                                                           >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0xcU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0xcU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                      [0xcU]) | ((4U 
                                                  & ((0xfffffffcU 
                                                      & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                         [0xcU] 
                                                         << 1U)) 
                                                     ^ 
                                                     (0xfffffffcU 
                                                      & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [0xcU]))) 
                                                 | ((2U 
                                                     & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [0xcU]) 
                                                    | (1U 
                                                       & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                          [0xcU] 
                                                          ^ 
                                                          (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0xcU] 
                                                           >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0xdU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0xdU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                      [0xdU]) | ((4U 
                                                  & ((0xfffffffcU 
                                                      & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                         [0xdU] 
                                                         << 1U)) 
                                                     ^ 
                                                     (0xfffffffcU 
                                                      & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [0xdU]))) 
                                                 | ((2U 
                                                     & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [0xdU]) 
                                                    | (1U 
                                                       & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                          [0xdU] 
                                                          ^ 
                                                          (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0xdU] 
                                                           >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0xeU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0xeU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                      [0xeU]) | ((4U 
                                                  & ((0xfffffffcU 
                                                      & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                         [0xeU] 
                                                         << 1U)) 
                                                     ^ 
                                                     (0xfffffffcU 
                                                      & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [0xeU]))) 
                                                 | ((2U 
                                                     & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [0xeU]) 
                                                    | (1U 
                                                       & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                          [0xeU] 
                                                          ^ 
                                                          (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0xeU] 
                                                           >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0xfU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0xfU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                      [0xfU]) | ((4U 
                                                  & ((0xfffffffcU 
                                                      & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                         [0xfU] 
                                                         << 1U)) 
                                                     ^ 
                                                     (0xfffffffcU 
                                                      & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                      [0xfU]))) 
                                                 | ((2U 
                                                     & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                     [0xfU]) 
                                                    | (1U 
                                                       & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                          [0xfU] 
                                                          ^ 
                                                          (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0xfU] 
                                                           >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x10U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x10U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x10U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x10U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x10U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x10U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x10U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x10U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x11U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x11U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x11U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x11U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x11U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x11U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x11U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x11U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x12U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x12U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x12U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x12U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x12U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x12U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x12U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x12U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x13U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x13U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x13U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x13U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x13U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x13U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x13U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x13U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x14U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x14U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x14U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x14U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x14U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x14U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x14U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x14U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x15U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x15U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x15U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x15U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x15U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x15U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x15U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x15U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x16U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x16U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x16U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x16U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x16U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x16U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x16U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x16U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x17U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x17U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x17U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x17U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x17U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x17U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x17U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x17U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x18U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x18U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x18U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x18U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x18U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x18U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x18U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x18U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x19U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x19U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x19U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x19U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x19U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x19U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x19U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x19U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x1aU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x1aU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x1aU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x1aU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x1aU]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x1aU]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x1aU] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x1aU] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x1bU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x1bU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x1bU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x1bU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x1bU]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x1bU]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x1bU] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x1bU] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x1cU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x1cU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x1cU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x1cU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x1cU]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x1cU]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x1cU] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x1cU] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x1dU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x1dU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x1dU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x1dU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x1dU]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x1dU]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x1dU] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x1dU] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x1eU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x1eU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x1eU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x1eU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x1eU]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x1eU]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x1eU] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x1eU] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x1fU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x1fU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x1fU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x1fU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x1fU]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x1fU]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x1fU] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x1fU] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x20U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x20U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x20U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x20U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x20U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x20U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x20U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x20U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x21U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x21U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x21U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x21U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x21U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x21U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x21U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x21U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x22U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x22U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x22U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x22U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x22U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x22U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x22U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x22U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x23U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x23U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x23U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x23U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x23U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x23U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x23U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x23U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x24U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x24U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x24U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x24U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x24U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x24U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x24U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x24U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x25U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x25U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x25U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x25U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x25U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x25U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x25U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x25U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x26U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x26U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x26U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x26U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x26U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x26U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x26U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x26U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x27U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x27U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x27U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x27U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x27U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x27U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x27U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x27U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x28U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x28U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x28U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x28U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x28U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x28U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x28U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x28U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x29U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x29U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x29U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x29U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x29U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x29U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x29U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x29U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x2aU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x2aU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x2aU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x2aU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x2aU]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x2aU]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x2aU] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x2aU] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x2bU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x2bU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x2bU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x2bU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x2bU]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x2bU]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x2bU] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x2bU] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x2cU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x2cU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x2cU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x2cU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x2cU]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x2cU]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x2cU] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x2cU] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x2dU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x2dU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x2dU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x2dU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x2dU]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x2dU]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x2dU] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x2dU] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x2eU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x2eU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x2eU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x2eU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x2eU]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x2eU]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x2eU] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x2eU] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x2fU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x2fU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x2fU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x2fU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x2fU]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x2fU]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x2fU] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x2fU] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x30U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x30U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x30U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x30U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x30U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x30U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x30U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x30U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x31U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x31U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x31U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x31U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x31U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x31U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x31U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x31U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x32U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x32U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x32U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x32U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x32U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x32U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x32U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x32U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x33U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x33U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x33U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x33U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x33U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x33U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x33U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x33U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x34U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x34U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x34U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x34U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x34U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x34U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x34U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x34U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x35U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x35U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x35U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x35U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x35U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x35U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x35U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x35U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x36U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x36U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x36U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x36U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x36U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x36U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x36U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x36U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x37U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x37U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x37U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x37U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x37U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x37U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x37U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x37U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x38U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x38U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x38U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x38U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x38U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x38U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x38U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x38U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x39U] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x39U]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x39U]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x39U] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x39U]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x39U]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x39U] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x39U] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x3aU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x3aU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x3aU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x3aU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x3aU]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x3aU]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x3aU] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x3aU] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x3bU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x3bU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x3bU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x3bU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x3bU]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x3bU]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x3bU] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x3bU] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x3cU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x3cU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x3cU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x3cU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x3cU]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x3cU]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x3cU] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x3cU] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x3dU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x3dU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x3dU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x3dU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x3dU]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x3dU]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x3dU] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x3dU] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x3eU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x3eU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x3eU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x3eU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x3eU]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x3eU]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x3eU] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x3eU] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029 
        = ((0x10U & ((0xfffffff0U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                     [0x3fU] << 1U)) 
                     ^ (0xfffffff0U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                        [0x3fU]))) | ((8U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                       [0x3fU]) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                           [0x3fU] 
                                                           << 1U)) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                        [0x3fU]))) 
                                                   | ((2U 
                                                       & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                       [0x3fU]) 
                                                      | (1U 
                                                         & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                            [0x3fU] 
                                                            ^ 
                                                            (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w
                                                             [0x3fU] 
                                                             >> 4U)))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029 
        = (((IData)((((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                      >> 4U) ^ (2U == (3U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029))))) 
            << 4U) | ((8U & ((0xfffffff8U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                             ^ ((IData)((1U == (0x11U 
                                                & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                << 3U))) | ((4U & (
                                                   (0xfffffffcU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (0x10U 
                                                             == 
                                                             (0x18U 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 2U))) 
                                            | ((2U 
                                                & ((0xfffffffeU 
                                                    & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029)) 
                                                   ^ 
                                                   ((IData)(
                                                            (8U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029)))) 
                                                    << 1U))) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029) 
                                                     ^ (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029))))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[1U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[2U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[3U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[4U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[5U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[6U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[7U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[8U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[9U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0xaU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0xbU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0xcU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0xdU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0xeU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0xfU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x10U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x11U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x12U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x13U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x14U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x15U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x16U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x17U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x18U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x19U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x1aU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x1bU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x1cU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x1dU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x1eU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x1fU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x20U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x21U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x22U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x23U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x24U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x25U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x26U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x27U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x28U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x29U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x2aU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x2bU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x2cU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x2dU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x2eU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x2fU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x30U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x31U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x32U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x33U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x34U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x35U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x36U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x37U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x38U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x39U] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x3aU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x3bU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x3cU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x3dU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x3eU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x3fU] 
        = ((0x10U & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffffffeULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | (IData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                           [0U] >> 4U)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffffffeULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | (IData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                           [0U] >> 3U)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffffffeULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | (IData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                           [0U] >> 2U)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffffffeULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | (IData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                           [0U] >> 1U)))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffffffeULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | (IData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                     [0U]))));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffffffdULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [1U] >> 4U)))) 
                     << 1U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffffffdULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [1U] >> 3U)))) 
                     << 1U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffffffdULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [1U] >> 2U)))) 
                     << 1U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffffffdULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [1U] >> 1U)))) 
                     << 1U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffffffdULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [1U]))) << 1U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffffffbULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [2U] >> 4U)))) 
                     << 2U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffffffbULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [2U] >> 3U)))) 
                     << 2U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffffffbULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [2U] >> 2U)))) 
                     << 2U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffffffbULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [2U] >> 1U)))) 
                     << 2U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffffffbULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [2U]))) << 2U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffffff7ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [3U] >> 4U)))) 
                     << 3U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffffff7ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [3U] >> 3U)))) 
                     << 3U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffffff7ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [3U] >> 2U)))) 
                     << 3U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffffff7ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [3U] >> 1U)))) 
                     << 3U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffffff7ULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [3U]))) << 3U));
    vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffffffefULL & vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->ascon_sim__DOT__u_ascon__DOT__ascon_core__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [4U] >> 4U)))) 
                     << 4U));
}
