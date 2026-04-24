// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__44(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__44\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__350__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__350__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__350__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__350__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__350__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__350__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__351__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__351__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__351__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__351__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__351__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__351__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__351__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__352__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__352__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__352__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__352__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__352__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__352__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__352__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__353__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__353__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__353__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__353__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__353__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__353__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__353__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__354__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__354__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__354__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__355__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__355__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__355__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__356__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__356__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__356__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__356__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__356__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__356__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__357__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__357__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__357__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__357__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__357__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__357__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__357__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__358__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__358__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__358__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__358__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__358__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__358__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__358__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__359__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__359__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__359__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__359__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__359__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__359__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__359__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__360__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__360__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__360__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__361__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__361__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__361__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__380__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__380__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__380__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__380__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__380__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__380__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__380__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__381__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__381__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__381__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__381__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__381__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__381__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__381__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__384__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__384__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__384__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__384__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__384__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__384__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__384__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__385__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__385__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__385__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__385__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__385__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__385__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__385__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__388__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__388__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__388__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__388__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__388__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__388__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__388__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__389__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__389__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__389__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__389__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__389__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__389__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__389__c;
    // Body
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
        = ((0xff00000U & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[0xaU] 
                          << 4U)) | ((0xf0000U & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[0xaU] 
                                                  >> 8U)) 
                                     | ((0xff00U & 
                                         ((vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[0xbU] 
                                           << 0xcU) 
                                          | (0xf00U 
                                             & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[0xaU] 
                                                >> 0x14U)))) 
                                        | (0xffU & 
                                           (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[0xbU] 
                                            >> 4U)))));
    __Vfunc_aes_mul_gf2p2__380__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0x10U));
    __Vfunc_aes_mul_gf2p2__380__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__380__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__380__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__380__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__380__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__380__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__380__d)));
    __Vfunc_aes_mul_gf2p2__380__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__380__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__380__d)));
    __Vfunc_aes_mul_gf2p2__380__f = ((((IData)(__Vfunc_aes_mul_gf2p2__380__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__380__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__380__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__380__b)));
    __Vfunc_aes_mul_gf2p2__380__Vfuncout = __Vfunc_aes_mul_gf2p2__380__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__380__Vfuncout;
    __Vfunc_aes_mul_gf2p2__381__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0x10U));
    __Vfunc_aes_mul_gf2p2__381__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__381__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__381__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__381__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__381__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__381__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__381__d)));
    __Vfunc_aes_mul_gf2p2__381__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__381__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__381__d)));
    __Vfunc_aes_mul_gf2p2__381__f = ((((IData)(__Vfunc_aes_mul_gf2p2__381__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__381__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__381__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__381__b)));
    __Vfunc_aes_mul_gf2p2__381__Vfuncout = __Vfunc_aes_mul_gf2p2__381__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__381__Vfuncout;
    __Vfunc_aes_mul_gf2p2__384__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0xcU));
    __Vfunc_aes_mul_gf2p2__384__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__384__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__384__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__384__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__384__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__384__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__384__d)));
    __Vfunc_aes_mul_gf2p2__384__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__384__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__384__d)));
    __Vfunc_aes_mul_gf2p2__384__f = ((((IData)(__Vfunc_aes_mul_gf2p2__384__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__384__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__384__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__384__b)));
    __Vfunc_aes_mul_gf2p2__384__Vfuncout = __Vfunc_aes_mul_gf2p2__384__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__384__Vfuncout;
    __Vfunc_aes_mul_gf2p2__385__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0xcU));
    __Vfunc_aes_mul_gf2p2__385__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__385__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__385__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__385__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__385__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__385__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__385__d)));
    __Vfunc_aes_mul_gf2p2__385__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__385__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__385__d)));
    __Vfunc_aes_mul_gf2p2__385__f = ((((IData)(__Vfunc_aes_mul_gf2p2__385__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__385__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__385__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__385__b)));
    __Vfunc_aes_mul_gf2p2__385__Vfuncout = __Vfunc_aes_mul_gf2p2__385__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__385__Vfuncout;
    __Vfunc_aes_mul_gf2p4__350__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                 >> 0x14U));
    __Vfunc_aes_mul_gf2p4__350__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__351__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__350__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__351__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__350__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__351__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__351__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__351__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__351__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__351__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__351__d)));
    __Vfunc_aes_mul_gf2p2__351__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__351__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__351__d)));
    __Vfunc_aes_mul_gf2p2__351__f = ((((IData)(__Vfunc_aes_mul_gf2p2__351__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__351__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__351__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__351__b)));
    __Vfunc_aes_mul_gf2p2__351__Vfuncout = __Vfunc_aes_mul_gf2p2__351__f;
    __Vfunc_aes_mul_gf2p4__350__a = __Vfunc_aes_mul_gf2p2__351__Vfuncout;
    __Vfunc_aes_mul_gf2p2__352__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__350__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__350__delta)));
    __Vfunc_aes_mul_gf2p2__352__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__350__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__350__gamma)));
    __Vfunc_aes_mul_gf2p2__352__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__352__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__352__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__352__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__352__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__352__d)));
    __Vfunc_aes_mul_gf2p2__352__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__352__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__352__d)));
    __Vfunc_aes_mul_gf2p2__352__f = ((((IData)(__Vfunc_aes_mul_gf2p2__352__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__352__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__352__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__352__b)));
    __Vfunc_aes_mul_gf2p2__352__Vfuncout = __Vfunc_aes_mul_gf2p2__352__f;
    __Vfunc_aes_mul_gf2p4__350__b = __Vfunc_aes_mul_gf2p2__352__Vfuncout;
    __Vfunc_aes_mul_gf2p2__353__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__350__delta));
    __Vfunc_aes_mul_gf2p2__353__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__350__gamma));
    __Vfunc_aes_mul_gf2p2__353__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__353__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__353__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__353__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__353__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__353__d)));
    __Vfunc_aes_mul_gf2p2__353__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__353__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__353__d)));
    __Vfunc_aes_mul_gf2p2__353__f = ((((IData)(__Vfunc_aes_mul_gf2p2__353__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__353__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__353__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__353__b)));
    __Vfunc_aes_mul_gf2p2__353__Vfuncout = __Vfunc_aes_mul_gf2p2__353__f;
    __Vfunc_aes_mul_gf2p4__350__c = __Vfunc_aes_mul_gf2p2__353__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__354__g = __Vfunc_aes_mul_gf2p4__350__b;
    __Vfunc_aes_scale_omega2_gf2p2__354__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__354__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__354__g)));
    __Vfunc_aes_scale_omega2_gf2p2__354__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__354__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__350__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__350__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__350__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__354__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__355__g = __Vfunc_aes_mul_gf2p4__350__b;
    __Vfunc_aes_scale_omega2_gf2p2__355__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__355__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__355__g)));
    __Vfunc_aes_scale_omega2_gf2p2__355__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__355__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__350__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__350__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__350__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__355__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__350__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__350__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__350__Vfuncout;
    __Vfunc_aes_mul_gf2p4__356__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                 >> 0x14U));
    __Vfunc_aes_mul_gf2p4__356__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__357__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__356__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__357__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__356__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__357__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__357__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__357__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__357__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__357__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__357__d)));
    __Vfunc_aes_mul_gf2p2__357__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__357__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__357__d)));
    __Vfunc_aes_mul_gf2p2__357__f = ((((IData)(__Vfunc_aes_mul_gf2p2__357__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__357__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__357__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__357__b)));
    __Vfunc_aes_mul_gf2p2__357__Vfuncout = __Vfunc_aes_mul_gf2p2__357__f;
    __Vfunc_aes_mul_gf2p4__356__a = __Vfunc_aes_mul_gf2p2__357__Vfuncout;
    __Vfunc_aes_mul_gf2p2__358__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__356__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__356__delta)));
    __Vfunc_aes_mul_gf2p2__358__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__356__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__356__gamma)));
    __Vfunc_aes_mul_gf2p2__358__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__358__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__358__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__358__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__358__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__358__d)));
    __Vfunc_aes_mul_gf2p2__358__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__358__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__358__d)));
    __Vfunc_aes_mul_gf2p2__358__f = ((((IData)(__Vfunc_aes_mul_gf2p2__358__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__358__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__358__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__358__b)));
    __Vfunc_aes_mul_gf2p2__358__Vfuncout = __Vfunc_aes_mul_gf2p2__358__f;
    __Vfunc_aes_mul_gf2p4__356__b = __Vfunc_aes_mul_gf2p2__358__Vfuncout;
    __Vfunc_aes_mul_gf2p2__359__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__356__delta));
    __Vfunc_aes_mul_gf2p2__359__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__356__gamma));
    __Vfunc_aes_mul_gf2p2__359__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__359__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__359__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__359__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__359__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__359__d)));
    __Vfunc_aes_mul_gf2p2__359__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__359__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__359__d)));
    __Vfunc_aes_mul_gf2p2__359__f = ((((IData)(__Vfunc_aes_mul_gf2p2__359__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__359__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__359__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__359__b)));
    __Vfunc_aes_mul_gf2p2__359__Vfuncout = __Vfunc_aes_mul_gf2p2__359__f;
    __Vfunc_aes_mul_gf2p4__356__c = __Vfunc_aes_mul_gf2p2__359__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__360__g = __Vfunc_aes_mul_gf2p4__356__b;
    __Vfunc_aes_scale_omega2_gf2p2__360__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__360__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__360__g)));
    __Vfunc_aes_scale_omega2_gf2p2__360__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__360__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__356__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__356__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__356__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__360__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__361__g = __Vfunc_aes_mul_gf2p4__356__b;
    __Vfunc_aes_scale_omega2_gf2p2__361__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__361__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__361__g)));
    __Vfunc_aes_scale_omega2_gf2p2__361__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__361__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__356__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__356__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__356__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__361__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__356__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__356__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__356__Vfuncout;
    __Vfunc_aes_mul_gf2p2__388__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__388__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__388__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__388__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__388__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__388__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__388__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__388__d)));
    __Vfunc_aes_mul_gf2p2__388__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__388__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__388__d)));
    __Vfunc_aes_mul_gf2p2__388__f = ((((IData)(__Vfunc_aes_mul_gf2p2__388__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__388__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__388__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__388__b)));
    __Vfunc_aes_mul_gf2p2__388__Vfuncout = __Vfunc_aes_mul_gf2p2__388__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__388__Vfuncout;
    __Vfunc_aes_mul_gf2p2__389__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__389__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i));
    __Vfunc_aes_mul_gf2p2__389__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__389__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__389__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__389__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__389__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__389__d)));
    __Vfunc_aes_mul_gf2p2__389__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__389__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__389__d)));
    __Vfunc_aes_mul_gf2p2__389__f = ((((IData)(__Vfunc_aes_mul_gf2p2__389__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__389__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__389__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__389__b)));
    __Vfunc_aes_mul_gf2p2__389__Vfuncout = __Vfunc_aes_mul_gf2p2__389__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__389__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0) 
            << 4U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0));
}

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__67(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__67\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__330__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__330__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__330__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__331__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__331__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__331__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__332__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__332__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__332__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__333__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__333__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__333__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__334__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__334__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__334__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__335__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__335__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__335__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__336__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__336__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__336__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__337__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__337__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__337__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__338__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__338__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__338__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__339__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__339__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__339__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__340__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__340__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__340__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__341__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__341__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__341__vec_c;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__342__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__342__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__342__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__342__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__342__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__343__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__343__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__343__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__344__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__344__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__344__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__345__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__345__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__345__d;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__346__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__346__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__346__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__346__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__346__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__347__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__347__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__347__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__348__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__348__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__348__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__349__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__349__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__349__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__362__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__362__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__362__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__362__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__362__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__362__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__363__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__363__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__363__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__363__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__363__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__363__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__363__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__364__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__364__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__364__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__364__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__364__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__364__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__364__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__365__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__365__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__365__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__365__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__365__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__365__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__365__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__366__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__366__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__366__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__367__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__367__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__367__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__368__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__368__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__368__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__368__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__368__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__368__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__369__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__369__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__369__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__369__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__369__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__369__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__369__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__370__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__370__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__370__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__370__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__370__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__370__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__370__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__371__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__371__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__371__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__371__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__371__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__371__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__371__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__372__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__372__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__372__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__373__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__373__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__373__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__374__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__374__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__374__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__375__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__375__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__375__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__376__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__376__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__376__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__377__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__377__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__377__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__382__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__382__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__382__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__382__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__382__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__382__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__382__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__383__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__383__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__383__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__383__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__383__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__383__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__383__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__386__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__386__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__386__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__386__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__386__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__386__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__386__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__387__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__387__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__387__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__387__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__387__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__387__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__387__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__390__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__390__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__390__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__390__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__390__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__390__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__390__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__391__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__391__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__391__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__391__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__391__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__391__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__391__c;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__398__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__398__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__398__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__398__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__398__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__398__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__399__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__399__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__399__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__399__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__399__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__399__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__399__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__400__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__400__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__400__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__400__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__400__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__400__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__400__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__401__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__401__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__401__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__401__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__401__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__401__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__401__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__402__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__402__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__402__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__403__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__403__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__403__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__404__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__404__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__404__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__404__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__404__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__404__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__405__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__405__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__405__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__405__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__405__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__405__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__405__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__406__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__406__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__406__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__406__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__406__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__406__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__406__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__407__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__407__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__407__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__407__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__407__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__407__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__407__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__408__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__408__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__408__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__409__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__409__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__409__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__422__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__422__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__423__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__423__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__423__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__423__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__423__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__423__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__423__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__424__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__424__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__424__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__424__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__424__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__424__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__424__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__425__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__425__d;
    // Body
    if (vlSymsp->TOP.rst_ni) {
        if ((1U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y_ss__q_o 
                = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d) 
                    << 4U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d));
        }
        if ((2U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o 
                = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d) 
                    << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d));
        }
        if ((4U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o 
                = ((0xf000U & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                               << 8U)) | ((0xf00U & 
                                           ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                            << 8U)) 
                                          | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
        }
        if ((1U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0xf0U & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                              << 4U) ^ (0xfff0U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                   >> 0x10U)))) 
                   | (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                              ^ (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                 >> 0x14U))));
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o 
                = ((0xf000U & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                               << 8U)) | ((0xf00U & 
                                           ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                            << 8U)) 
                                          | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
        }
        if ((4U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o 
                = vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i;
        }
        vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q 
            = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d;
        if ((1U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0xf0U & ((0xfffffff0U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i)) 
                             ^ (0xff0U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                          >> 0x14U)))) 
                   | (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i) 
                              ^ (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                 >> 0x18U))));
        }
        if ((4U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0xcU & ((0xfffffffcU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i)) 
                            ^ (0xfffffcU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 8U)))) 
                   | (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i) 
                            ^ (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                               >> 0xaU))));
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0xcU & ((0xfffffffcU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i)) 
                            ^ (0xffffcU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0xcU)))) 
                   | (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i) 
                            ^ (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                               >> 0xeU))));
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0xcU & ((0xfffffffcU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i)) 
                            ^ (0x3ffffcU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0xaU)))) 
                   | (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i) 
                            ^ (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                               >> 0xcU))));
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o 
                = vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o;
        }
        if ((2U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o 
                = ((0xcU & ((0xfffffffcU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i)) 
                            ^ (0xfffcU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                          >> 0x10U)))) 
                   | (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i) 
                            ^ (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                               >> 0x12U))));
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0xcU & ((0x3ffffffcU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                            >> 2U)) 
                            ^ (0x3fffcU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0xeU)))) 
                   | (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                            ^ (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                               >> 0x10U))));
        }
        if ((4U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o 
                = ((0xcU & ((0x3ffffffcU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U)) 
                            ^ (0x3fffffcU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                             >> 6U)))) 
                   | (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                            ^ (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                               >> 8U))));
        }
        if ((8U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o 
                = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d) 
                    << 4U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d));
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o 
                = ((0xf0U & ((vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                              ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by)) 
                             << 4U)) | (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx))));
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o 
                = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d) 
                    << 4U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d));
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o 
                = ((0xf0U & ((0xfffffff0U & vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd) 
                             ^ ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by) 
                                << 4U))) | (0xfU & 
                                            ((vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                              >> 4U) 
                                             ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx))));
        }
    } else {
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y_ss__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o = 0U;
        vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o = 0U;
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o = 0U;
    }
    vlSelf->__Vfunc_aes_mvm__332__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__332__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__332__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__332__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__332__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__332__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__332__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__332__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__332__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                   [0U][3U]);
    __Vfunc_aes_mvm__332__vec_c = 0U;
    __Vfunc_aes_mvm__332__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__332__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__332__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__332__vec_b)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__332__vec_b)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__332__vec_b)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__332__vec_b)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__332__vec_b)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__332__vec_b)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__332__vec_b)))));
    __Vfunc_aes_mvm__332__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__332__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__332__vec_b)))));
    __Vfunc_aes_mvm__332__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__332__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__332__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__332__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__332__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__332__Vfuncout = __Vfunc_aes_mvm__332__vec_c;
    vlSelf->__Vfunc_aes_mvm__331__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__331__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__331__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__331__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__331__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__331__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__331__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__331__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__331__vec_b = (0xffU & (0x63U ^ 
                                            vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [0U][3U]));
    __Vfunc_aes_mvm__331__vec_c = 0U;
    __Vfunc_aes_mvm__331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__331__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__331__vec_b)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__331__vec_b)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__331__vec_b)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__331__vec_b)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__331__vec_b)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__331__vec_b)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__331__vec_b)))));
    __Vfunc_aes_mvm__331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__331__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__331__vec_b)))));
    __Vfunc_aes_mvm__331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__331__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__331__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__331__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__331__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__331__Vfuncout = __Vfunc_aes_mvm__331__vec_c;
    vlSelf->__Vfunc_aes_mvm__330__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__330__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__330__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__330__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__330__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__330__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__330__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__330__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__330__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                   [0U][3U]);
    __Vfunc_aes_mvm__330__vec_c = 0U;
    __Vfunc_aes_mvm__330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__330__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__330__vec_b)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__330__vec_b)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__330__vec_b)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__330__vec_b)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__330__vec_b)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__330__vec_b)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__330__vec_b)))));
    __Vfunc_aes_mvm__330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__330__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__330__vec_b)))));
    __Vfunc_aes_mvm__330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__330__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__330__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__330__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__330__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__330__Vfuncout = __Vfunc_aes_mvm__330__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__330__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__331__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__332__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__335__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__335__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__335__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__335__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__335__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__335__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__335__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__335__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__335__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                   [1U][3U]);
    __Vfunc_aes_mvm__335__vec_c = 0U;
    __Vfunc_aes_mvm__335__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__335__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__335__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__335__vec_b)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__335__vec_b)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__335__vec_b)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__335__vec_b)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__335__vec_b)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__335__vec_b)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__335__vec_b)))));
    __Vfunc_aes_mvm__335__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__335__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__335__vec_b)))));
    __Vfunc_aes_mvm__335__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__335__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__335__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__335__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__335__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__335__Vfuncout = __Vfunc_aes_mvm__335__vec_c;
    vlSelf->__Vfunc_aes_mvm__334__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__334__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__334__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__334__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__334__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__334__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__334__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__334__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__334__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                   [1U][3U]);
    __Vfunc_aes_mvm__334__vec_c = 0U;
    __Vfunc_aes_mvm__334__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__334__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__334__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__334__vec_b)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__334__vec_b)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__334__vec_b)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__334__vec_b)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__334__vec_b)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__334__vec_b)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__334__vec_b)))));
    __Vfunc_aes_mvm__334__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__334__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__334__vec_b)))));
    __Vfunc_aes_mvm__334__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__334__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__334__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__334__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__334__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__334__Vfuncout = __Vfunc_aes_mvm__334__vec_c;
    vlSelf->__Vfunc_aes_mvm__333__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__333__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__333__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__333__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__333__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__333__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__333__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__333__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__333__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                   [1U][3U]);
    __Vfunc_aes_mvm__333__vec_c = 0U;
    __Vfunc_aes_mvm__333__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__333__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__333__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__333__vec_b)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__333__vec_b)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__333__vec_b)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__333__vec_b)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__333__vec_b)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__333__vec_b)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__333__vec_b)))));
    __Vfunc_aes_mvm__333__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__333__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__333__vec_b)))));
    __Vfunc_aes_mvm__333__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__333__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__333__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__333__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__333__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__333__Vfuncout = __Vfunc_aes_mvm__333__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__333__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__334__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__335__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__342__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__342__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__342__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__342__gamma)));
    __Vfunc_aes_square_gf2p2__343__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__342__gamma));
    __Vfunc_aes_square_gf2p2__343__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__343__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__343__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__343__Vfuncout = __Vfunc_aes_square_gf2p2__343__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__342__b = __Vfunc_aes_square_gf2p2__343__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__345__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__342__b;
    __Vfunc_aes_scale_omega_gf2p2__345__d = ((2U & 
                                              (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__345__g) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(__Vfunc_aes_scale_omega_gf2p2__345__g) 
                                                   >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__345__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__345__d;
    __Vfunc_aes_square_gf2p2__344__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__342__a;
    __Vfunc_aes_square_gf2p2__344__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__344__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__344__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__344__Vfuncout = __Vfunc_aes_square_gf2p2__344__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__342__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__344__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__345__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__342__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__342__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__342__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__346__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__346__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__346__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__346__gamma)));
    __Vfunc_aes_square_gf2p2__347__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__346__gamma));
    __Vfunc_aes_square_gf2p2__347__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__347__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__347__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__347__Vfuncout = __Vfunc_aes_square_gf2p2__347__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__346__b = __Vfunc_aes_square_gf2p2__347__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__349__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__346__b;
    __Vfunc_aes_scale_omega_gf2p2__349__d = ((2U & 
                                              (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__349__g) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(__Vfunc_aes_scale_omega_gf2p2__349__g) 
                                                   >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__349__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__349__d;
    __Vfunc_aes_square_gf2p2__348__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__346__a;
    __Vfunc_aes_square_gf2p2__348__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__348__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__348__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__348__Vfuncout = __Vfunc_aes_square_gf2p2__348__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__346__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__348__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__349__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__346__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__346__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__346__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i 
        = ((0xf0U & ((0xffffff0U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                    >> 4U)) ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                                               << 4U))) 
           | (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                      ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                         >> 4U))));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i 
        = ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
           ^ ((0xcU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                       << 2U)) | (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                                        >> 2U))));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma10_prd2 
        = ((0xcU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                    << 2U)) | (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o)));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i 
        = ((0xcU & ((0x3ffffffcU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                    >> 2U)) ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                                               << 2U))) 
           | (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                    ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                       >> 2U))));
    if (vlSymsp->TOP.rst_ni) {
        if ((2U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we))) {
            vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o 
                = vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i;
        }
    } else {
        vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o = 0U;
    }
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x 
        = ((0xfU & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x)) 
           | (0xf0U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                        ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o)) 
                       << 4U)));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x 
        = ((0xfU & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x)) 
           | (0xf0U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                       ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o))));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x 
        = ((0xf0U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x)) 
           | (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                      ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o))));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x 
        = ((0xf0U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x)) 
           | (0xfU & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o) 
                       ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o)) 
                      >> 4U)));
    __Vfunc_aes_mul_gf2p4__362__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p4__362__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__363__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__362__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__363__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__362__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__363__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__363__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__363__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__363__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__363__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__363__d)));
    __Vfunc_aes_mul_gf2p2__363__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__363__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__363__d)));
    __Vfunc_aes_mul_gf2p2__363__f = ((((IData)(__Vfunc_aes_mul_gf2p2__363__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__363__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__363__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__363__b)));
    __Vfunc_aes_mul_gf2p2__363__Vfuncout = __Vfunc_aes_mul_gf2p2__363__f;
    __Vfunc_aes_mul_gf2p4__362__a = __Vfunc_aes_mul_gf2p2__363__Vfuncout;
    __Vfunc_aes_mul_gf2p2__364__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__362__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__362__delta)));
    __Vfunc_aes_mul_gf2p2__364__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__362__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__362__gamma)));
    __Vfunc_aes_mul_gf2p2__364__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__364__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__364__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__364__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__364__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__364__d)));
    __Vfunc_aes_mul_gf2p2__364__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__364__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__364__d)));
    __Vfunc_aes_mul_gf2p2__364__f = ((((IData)(__Vfunc_aes_mul_gf2p2__364__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__364__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__364__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__364__b)));
    __Vfunc_aes_mul_gf2p2__364__Vfuncout = __Vfunc_aes_mul_gf2p2__364__f;
    __Vfunc_aes_mul_gf2p4__362__b = __Vfunc_aes_mul_gf2p2__364__Vfuncout;
    __Vfunc_aes_mul_gf2p2__365__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__362__delta));
    __Vfunc_aes_mul_gf2p2__365__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__362__gamma));
    __Vfunc_aes_mul_gf2p2__365__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__365__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__365__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__365__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__365__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__365__d)));
    __Vfunc_aes_mul_gf2p2__365__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__365__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__365__d)));
    __Vfunc_aes_mul_gf2p2__365__f = ((((IData)(__Vfunc_aes_mul_gf2p2__365__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__365__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__365__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__365__b)));
    __Vfunc_aes_mul_gf2p2__365__Vfuncout = __Vfunc_aes_mul_gf2p2__365__f;
    __Vfunc_aes_mul_gf2p4__362__c = __Vfunc_aes_mul_gf2p2__365__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__366__g = __Vfunc_aes_mul_gf2p4__362__b;
    __Vfunc_aes_scale_omega2_gf2p2__366__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__366__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__366__g)));
    __Vfunc_aes_scale_omega2_gf2p2__366__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__366__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__362__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__362__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__362__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__366__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__367__g = __Vfunc_aes_mul_gf2p4__362__b;
    __Vfunc_aes_scale_omega2_gf2p2__367__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__367__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__367__g)));
    __Vfunc_aes_scale_omega2_gf2p2__367__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__367__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__362__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__362__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__362__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__367__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__362__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__362__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__362__Vfuncout;
    __Vfunc_aes_mul_gf2p4__368__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p4__368__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__369__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__368__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__369__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__368__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__369__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__369__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__369__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__369__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__369__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__369__d)));
    __Vfunc_aes_mul_gf2p2__369__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__369__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__369__d)));
    __Vfunc_aes_mul_gf2p2__369__f = ((((IData)(__Vfunc_aes_mul_gf2p2__369__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__369__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__369__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__369__b)));
    __Vfunc_aes_mul_gf2p2__369__Vfuncout = __Vfunc_aes_mul_gf2p2__369__f;
    __Vfunc_aes_mul_gf2p4__368__a = __Vfunc_aes_mul_gf2p2__369__Vfuncout;
    __Vfunc_aes_mul_gf2p2__370__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__368__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__368__delta)));
    __Vfunc_aes_mul_gf2p2__370__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__368__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__368__gamma)));
    __Vfunc_aes_mul_gf2p2__370__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__370__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__370__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__370__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__370__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__370__d)));
    __Vfunc_aes_mul_gf2p2__370__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__370__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__370__d)));
    __Vfunc_aes_mul_gf2p2__370__f = ((((IData)(__Vfunc_aes_mul_gf2p2__370__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__370__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__370__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__370__b)));
    __Vfunc_aes_mul_gf2p2__370__Vfuncout = __Vfunc_aes_mul_gf2p2__370__f;
    __Vfunc_aes_mul_gf2p4__368__b = __Vfunc_aes_mul_gf2p2__370__Vfuncout;
    __Vfunc_aes_mul_gf2p2__371__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__368__delta));
    __Vfunc_aes_mul_gf2p2__371__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__368__gamma));
    __Vfunc_aes_mul_gf2p2__371__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__371__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__371__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__371__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__371__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__371__d)));
    __Vfunc_aes_mul_gf2p2__371__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__371__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__371__d)));
    __Vfunc_aes_mul_gf2p2__371__f = ((((IData)(__Vfunc_aes_mul_gf2p2__371__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__371__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__371__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__371__b)));
    __Vfunc_aes_mul_gf2p2__371__Vfuncout = __Vfunc_aes_mul_gf2p2__371__f;
    __Vfunc_aes_mul_gf2p4__368__c = __Vfunc_aes_mul_gf2p2__371__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__372__g = __Vfunc_aes_mul_gf2p4__368__b;
    __Vfunc_aes_scale_omega2_gf2p2__372__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__372__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__372__g)));
    __Vfunc_aes_scale_omega2_gf2p2__372__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__372__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__368__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__368__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__368__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__372__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__373__g = __Vfunc_aes_mul_gf2p4__368__b;
    __Vfunc_aes_scale_omega2_gf2p2__373__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__373__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__373__g)));
    __Vfunc_aes_scale_omega2_gf2p2__373__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__373__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__368__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__368__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__368__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__373__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__368__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__368__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__368__Vfuncout;
    __Vfunc_aes_mul_gf2p2__386__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__386__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__386__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__386__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__386__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__386__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__386__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__386__d)));
    __Vfunc_aes_mul_gf2p2__386__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__386__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__386__d)));
    __Vfunc_aes_mul_gf2p2__386__f = ((((IData)(__Vfunc_aes_mul_gf2p2__386__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__386__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__386__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__386__b)));
    __Vfunc_aes_mul_gf2p2__386__Vfuncout = __Vfunc_aes_mul_gf2p2__386__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__386__Vfuncout;
    __Vfunc_aes_mul_gf2p2__387__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__387__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__387__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__387__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__387__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__387__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__387__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__387__d)));
    __Vfunc_aes_mul_gf2p2__387__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__387__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__387__d)));
    __Vfunc_aes_mul_gf2p2__387__f = ((((IData)(__Vfunc_aes_mul_gf2p2__387__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__387__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__387__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__387__b)));
    __Vfunc_aes_mul_gf2p2__387__Vfuncout = __Vfunc_aes_mul_gf2p2__387__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__387__Vfuncout;
    __Vfunc_aes_mul_gf2p2__390__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__390__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__390__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__390__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__390__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__390__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__390__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__390__d)));
    __Vfunc_aes_mul_gf2p2__390__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__390__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__390__d)));
    __Vfunc_aes_mul_gf2p2__390__f = ((((IData)(__Vfunc_aes_mul_gf2p2__390__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__390__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__390__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__390__b)));
    __Vfunc_aes_mul_gf2p2__390__Vfuncout = __Vfunc_aes_mul_gf2p2__390__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__390__Vfuncout;
    __Vfunc_aes_mul_gf2p2__391__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__391__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__391__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__391__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__391__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__391__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__391__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__391__d)));
    __Vfunc_aes_mul_gf2p2__391__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__391__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__391__d)));
    __Vfunc_aes_mul_gf2p2__391__f = ((((IData)(__Vfunc_aes_mul_gf2p2__391__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__391__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__391__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__391__b)));
    __Vfunc_aes_mul_gf2p2__391__Vfuncout = __Vfunc_aes_mul_gf2p2__391__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__391__Vfuncout;
    vlSelf->__Vfunc_aes_mvm__341__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__341__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__341__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__341__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__341__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__341__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__341__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__341__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__341__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__341__vec_c = 0U;
    __Vfunc_aes_mvm__341__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__341__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__341__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__341__vec_b)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__341__vec_b)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__341__vec_b)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__341__vec_b)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__341__vec_b)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__341__vec_b)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__341__vec_b)))));
    __Vfunc_aes_mvm__341__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__341__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__341__vec_b)))));
    __Vfunc_aes_mvm__341__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__341__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__341__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__341__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__341__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__341__Vfuncout = __Vfunc_aes_mvm__341__vec_c;
    vlSelf->__Vfunc_aes_mvm__340__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__340__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__340__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__340__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__340__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__340__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__340__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__340__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__340__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__340__vec_c = 0U;
    __Vfunc_aes_mvm__340__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__340__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__340__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__340__vec_b)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__340__vec_b)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__340__vec_b)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__340__vec_b)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__340__vec_b)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__340__vec_b)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__340__vec_b)))));
    __Vfunc_aes_mvm__340__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__340__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__340__vec_b)))));
    __Vfunc_aes_mvm__340__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__340__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__340__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__340__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__340__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__340__Vfuncout = __Vfunc_aes_mvm__340__vec_c;
    vlSelf->__Vfunc_aes_mvm__339__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__339__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__339__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__339__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__339__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__339__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__339__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__339__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__339__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__339__vec_c = 0U;
    __Vfunc_aes_mvm__339__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__339__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__339__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__339__vec_b)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__339__vec_b)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__339__vec_b)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__339__vec_b)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__339__vec_b)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__339__vec_b)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__339__vec_b)))));
    __Vfunc_aes_mvm__339__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__339__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__339__vec_b)))));
    __Vfunc_aes_mvm__339__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__339__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__339__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__339__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__339__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__339__Vfuncout = __Vfunc_aes_mvm__339__vec_c;
    vlSelf->mask_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (IData)(__Vfunc_aes_mvm__339__Vfuncout)
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__340__Vfuncout)
                           : (IData)(__Vfunc_aes_mvm__341__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__338__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__338__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__338__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__338__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__338__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__338__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__338__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__338__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__338__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__338__vec_c = 0U;
    __Vfunc_aes_mvm__338__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__338__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__338__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__338__vec_b)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__338__vec_b)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__338__vec_b)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__338__vec_b)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__338__vec_b)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__338__vec_b)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__338__vec_b)))));
    __Vfunc_aes_mvm__338__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__338__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__338__vec_b)))));
    __Vfunc_aes_mvm__338__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__338__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__338__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__338__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__338__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__338__Vfuncout = __Vfunc_aes_mvm__338__vec_c;
    vlSelf->__Vfunc_aes_mvm__337__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__337__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__337__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__337__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__337__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__337__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__337__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__337__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__337__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__337__vec_c = 0U;
    __Vfunc_aes_mvm__337__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__337__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__337__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__337__vec_b)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__337__vec_b)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__337__vec_b)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__337__vec_b)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__337__vec_b)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__337__vec_b)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__337__vec_b)))));
    __Vfunc_aes_mvm__337__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__337__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__337__vec_b)))));
    __Vfunc_aes_mvm__337__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__337__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__337__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__337__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__337__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__337__Vfuncout = __Vfunc_aes_mvm__337__vec_c;
    vlSelf->__Vfunc_aes_mvm__336__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__336__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__336__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__336__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__336__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__336__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__336__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__336__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__336__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__336__vec_c = 0U;
    __Vfunc_aes_mvm__336__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__336__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__336__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__336__vec_b)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__336__vec_b)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__336__vec_b)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__336__vec_b)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__336__vec_b)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__336__vec_b)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__336__vec_b)))));
    __Vfunc_aes_mvm__336__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__336__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__336__vec_b)))));
    __Vfunc_aes_mvm__336__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__336__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__336__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__336__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__336__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__336__Vfuncout = __Vfunc_aes_mvm__336__vec_c;
    vlSelf->data_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (0x63U ^ (IData)(__Vfunc_aes_mvm__336__Vfuncout))
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__337__Vfuncout)
                           : (0x63U ^ (IData)(__Vfunc_aes_mvm__338__Vfuncout))));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 4U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i 
        = ((0xcU & ((0x3ffffffcU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                    >> 2U)) ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                                               << 2U))) 
           | (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                    ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                       >> 2U))));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_prd 
        = ((0xf0000U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                        << 0x10U)) | ((0xc000U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                                  << 0xcU)) 
                                      | ((0x3000U & 
                                          ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma10_prd2) 
                                           << 0xaU)) 
                                         | ((0xc00U 
                                             & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                                << 0xaU)) 
                                            | ((0x300U 
                                                & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma10_prd2) 
                                                   << 8U)) 
                                               | ((0xc0U 
                                                   & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                                                      << 6U)) 
                                                  | ((0x30U 
                                                      & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                                                         << 4U)) 
                                                     | ((0xcU 
                                                         & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o) 
                                                            << 2U)) 
                                                        | (3U 
                                                           & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o))))))))));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i 
        = ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y_ss__q_o) 
           ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
              ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta 
        = ((0xcU & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta)) 
           | (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                    ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i))));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta 
        = ((0xcU & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta)) 
           | (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                     ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                    >> 2U)));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta 
        = ((3U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta)) 
           | (0xcU & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                       ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i)) 
                      << 2U)));
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta 
        = ((3U & (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta)) 
           | (0xcU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o) 
                      ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i))));
    __Vfunc_aes_mul_gf2p2__382__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__382__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__382__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__382__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__382__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__382__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__382__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__382__d)));
    __Vfunc_aes_mul_gf2p2__382__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__382__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__382__d)));
    __Vfunc_aes_mul_gf2p2__382__f = ((((IData)(__Vfunc_aes_mul_gf2p2__382__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__382__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__382__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__382__b)));
    __Vfunc_aes_mul_gf2p2__382__Vfuncout = __Vfunc_aes_mul_gf2p2__382__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__382__Vfuncout;
    __Vfunc_aes_mul_gf2p2__383__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__383__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__383__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__383__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__383__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__383__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__383__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__383__d)));
    __Vfunc_aes_mul_gf2p2__383__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__383__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__383__d)));
    __Vfunc_aes_mul_gf2p2__383__f = ((((IData)(__Vfunc_aes_mul_gf2p2__383__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__383__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__383__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__383__b)));
    __Vfunc_aes_mul_gf2p2__383__Vfuncout = __Vfunc_aes_mul_gf2p2__383__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__383__Vfuncout;
    __Vfunc_aes_square_gf2p2__375__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                               >> 6U) 
                                              ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                 >> 4U)));
    __Vfunc_aes_square_gf2p2__375__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__375__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__375__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__375__Vfuncout = __Vfunc_aes_square_gf2p2__375__d;
    __Vfunc_aes_scale_omega2_gf2p2__374__g = __Vfunc_aes_square_gf2p2__375__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__374__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__374__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__374__g)));
    __Vfunc_aes_scale_omega2_gf2p2__374__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__374__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__374__Vfuncout;
    __Vfunc_aes_square_gf2p2__377__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                               >> 2U) 
                                              ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i)));
    __Vfunc_aes_square_gf2p2__377__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__377__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__377__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__377__Vfuncout = __Vfunc_aes_square_gf2p2__377__d;
    __Vfunc_aes_scale_omega2_gf2p2__376__g = __Vfunc_aes_square_gf2p2__377__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__376__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__376__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__376__g)));
    __Vfunc_aes_scale_omega2_gf2p2__376__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__376__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__376__Vfuncout;
    __Vfunc_aes_mul_gf2p4__398__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__398__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__399__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__398__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__399__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__398__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__399__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__399__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__399__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__399__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__399__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__399__d)));
    __Vfunc_aes_mul_gf2p2__399__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__399__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__399__d)));
    __Vfunc_aes_mul_gf2p2__399__f = ((((IData)(__Vfunc_aes_mul_gf2p2__399__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__399__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__399__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__399__b)));
    __Vfunc_aes_mul_gf2p2__399__Vfuncout = __Vfunc_aes_mul_gf2p2__399__f;
    __Vfunc_aes_mul_gf2p4__398__a = __Vfunc_aes_mul_gf2p2__399__Vfuncout;
    __Vfunc_aes_mul_gf2p2__400__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__398__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__398__delta)));
    __Vfunc_aes_mul_gf2p2__400__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__398__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__398__gamma)));
    __Vfunc_aes_mul_gf2p2__400__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__400__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__400__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__400__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__400__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__400__d)));
    __Vfunc_aes_mul_gf2p2__400__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__400__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__400__d)));
    __Vfunc_aes_mul_gf2p2__400__f = ((((IData)(__Vfunc_aes_mul_gf2p2__400__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__400__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__400__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__400__b)));
    __Vfunc_aes_mul_gf2p2__400__Vfuncout = __Vfunc_aes_mul_gf2p2__400__f;
    __Vfunc_aes_mul_gf2p4__398__b = __Vfunc_aes_mul_gf2p2__400__Vfuncout;
    __Vfunc_aes_mul_gf2p2__401__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__398__delta));
    __Vfunc_aes_mul_gf2p2__401__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__398__gamma));
    __Vfunc_aes_mul_gf2p2__401__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__401__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__401__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__401__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__401__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__401__d)));
    __Vfunc_aes_mul_gf2p2__401__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__401__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__401__d)));
    __Vfunc_aes_mul_gf2p2__401__f = ((((IData)(__Vfunc_aes_mul_gf2p2__401__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__401__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__401__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__401__b)));
    __Vfunc_aes_mul_gf2p2__401__Vfuncout = __Vfunc_aes_mul_gf2p2__401__f;
    __Vfunc_aes_mul_gf2p4__398__c = __Vfunc_aes_mul_gf2p2__401__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__402__g = __Vfunc_aes_mul_gf2p4__398__b;
    __Vfunc_aes_scale_omega2_gf2p2__402__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__402__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__402__g)));
    __Vfunc_aes_scale_omega2_gf2p2__402__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__402__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__398__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__398__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__398__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__402__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__403__g = __Vfunc_aes_mul_gf2p4__398__b;
    __Vfunc_aes_scale_omega2_gf2p2__403__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__403__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__403__g)));
    __Vfunc_aes_scale_omega2_gf2p2__403__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__403__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__398__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__398__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__398__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__403__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__398__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__398__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__398__Vfuncout;
    __Vfunc_aes_mul_gf2p4__404__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__404__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__405__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__404__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__405__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__404__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__405__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__405__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__405__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__405__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__405__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__405__d)));
    __Vfunc_aes_mul_gf2p2__405__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__405__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__405__d)));
    __Vfunc_aes_mul_gf2p2__405__f = ((((IData)(__Vfunc_aes_mul_gf2p2__405__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__405__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__405__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__405__b)));
    __Vfunc_aes_mul_gf2p2__405__Vfuncout = __Vfunc_aes_mul_gf2p2__405__f;
    __Vfunc_aes_mul_gf2p4__404__a = __Vfunc_aes_mul_gf2p2__405__Vfuncout;
    __Vfunc_aes_mul_gf2p2__406__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__404__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__404__delta)));
    __Vfunc_aes_mul_gf2p2__406__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__404__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__404__gamma)));
    __Vfunc_aes_mul_gf2p2__406__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__406__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__406__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__406__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__406__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__406__d)));
    __Vfunc_aes_mul_gf2p2__406__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__406__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__406__d)));
    __Vfunc_aes_mul_gf2p2__406__f = ((((IData)(__Vfunc_aes_mul_gf2p2__406__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__406__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__406__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__406__b)));
    __Vfunc_aes_mul_gf2p2__406__Vfuncout = __Vfunc_aes_mul_gf2p2__406__f;
    __Vfunc_aes_mul_gf2p4__404__b = __Vfunc_aes_mul_gf2p2__406__Vfuncout;
    __Vfunc_aes_mul_gf2p2__407__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__404__delta));
    __Vfunc_aes_mul_gf2p2__407__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__404__gamma));
    __Vfunc_aes_mul_gf2p2__407__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__407__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__407__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__407__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__407__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__407__d)));
    __Vfunc_aes_mul_gf2p2__407__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__407__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__407__d)));
    __Vfunc_aes_mul_gf2p2__407__f = ((((IData)(__Vfunc_aes_mul_gf2p2__407__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__407__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__407__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__407__b)));
    __Vfunc_aes_mul_gf2p2__407__Vfuncout = __Vfunc_aes_mul_gf2p2__407__f;
    __Vfunc_aes_mul_gf2p4__404__c = __Vfunc_aes_mul_gf2p2__407__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__408__g = __Vfunc_aes_mul_gf2p4__404__b;
    __Vfunc_aes_scale_omega2_gf2p2__408__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__408__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__408__g)));
    __Vfunc_aes_scale_omega2_gf2p2__408__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__408__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__404__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__404__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__404__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__408__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__409__g = __Vfunc_aes_mul_gf2p4__404__b;
    __Vfunc_aes_scale_omega2_gf2p2__409__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__409__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__409__g)));
    __Vfunc_aes_scale_omega2_gf2p2__409__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__409__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__404__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__404__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__404__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__409__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__404__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__404__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__404__Vfuncout;
    __Vfunc_aes_mul_gf2p4__422__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__422__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p2__423__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__422__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__423__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__422__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__423__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__423__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__423__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__423__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__423__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__423__d)));
    __Vfunc_aes_mul_gf2p2__423__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__423__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__423__d)));
    __Vfunc_aes_mul_gf2p2__423__f = ((((IData)(__Vfunc_aes_mul_gf2p2__423__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__423__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__423__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__423__b)));
    __Vfunc_aes_mul_gf2p2__423__Vfuncout = __Vfunc_aes_mul_gf2p2__423__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__422__a = __Vfunc_aes_mul_gf2p2__423__Vfuncout;
    __Vfunc_aes_mul_gf2p2__424__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__422__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__422__delta)));
    __Vfunc_aes_mul_gf2p2__424__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__422__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__422__gamma)));
    __Vfunc_aes_mul_gf2p2__424__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__424__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__424__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__424__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__424__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__424__d)));
    __Vfunc_aes_mul_gf2p2__424__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__424__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__424__d)));
    __Vfunc_aes_mul_gf2p2__424__f = ((((IData)(__Vfunc_aes_mul_gf2p2__424__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__424__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__424__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__424__b)));
    __Vfunc_aes_mul_gf2p2__424__Vfuncout = __Vfunc_aes_mul_gf2p2__424__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__422__b = __Vfunc_aes_mul_gf2p2__424__Vfuncout;
    __Vfunc_aes_mul_gf2p2__425__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__422__delta));
    __Vfunc_aes_mul_gf2p2__425__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__422__gamma));
    vlSelf->__Vfunc_aes_mul_gf2p2__425__a = (1U & (
                                                   ((IData)(__Vfunc_aes_mul_gf2p2__425__g) 
                                                    & (IData)(__Vfunc_aes_mul_gf2p2__425__d)) 
                                                   >> 1U));
    vlSelf->__Vfunc_aes_mul_gf2p2__425__b = (1U & (
                                                   VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__425__g) 
                                                   & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__425__d)));
    vlSelf->__Vfunc_aes_mul_gf2p2__425__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__425__g) 
                                                   & (IData)(__Vfunc_aes_mul_gf2p2__425__d)));
}
