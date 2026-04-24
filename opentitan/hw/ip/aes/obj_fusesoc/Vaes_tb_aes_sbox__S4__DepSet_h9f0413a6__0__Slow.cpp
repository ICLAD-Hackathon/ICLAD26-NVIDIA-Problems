// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb_aes_sbox__S4.h"

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__2(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__2\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__86__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__90__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__91__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__91__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__91__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__98__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__98__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__98__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__98__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__98__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__98__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__99__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__99__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__99__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__99__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__99__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__99__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__99__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__100__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__100__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__100__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__100__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__100__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__100__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__100__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__101__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__101__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__101__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__101__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__101__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__101__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__101__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__102__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__102__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__102__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__103__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__103__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__103__d;
    // Body
    __Vfunc_aes_scale_omega2_gf2p2__90__Vfuncout = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__90__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__86__theta = ((3U 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__86__theta)) 
                                                | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__86__a) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__90__Vfuncout)) 
                                                   << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__91__g = vlSelf->__Vfunc_aes_mul_gf2p4__86__b;
    __Vfunc_aes_scale_omega2_gf2p2__91__d = ((2U & 
                                              ((IData)(__Vfunc_aes_scale_omega2_gf2p2__91__g) 
                                               << 1U)) 
                                             | (1U 
                                                & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__91__g)));
    __Vfunc_aes_scale_omega2_gf2p2__91__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__91__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__86__theta = ((0xcU 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__86__theta)) 
                                                | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__86__c) 
                                                   ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__91__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__86__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__86__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__86__Vfuncout;
    __Vfunc_aes_mul_gf2p4__98__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__98__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__99__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__98__delta) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__99__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__98__gamma) 
                                          >> 2U));
    __Vfunc_aes_mul_gf2p2__99__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__99__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__99__d)) 
                                          >> 1U));
    __Vfunc_aes_mul_gf2p2__99__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__99__g) 
                                          & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__99__d)));
    __Vfunc_aes_mul_gf2p2__99__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__99__g) 
                                          & (IData)(__Vfunc_aes_mul_gf2p2__99__d)));
    __Vfunc_aes_mul_gf2p2__99__f = ((((IData)(__Vfunc_aes_mul_gf2p2__99__a) 
                                      ^ (IData)(__Vfunc_aes_mul_gf2p2__99__b)) 
                                     << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__99__c) 
                                               ^ (IData)(__Vfunc_aes_mul_gf2p2__99__b)));
    __Vfunc_aes_mul_gf2p2__99__Vfuncout = __Vfunc_aes_mul_gf2p2__99__f;
    __Vfunc_aes_mul_gf2p4__98__a = __Vfunc_aes_mul_gf2p2__99__Vfuncout;
    __Vfunc_aes_mul_gf2p2__100__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__98__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__98__delta)));
    __Vfunc_aes_mul_gf2p2__100__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__98__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__98__gamma)));
    __Vfunc_aes_mul_gf2p2__100__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__100__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__100__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__100__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__100__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__100__d)));
    __Vfunc_aes_mul_gf2p2__100__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__100__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__100__d)));
    __Vfunc_aes_mul_gf2p2__100__f = ((((IData)(__Vfunc_aes_mul_gf2p2__100__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__100__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__100__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__100__b)));
    __Vfunc_aes_mul_gf2p2__100__Vfuncout = __Vfunc_aes_mul_gf2p2__100__f;
    __Vfunc_aes_mul_gf2p4__98__b = __Vfunc_aes_mul_gf2p2__100__Vfuncout;
    __Vfunc_aes_mul_gf2p2__101__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__98__delta));
    __Vfunc_aes_mul_gf2p2__101__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__98__gamma));
    __Vfunc_aes_mul_gf2p2__101__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__101__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__101__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__101__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__101__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__101__d)));
    __Vfunc_aes_mul_gf2p2__101__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__101__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__101__d)));
    __Vfunc_aes_mul_gf2p2__101__f = ((((IData)(__Vfunc_aes_mul_gf2p2__101__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__101__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__101__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__101__b)));
    __Vfunc_aes_mul_gf2p2__101__Vfuncout = __Vfunc_aes_mul_gf2p2__101__f;
    __Vfunc_aes_mul_gf2p4__98__c = __Vfunc_aes_mul_gf2p2__101__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__102__g = __Vfunc_aes_mul_gf2p4__98__b;
    __Vfunc_aes_scale_omega2_gf2p2__102__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__102__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__102__g)));
    __Vfunc_aes_scale_omega2_gf2p2__102__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__102__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__98__theta = ((3U 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__98__theta)) 
                                                | (((IData)(__Vfunc_aes_mul_gf2p4__98__a) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__102__Vfuncout)) 
                                                   << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__103__g = __Vfunc_aes_mul_gf2p4__98__b;
    __Vfunc_aes_scale_omega2_gf2p2__103__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__103__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__103__g)));
    __Vfunc_aes_scale_omega2_gf2p2__103__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__103__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__98__theta = ((0xcU 
                                                 & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__98__theta)) 
                                                | ((IData)(__Vfunc_aes_mul_gf2p4__98__c) 
                                                   ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__103__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__98__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__98__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__98__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__4(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__4\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__196__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__200__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__201__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__201__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__201__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__208__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__208__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__208__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__208__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__208__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__208__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__209__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__209__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__209__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__209__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__209__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__209__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__209__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__210__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__210__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__210__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__210__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__210__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__210__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__210__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__211__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__211__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__211__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__211__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__211__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__211__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__211__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__212__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__212__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__212__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__213__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__213__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__213__d;
    // Body
    __Vfunc_aes_scale_omega2_gf2p2__200__Vfuncout = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__200__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__196__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__196__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__196__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__200__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__201__g = vlSelf->__Vfunc_aes_mul_gf2p4__196__b;
    __Vfunc_aes_scale_omega2_gf2p2__201__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__201__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__201__g)));
    __Vfunc_aes_scale_omega2_gf2p2__201__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__201__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__196__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__196__theta)) 
                                                 | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__196__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__201__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__196__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__196__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__196__Vfuncout;
    __Vfunc_aes_mul_gf2p4__208__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__208__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__209__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__208__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__209__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__208__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__209__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__209__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__209__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__209__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__209__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__209__d)));
    __Vfunc_aes_mul_gf2p2__209__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__209__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__209__d)));
    __Vfunc_aes_mul_gf2p2__209__f = ((((IData)(__Vfunc_aes_mul_gf2p2__209__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__209__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__209__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__209__b)));
    __Vfunc_aes_mul_gf2p2__209__Vfuncout = __Vfunc_aes_mul_gf2p2__209__f;
    __Vfunc_aes_mul_gf2p4__208__a = __Vfunc_aes_mul_gf2p2__209__Vfuncout;
    __Vfunc_aes_mul_gf2p2__210__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__208__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__208__delta)));
    __Vfunc_aes_mul_gf2p2__210__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__208__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__208__gamma)));
    __Vfunc_aes_mul_gf2p2__210__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__210__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__210__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__210__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__210__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__210__d)));
    __Vfunc_aes_mul_gf2p2__210__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__210__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__210__d)));
    __Vfunc_aes_mul_gf2p2__210__f = ((((IData)(__Vfunc_aes_mul_gf2p2__210__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__210__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__210__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__210__b)));
    __Vfunc_aes_mul_gf2p2__210__Vfuncout = __Vfunc_aes_mul_gf2p2__210__f;
    __Vfunc_aes_mul_gf2p4__208__b = __Vfunc_aes_mul_gf2p2__210__Vfuncout;
    __Vfunc_aes_mul_gf2p2__211__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__208__delta));
    __Vfunc_aes_mul_gf2p2__211__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__208__gamma));
    __Vfunc_aes_mul_gf2p2__211__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__211__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__211__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__211__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__211__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__211__d)));
    __Vfunc_aes_mul_gf2p2__211__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__211__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__211__d)));
    __Vfunc_aes_mul_gf2p2__211__f = ((((IData)(__Vfunc_aes_mul_gf2p2__211__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__211__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__211__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__211__b)));
    __Vfunc_aes_mul_gf2p2__211__Vfuncout = __Vfunc_aes_mul_gf2p2__211__f;
    __Vfunc_aes_mul_gf2p4__208__c = __Vfunc_aes_mul_gf2p2__211__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__212__g = __Vfunc_aes_mul_gf2p4__208__b;
    __Vfunc_aes_scale_omega2_gf2p2__212__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__212__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__212__g)));
    __Vfunc_aes_scale_omega2_gf2p2__212__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__212__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__208__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__208__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__208__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__212__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__213__g = __Vfunc_aes_mul_gf2p4__208__b;
    __Vfunc_aes_scale_omega2_gf2p2__213__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__213__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__213__g)));
    __Vfunc_aes_scale_omega2_gf2p2__213__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__213__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__208__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__208__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__208__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__213__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__208__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__208__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__208__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__6(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__6\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__306__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__310__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__311__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__311__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__311__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__318__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__318__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__318__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__318__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__318__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__318__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__319__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__319__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__319__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__319__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__319__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__319__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__319__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__320__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__320__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__320__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__320__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__320__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__320__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__320__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__321__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__321__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__321__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__321__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__321__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__321__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__321__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__322__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__322__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__322__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__323__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__323__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__323__d;
    // Body
    __Vfunc_aes_scale_omega2_gf2p2__310__Vfuncout = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__310__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__306__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__306__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__306__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__310__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__311__g = vlSelf->__Vfunc_aes_mul_gf2p4__306__b;
    __Vfunc_aes_scale_omega2_gf2p2__311__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__311__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__311__g)));
    __Vfunc_aes_scale_omega2_gf2p2__311__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__311__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__306__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__306__theta)) 
                                                 | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__306__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__311__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__306__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__306__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__306__Vfuncout;
    __Vfunc_aes_mul_gf2p4__318__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__318__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__319__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__318__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__319__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__318__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__319__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__319__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__319__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__319__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__319__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__319__d)));
    __Vfunc_aes_mul_gf2p2__319__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__319__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__319__d)));
    __Vfunc_aes_mul_gf2p2__319__f = ((((IData)(__Vfunc_aes_mul_gf2p2__319__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__319__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__319__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__319__b)));
    __Vfunc_aes_mul_gf2p2__319__Vfuncout = __Vfunc_aes_mul_gf2p2__319__f;
    __Vfunc_aes_mul_gf2p4__318__a = __Vfunc_aes_mul_gf2p2__319__Vfuncout;
    __Vfunc_aes_mul_gf2p2__320__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__318__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__318__delta)));
    __Vfunc_aes_mul_gf2p2__320__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__318__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__318__gamma)));
    __Vfunc_aes_mul_gf2p2__320__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__320__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__320__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__320__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__320__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__320__d)));
    __Vfunc_aes_mul_gf2p2__320__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__320__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__320__d)));
    __Vfunc_aes_mul_gf2p2__320__f = ((((IData)(__Vfunc_aes_mul_gf2p2__320__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__320__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__320__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__320__b)));
    __Vfunc_aes_mul_gf2p2__320__Vfuncout = __Vfunc_aes_mul_gf2p2__320__f;
    __Vfunc_aes_mul_gf2p4__318__b = __Vfunc_aes_mul_gf2p2__320__Vfuncout;
    __Vfunc_aes_mul_gf2p2__321__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__318__delta));
    __Vfunc_aes_mul_gf2p2__321__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__318__gamma));
    __Vfunc_aes_mul_gf2p2__321__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__321__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__321__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__321__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__321__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__321__d)));
    __Vfunc_aes_mul_gf2p2__321__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__321__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__321__d)));
    __Vfunc_aes_mul_gf2p2__321__f = ((((IData)(__Vfunc_aes_mul_gf2p2__321__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__321__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__321__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__321__b)));
    __Vfunc_aes_mul_gf2p2__321__Vfuncout = __Vfunc_aes_mul_gf2p2__321__f;
    __Vfunc_aes_mul_gf2p4__318__c = __Vfunc_aes_mul_gf2p2__321__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__322__g = __Vfunc_aes_mul_gf2p4__318__b;
    __Vfunc_aes_scale_omega2_gf2p2__322__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__322__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__322__g)));
    __Vfunc_aes_scale_omega2_gf2p2__322__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__322__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__318__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__318__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__318__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__322__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__323__g = __Vfunc_aes_mul_gf2p4__318__b;
    __Vfunc_aes_scale_omega2_gf2p2__323__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__323__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__323__g)));
    __Vfunc_aes_scale_omega2_gf2p2__323__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__323__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__318__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__318__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__318__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__323__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__318__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__318__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__318__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__8(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__8\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__416__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__420__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__421__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__421__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__421__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__428__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__428__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__428__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__428__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__428__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__428__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__429__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__429__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__429__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__429__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__429__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__429__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__429__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__430__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__430__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__430__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__430__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__430__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__430__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__430__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__431__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__431__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__431__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__431__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__431__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__431__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__431__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__432__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__432__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__432__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__433__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__433__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__433__d;
    // Body
    __Vfunc_aes_scale_omega2_gf2p2__420__Vfuncout = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__420__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__416__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__416__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__416__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__420__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__421__g = vlSelf->__Vfunc_aes_mul_gf2p4__416__b;
    __Vfunc_aes_scale_omega2_gf2p2__421__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__421__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__421__g)));
    __Vfunc_aes_scale_omega2_gf2p2__421__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__421__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__416__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__416__theta)) 
                                                 | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__416__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__421__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__416__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__416__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__416__Vfuncout;
    __Vfunc_aes_mul_gf2p4__428__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__428__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__429__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__428__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__429__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__428__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__429__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__429__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__429__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__429__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__429__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__429__d)));
    __Vfunc_aes_mul_gf2p2__429__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__429__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__429__d)));
    __Vfunc_aes_mul_gf2p2__429__f = ((((IData)(__Vfunc_aes_mul_gf2p2__429__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__429__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__429__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__429__b)));
    __Vfunc_aes_mul_gf2p2__429__Vfuncout = __Vfunc_aes_mul_gf2p2__429__f;
    __Vfunc_aes_mul_gf2p4__428__a = __Vfunc_aes_mul_gf2p2__429__Vfuncout;
    __Vfunc_aes_mul_gf2p2__430__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__428__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__428__delta)));
    __Vfunc_aes_mul_gf2p2__430__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__428__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__428__gamma)));
    __Vfunc_aes_mul_gf2p2__430__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__430__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__430__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__430__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__430__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__430__d)));
    __Vfunc_aes_mul_gf2p2__430__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__430__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__430__d)));
    __Vfunc_aes_mul_gf2p2__430__f = ((((IData)(__Vfunc_aes_mul_gf2p2__430__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__430__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__430__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__430__b)));
    __Vfunc_aes_mul_gf2p2__430__Vfuncout = __Vfunc_aes_mul_gf2p2__430__f;
    __Vfunc_aes_mul_gf2p4__428__b = __Vfunc_aes_mul_gf2p2__430__Vfuncout;
    __Vfunc_aes_mul_gf2p2__431__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__428__delta));
    __Vfunc_aes_mul_gf2p2__431__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__428__gamma));
    __Vfunc_aes_mul_gf2p2__431__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__431__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__431__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__431__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__431__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__431__d)));
    __Vfunc_aes_mul_gf2p2__431__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__431__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__431__d)));
    __Vfunc_aes_mul_gf2p2__431__f = ((((IData)(__Vfunc_aes_mul_gf2p2__431__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__431__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__431__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__431__b)));
    __Vfunc_aes_mul_gf2p2__431__Vfuncout = __Vfunc_aes_mul_gf2p2__431__f;
    __Vfunc_aes_mul_gf2p4__428__c = __Vfunc_aes_mul_gf2p2__431__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__432__g = __Vfunc_aes_mul_gf2p4__428__b;
    __Vfunc_aes_scale_omega2_gf2p2__432__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__432__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__432__g)));
    __Vfunc_aes_scale_omega2_gf2p2__432__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__432__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__428__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__428__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__428__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__432__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__433__g = __Vfunc_aes_mul_gf2p4__428__b;
    __Vfunc_aes_scale_omega2_gf2p2__433__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__433__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__433__g)));
    __Vfunc_aes_scale_omega2_gf2p2__433__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__433__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__428__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__428__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__428__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__433__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__428__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__428__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__428__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__10(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__10\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__526__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__530__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__531__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__531__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__531__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__538__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__538__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__538__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__538__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__538__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__538__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__539__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__539__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__539__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__539__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__539__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__539__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__539__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__540__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__540__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__540__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__540__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__540__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__540__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__540__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__541__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__541__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__541__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__541__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__541__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__541__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__541__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__542__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__542__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__542__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__543__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__543__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__543__d;
    // Body
    __Vfunc_aes_scale_omega2_gf2p2__530__Vfuncout = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__530__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__526__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__526__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__526__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__530__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__531__g = vlSelf->__Vfunc_aes_mul_gf2p4__526__b;
    __Vfunc_aes_scale_omega2_gf2p2__531__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__531__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__531__g)));
    __Vfunc_aes_scale_omega2_gf2p2__531__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__531__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__526__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__526__theta)) 
                                                 | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__526__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__531__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__526__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__526__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__526__Vfuncout;
    __Vfunc_aes_mul_gf2p4__538__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__538__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__539__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__538__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__539__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__538__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__539__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__539__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__539__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__539__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__539__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__539__d)));
    __Vfunc_aes_mul_gf2p2__539__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__539__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__539__d)));
    __Vfunc_aes_mul_gf2p2__539__f = ((((IData)(__Vfunc_aes_mul_gf2p2__539__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__539__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__539__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__539__b)));
    __Vfunc_aes_mul_gf2p2__539__Vfuncout = __Vfunc_aes_mul_gf2p2__539__f;
    __Vfunc_aes_mul_gf2p4__538__a = __Vfunc_aes_mul_gf2p2__539__Vfuncout;
    __Vfunc_aes_mul_gf2p2__540__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__538__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__538__delta)));
    __Vfunc_aes_mul_gf2p2__540__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__538__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__538__gamma)));
    __Vfunc_aes_mul_gf2p2__540__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__540__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__540__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__540__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__540__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__540__d)));
    __Vfunc_aes_mul_gf2p2__540__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__540__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__540__d)));
    __Vfunc_aes_mul_gf2p2__540__f = ((((IData)(__Vfunc_aes_mul_gf2p2__540__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__540__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__540__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__540__b)));
    __Vfunc_aes_mul_gf2p2__540__Vfuncout = __Vfunc_aes_mul_gf2p2__540__f;
    __Vfunc_aes_mul_gf2p4__538__b = __Vfunc_aes_mul_gf2p2__540__Vfuncout;
    __Vfunc_aes_mul_gf2p2__541__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__538__delta));
    __Vfunc_aes_mul_gf2p2__541__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__538__gamma));
    __Vfunc_aes_mul_gf2p2__541__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__541__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__541__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__541__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__541__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__541__d)));
    __Vfunc_aes_mul_gf2p2__541__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__541__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__541__d)));
    __Vfunc_aes_mul_gf2p2__541__f = ((((IData)(__Vfunc_aes_mul_gf2p2__541__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__541__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__541__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__541__b)));
    __Vfunc_aes_mul_gf2p2__541__Vfuncout = __Vfunc_aes_mul_gf2p2__541__f;
    __Vfunc_aes_mul_gf2p4__538__c = __Vfunc_aes_mul_gf2p2__541__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__542__g = __Vfunc_aes_mul_gf2p4__538__b;
    __Vfunc_aes_scale_omega2_gf2p2__542__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__542__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__542__g)));
    __Vfunc_aes_scale_omega2_gf2p2__542__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__542__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__538__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__538__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__538__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__542__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__543__g = __Vfunc_aes_mul_gf2p4__538__b;
    __Vfunc_aes_scale_omega2_gf2p2__543__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__543__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__543__g)));
    __Vfunc_aes_scale_omega2_gf2p2__543__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__543__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__538__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__538__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__538__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__543__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__538__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__538__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__538__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__12(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__12\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__636__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__640__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__641__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__641__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__641__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__648__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__648__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__648__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__648__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__648__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__648__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__649__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__649__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__649__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__649__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__649__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__649__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__649__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__650__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__650__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__650__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__650__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__650__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__650__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__650__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__651__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__651__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__651__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__651__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__651__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__651__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__651__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__652__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__652__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__652__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__653__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__653__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__653__d;
    // Body
    __Vfunc_aes_scale_omega2_gf2p2__640__Vfuncout = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__640__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__636__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__636__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__636__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__640__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__641__g = vlSelf->__Vfunc_aes_mul_gf2p4__636__b;
    __Vfunc_aes_scale_omega2_gf2p2__641__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__641__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__641__g)));
    __Vfunc_aes_scale_omega2_gf2p2__641__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__641__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__636__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__636__theta)) 
                                                 | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__636__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__641__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__636__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__636__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__636__Vfuncout;
    __Vfunc_aes_mul_gf2p4__648__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__648__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__649__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__648__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__649__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__648__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__649__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__649__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__649__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__649__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__649__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__649__d)));
    __Vfunc_aes_mul_gf2p2__649__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__649__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__649__d)));
    __Vfunc_aes_mul_gf2p2__649__f = ((((IData)(__Vfunc_aes_mul_gf2p2__649__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__649__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__649__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__649__b)));
    __Vfunc_aes_mul_gf2p2__649__Vfuncout = __Vfunc_aes_mul_gf2p2__649__f;
    __Vfunc_aes_mul_gf2p4__648__a = __Vfunc_aes_mul_gf2p2__649__Vfuncout;
    __Vfunc_aes_mul_gf2p2__650__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__648__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__648__delta)));
    __Vfunc_aes_mul_gf2p2__650__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__648__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__648__gamma)));
    __Vfunc_aes_mul_gf2p2__650__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__650__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__650__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__650__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__650__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__650__d)));
    __Vfunc_aes_mul_gf2p2__650__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__650__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__650__d)));
    __Vfunc_aes_mul_gf2p2__650__f = ((((IData)(__Vfunc_aes_mul_gf2p2__650__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__650__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__650__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__650__b)));
    __Vfunc_aes_mul_gf2p2__650__Vfuncout = __Vfunc_aes_mul_gf2p2__650__f;
    __Vfunc_aes_mul_gf2p4__648__b = __Vfunc_aes_mul_gf2p2__650__Vfuncout;
    __Vfunc_aes_mul_gf2p2__651__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__648__delta));
    __Vfunc_aes_mul_gf2p2__651__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__648__gamma));
    __Vfunc_aes_mul_gf2p2__651__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__651__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__651__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__651__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__651__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__651__d)));
    __Vfunc_aes_mul_gf2p2__651__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__651__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__651__d)));
    __Vfunc_aes_mul_gf2p2__651__f = ((((IData)(__Vfunc_aes_mul_gf2p2__651__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__651__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__651__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__651__b)));
    __Vfunc_aes_mul_gf2p2__651__Vfuncout = __Vfunc_aes_mul_gf2p2__651__f;
    __Vfunc_aes_mul_gf2p4__648__c = __Vfunc_aes_mul_gf2p2__651__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__652__g = __Vfunc_aes_mul_gf2p4__648__b;
    __Vfunc_aes_scale_omega2_gf2p2__652__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__652__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__652__g)));
    __Vfunc_aes_scale_omega2_gf2p2__652__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__652__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__648__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__648__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__648__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__652__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__653__g = __Vfunc_aes_mul_gf2p4__648__b;
    __Vfunc_aes_scale_omega2_gf2p2__653__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__653__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__653__g)));
    __Vfunc_aes_scale_omega2_gf2p2__653__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__653__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__648__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__648__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__648__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__653__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__648__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__648__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__648__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__14(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__14\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__746__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__750__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__751__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__751__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__751__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__758__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__758__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__758__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__758__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__758__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__758__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__759__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__759__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__759__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__759__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__759__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__759__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__759__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__760__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__760__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__760__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__760__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__760__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__760__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__760__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__761__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__761__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__761__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__761__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__761__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__761__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__761__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__762__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__762__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__762__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__763__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__763__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__763__d;
    // Body
    __Vfunc_aes_scale_omega2_gf2p2__750__Vfuncout = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__750__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__746__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__746__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__746__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__750__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__751__g = vlSelf->__Vfunc_aes_mul_gf2p4__746__b;
    __Vfunc_aes_scale_omega2_gf2p2__751__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__751__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__751__g)));
    __Vfunc_aes_scale_omega2_gf2p2__751__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__751__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__746__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__746__theta)) 
                                                 | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__746__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__751__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__746__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__746__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__746__Vfuncout;
    __Vfunc_aes_mul_gf2p4__758__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__758__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__759__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__758__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__759__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__758__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__759__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__759__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__759__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__759__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__759__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__759__d)));
    __Vfunc_aes_mul_gf2p2__759__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__759__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__759__d)));
    __Vfunc_aes_mul_gf2p2__759__f = ((((IData)(__Vfunc_aes_mul_gf2p2__759__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__759__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__759__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__759__b)));
    __Vfunc_aes_mul_gf2p2__759__Vfuncout = __Vfunc_aes_mul_gf2p2__759__f;
    __Vfunc_aes_mul_gf2p4__758__a = __Vfunc_aes_mul_gf2p2__759__Vfuncout;
    __Vfunc_aes_mul_gf2p2__760__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__758__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__758__delta)));
    __Vfunc_aes_mul_gf2p2__760__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__758__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__758__gamma)));
    __Vfunc_aes_mul_gf2p2__760__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__760__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__760__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__760__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__760__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__760__d)));
    __Vfunc_aes_mul_gf2p2__760__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__760__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__760__d)));
    __Vfunc_aes_mul_gf2p2__760__f = ((((IData)(__Vfunc_aes_mul_gf2p2__760__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__760__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__760__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__760__b)));
    __Vfunc_aes_mul_gf2p2__760__Vfuncout = __Vfunc_aes_mul_gf2p2__760__f;
    __Vfunc_aes_mul_gf2p4__758__b = __Vfunc_aes_mul_gf2p2__760__Vfuncout;
    __Vfunc_aes_mul_gf2p2__761__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__758__delta));
    __Vfunc_aes_mul_gf2p2__761__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__758__gamma));
    __Vfunc_aes_mul_gf2p2__761__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__761__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__761__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__761__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__761__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__761__d)));
    __Vfunc_aes_mul_gf2p2__761__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__761__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__761__d)));
    __Vfunc_aes_mul_gf2p2__761__f = ((((IData)(__Vfunc_aes_mul_gf2p2__761__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__761__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__761__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__761__b)));
    __Vfunc_aes_mul_gf2p2__761__Vfuncout = __Vfunc_aes_mul_gf2p2__761__f;
    __Vfunc_aes_mul_gf2p4__758__c = __Vfunc_aes_mul_gf2p2__761__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__762__g = __Vfunc_aes_mul_gf2p4__758__b;
    __Vfunc_aes_scale_omega2_gf2p2__762__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__762__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__762__g)));
    __Vfunc_aes_scale_omega2_gf2p2__762__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__762__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__758__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__758__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__758__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__762__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__763__g = __Vfunc_aes_mul_gf2p4__758__b;
    __Vfunc_aes_scale_omega2_gf2p2__763__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__763__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__763__g)));
    __Vfunc_aes_scale_omega2_gf2p2__763__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__763__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__758__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__758__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__758__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__763__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__758__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__758__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__758__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__16(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__16\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__856__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__860__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__861__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__861__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__861__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__868__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__868__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__868__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__868__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__868__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__868__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__869__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__869__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__869__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__869__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__869__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__869__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__869__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__870__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__870__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__870__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__870__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__870__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__870__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__870__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__871__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__871__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__871__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__871__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__871__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__871__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__871__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__872__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__872__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__872__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__873__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__873__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__873__d;
    // Body
    __Vfunc_aes_scale_omega2_gf2p2__860__Vfuncout = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__860__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__856__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__856__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__856__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__860__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__861__g = vlSelf->__Vfunc_aes_mul_gf2p4__856__b;
    __Vfunc_aes_scale_omega2_gf2p2__861__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__861__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__861__g)));
    __Vfunc_aes_scale_omega2_gf2p2__861__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__861__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__856__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__856__theta)) 
                                                 | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__856__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__861__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__856__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__856__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__856__Vfuncout;
    __Vfunc_aes_mul_gf2p4__868__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__868__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__869__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__868__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__869__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__868__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__869__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__869__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__869__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__869__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__869__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__869__d)));
    __Vfunc_aes_mul_gf2p2__869__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__869__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__869__d)));
    __Vfunc_aes_mul_gf2p2__869__f = ((((IData)(__Vfunc_aes_mul_gf2p2__869__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__869__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__869__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__869__b)));
    __Vfunc_aes_mul_gf2p2__869__Vfuncout = __Vfunc_aes_mul_gf2p2__869__f;
    __Vfunc_aes_mul_gf2p4__868__a = __Vfunc_aes_mul_gf2p2__869__Vfuncout;
    __Vfunc_aes_mul_gf2p2__870__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__868__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__868__delta)));
    __Vfunc_aes_mul_gf2p2__870__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__868__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__868__gamma)));
    __Vfunc_aes_mul_gf2p2__870__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__870__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__870__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__870__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__870__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__870__d)));
    __Vfunc_aes_mul_gf2p2__870__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__870__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__870__d)));
    __Vfunc_aes_mul_gf2p2__870__f = ((((IData)(__Vfunc_aes_mul_gf2p2__870__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__870__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__870__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__870__b)));
    __Vfunc_aes_mul_gf2p2__870__Vfuncout = __Vfunc_aes_mul_gf2p2__870__f;
    __Vfunc_aes_mul_gf2p4__868__b = __Vfunc_aes_mul_gf2p2__870__Vfuncout;
    __Vfunc_aes_mul_gf2p2__871__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__868__delta));
    __Vfunc_aes_mul_gf2p2__871__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__868__gamma));
    __Vfunc_aes_mul_gf2p2__871__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__871__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__871__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__871__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__871__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__871__d)));
    __Vfunc_aes_mul_gf2p2__871__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__871__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__871__d)));
    __Vfunc_aes_mul_gf2p2__871__f = ((((IData)(__Vfunc_aes_mul_gf2p2__871__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__871__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__871__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__871__b)));
    __Vfunc_aes_mul_gf2p2__871__Vfuncout = __Vfunc_aes_mul_gf2p2__871__f;
    __Vfunc_aes_mul_gf2p4__868__c = __Vfunc_aes_mul_gf2p2__871__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__872__g = __Vfunc_aes_mul_gf2p4__868__b;
    __Vfunc_aes_scale_omega2_gf2p2__872__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__872__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__872__g)));
    __Vfunc_aes_scale_omega2_gf2p2__872__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__872__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__868__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__868__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__868__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__872__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__873__g = __Vfunc_aes_mul_gf2p4__868__b;
    __Vfunc_aes_scale_omega2_gf2p2__873__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__873__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__873__g)));
    __Vfunc_aes_scale_omega2_gf2p2__873__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__873__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__868__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__868__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__868__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__873__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__868__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__868__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__868__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__18(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__18\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__966__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__970__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__971__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__971__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__971__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__978__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__978__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__978__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__978__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__978__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__978__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__979__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__979__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__979__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__979__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__979__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__979__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__979__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__980__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__980__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__980__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__980__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__980__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__980__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__980__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__981__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__981__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__981__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__981__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__981__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__981__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__981__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__982__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__982__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__982__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__983__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__983__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__983__d;
    // Body
    __Vfunc_aes_scale_omega2_gf2p2__970__Vfuncout = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__970__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__966__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__966__theta)) 
                                                 | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__966__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__970__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__971__g = vlSelf->__Vfunc_aes_mul_gf2p4__966__b;
    __Vfunc_aes_scale_omega2_gf2p2__971__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__971__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__971__g)));
    __Vfunc_aes_scale_omega2_gf2p2__971__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__971__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__966__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__966__theta)) 
                                                 | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__966__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__971__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__966__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__966__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__966__Vfuncout;
    __Vfunc_aes_mul_gf2p4__978__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__978__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__979__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__978__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__979__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__978__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__979__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__979__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__979__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__979__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__979__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__979__d)));
    __Vfunc_aes_mul_gf2p2__979__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__979__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__979__d)));
    __Vfunc_aes_mul_gf2p2__979__f = ((((IData)(__Vfunc_aes_mul_gf2p2__979__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__979__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__979__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__979__b)));
    __Vfunc_aes_mul_gf2p2__979__Vfuncout = __Vfunc_aes_mul_gf2p2__979__f;
    __Vfunc_aes_mul_gf2p4__978__a = __Vfunc_aes_mul_gf2p2__979__Vfuncout;
    __Vfunc_aes_mul_gf2p2__980__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__978__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__978__delta)));
    __Vfunc_aes_mul_gf2p2__980__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__978__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__978__gamma)));
    __Vfunc_aes_mul_gf2p2__980__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__980__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__980__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__980__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__980__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__980__d)));
    __Vfunc_aes_mul_gf2p2__980__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__980__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__980__d)));
    __Vfunc_aes_mul_gf2p2__980__f = ((((IData)(__Vfunc_aes_mul_gf2p2__980__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__980__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__980__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__980__b)));
    __Vfunc_aes_mul_gf2p2__980__Vfuncout = __Vfunc_aes_mul_gf2p2__980__f;
    __Vfunc_aes_mul_gf2p4__978__b = __Vfunc_aes_mul_gf2p2__980__Vfuncout;
    __Vfunc_aes_mul_gf2p2__981__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__978__delta));
    __Vfunc_aes_mul_gf2p2__981__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__978__gamma));
    __Vfunc_aes_mul_gf2p2__981__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__981__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__981__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__981__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__981__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__981__d)));
    __Vfunc_aes_mul_gf2p2__981__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__981__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__981__d)));
    __Vfunc_aes_mul_gf2p2__981__f = ((((IData)(__Vfunc_aes_mul_gf2p2__981__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__981__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__981__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__981__b)));
    __Vfunc_aes_mul_gf2p2__981__Vfuncout = __Vfunc_aes_mul_gf2p2__981__f;
    __Vfunc_aes_mul_gf2p4__978__c = __Vfunc_aes_mul_gf2p2__981__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__982__g = __Vfunc_aes_mul_gf2p4__978__b;
    __Vfunc_aes_scale_omega2_gf2p2__982__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__982__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__982__g)));
    __Vfunc_aes_scale_omega2_gf2p2__982__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__982__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__978__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__978__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__978__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__982__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__983__g = __Vfunc_aes_mul_gf2p4__978__b;
    __Vfunc_aes_scale_omega2_gf2p2__983__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__983__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__983__g)));
    __Vfunc_aes_scale_omega2_gf2p2__983__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__983__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__978__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__978__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__978__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__983__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__978__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__978__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__978__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__20(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__20\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1076__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1080__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1081__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1081__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1081__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1088__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1088__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1088__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1088__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1088__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1088__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1089__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1089__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1089__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1089__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1089__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1089__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1089__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1090__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1090__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1090__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1090__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1090__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1090__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1090__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1091__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1091__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1091__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1091__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1091__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1091__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1091__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1092__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1092__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1092__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1093__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1093__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1093__d;
    // Body
    __Vfunc_aes_scale_omega2_gf2p2__1080__Vfuncout 
        = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1080__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1076__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1076__theta)) 
                                                  | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1076__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1080__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1081__g = vlSelf->__Vfunc_aes_mul_gf2p4__1076__b;
    __Vfunc_aes_scale_omega2_gf2p2__1081__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1081__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1081__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1081__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1081__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1076__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1076__theta)) 
                                                  | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1076__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1081__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1076__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1076__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1076__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1088__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1088__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1089__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1088__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1089__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1088__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1089__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1089__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1089__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1089__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1089__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1089__d)));
    __Vfunc_aes_mul_gf2p2__1089__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1089__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1089__d)));
    __Vfunc_aes_mul_gf2p2__1089__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1089__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1089__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1089__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1089__b)));
    __Vfunc_aes_mul_gf2p2__1089__Vfuncout = __Vfunc_aes_mul_gf2p2__1089__f;
    __Vfunc_aes_mul_gf2p4__1088__a = __Vfunc_aes_mul_gf2p2__1089__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1090__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1088__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1088__delta)));
    __Vfunc_aes_mul_gf2p2__1090__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1088__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1088__gamma)));
    __Vfunc_aes_mul_gf2p2__1090__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1090__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1090__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1090__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1090__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1090__d)));
    __Vfunc_aes_mul_gf2p2__1090__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1090__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1090__d)));
    __Vfunc_aes_mul_gf2p2__1090__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1090__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1090__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1090__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1090__b)));
    __Vfunc_aes_mul_gf2p2__1090__Vfuncout = __Vfunc_aes_mul_gf2p2__1090__f;
    __Vfunc_aes_mul_gf2p4__1088__b = __Vfunc_aes_mul_gf2p2__1090__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1091__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1088__delta));
    __Vfunc_aes_mul_gf2p2__1091__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1088__gamma));
    __Vfunc_aes_mul_gf2p2__1091__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1091__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1091__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1091__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1091__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1091__d)));
    __Vfunc_aes_mul_gf2p2__1091__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1091__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1091__d)));
    __Vfunc_aes_mul_gf2p2__1091__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1091__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1091__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1091__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1091__b)));
    __Vfunc_aes_mul_gf2p2__1091__Vfuncout = __Vfunc_aes_mul_gf2p2__1091__f;
    __Vfunc_aes_mul_gf2p4__1088__c = __Vfunc_aes_mul_gf2p2__1091__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1092__g = __Vfunc_aes_mul_gf2p4__1088__b;
    __Vfunc_aes_scale_omega2_gf2p2__1092__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1092__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1092__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1092__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1092__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1088__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1088__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1088__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1092__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1093__g = __Vfunc_aes_mul_gf2p4__1088__b;
    __Vfunc_aes_scale_omega2_gf2p2__1093__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1093__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1093__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1093__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1093__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1088__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1088__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1088__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1093__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1088__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1088__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1088__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__22(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__22\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1186__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1190__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1191__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1191__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1191__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1198__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1198__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1198__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1198__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1198__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1198__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1199__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1199__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1199__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1199__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1199__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1199__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1199__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1200__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1200__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1200__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1200__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1200__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1200__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1200__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1201__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1201__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1201__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1201__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1201__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1201__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1201__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1202__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1202__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1202__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1203__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1203__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1203__d;
    // Body
    __Vfunc_aes_scale_omega2_gf2p2__1190__Vfuncout 
        = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1190__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1186__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1186__theta)) 
                                                  | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1186__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1190__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1191__g = vlSelf->__Vfunc_aes_mul_gf2p4__1186__b;
    __Vfunc_aes_scale_omega2_gf2p2__1191__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1191__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1191__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1191__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1191__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1186__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1186__theta)) 
                                                  | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1186__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1191__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1186__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1186__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1186__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1198__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1198__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1199__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1198__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1199__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1198__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1199__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1199__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1199__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1199__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1199__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1199__d)));
    __Vfunc_aes_mul_gf2p2__1199__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1199__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1199__d)));
    __Vfunc_aes_mul_gf2p2__1199__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1199__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1199__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1199__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1199__b)));
    __Vfunc_aes_mul_gf2p2__1199__Vfuncout = __Vfunc_aes_mul_gf2p2__1199__f;
    __Vfunc_aes_mul_gf2p4__1198__a = __Vfunc_aes_mul_gf2p2__1199__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1200__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1198__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1198__delta)));
    __Vfunc_aes_mul_gf2p2__1200__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1198__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1198__gamma)));
    __Vfunc_aes_mul_gf2p2__1200__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1200__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1200__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1200__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1200__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1200__d)));
    __Vfunc_aes_mul_gf2p2__1200__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1200__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1200__d)));
    __Vfunc_aes_mul_gf2p2__1200__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1200__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1200__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1200__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1200__b)));
    __Vfunc_aes_mul_gf2p2__1200__Vfuncout = __Vfunc_aes_mul_gf2p2__1200__f;
    __Vfunc_aes_mul_gf2p4__1198__b = __Vfunc_aes_mul_gf2p2__1200__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1201__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1198__delta));
    __Vfunc_aes_mul_gf2p2__1201__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1198__gamma));
    __Vfunc_aes_mul_gf2p2__1201__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1201__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1201__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1201__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1201__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1201__d)));
    __Vfunc_aes_mul_gf2p2__1201__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1201__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1201__d)));
    __Vfunc_aes_mul_gf2p2__1201__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1201__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1201__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1201__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1201__b)));
    __Vfunc_aes_mul_gf2p2__1201__Vfuncout = __Vfunc_aes_mul_gf2p2__1201__f;
    __Vfunc_aes_mul_gf2p4__1198__c = __Vfunc_aes_mul_gf2p2__1201__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1202__g = __Vfunc_aes_mul_gf2p4__1198__b;
    __Vfunc_aes_scale_omega2_gf2p2__1202__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1202__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1202__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1202__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1202__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1198__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1198__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1198__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1202__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1203__g = __Vfunc_aes_mul_gf2p4__1198__b;
    __Vfunc_aes_scale_omega2_gf2p2__1203__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1203__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1203__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1203__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1203__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1198__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1198__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1198__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1203__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1198__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1198__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1198__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__24(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__24\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1296__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1300__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1301__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1301__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1301__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1308__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1308__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1308__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1308__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1308__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1308__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1309__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1309__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1309__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1309__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1309__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1309__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1309__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1310__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1310__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1310__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1310__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1310__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1310__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1310__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1311__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1311__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1311__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1311__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1311__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1311__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1311__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1312__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1312__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1312__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1313__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1313__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1313__d;
    // Body
    __Vfunc_aes_scale_omega2_gf2p2__1300__Vfuncout 
        = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1300__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1296__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1296__theta)) 
                                                  | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1296__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1300__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1301__g = vlSelf->__Vfunc_aes_mul_gf2p4__1296__b;
    __Vfunc_aes_scale_omega2_gf2p2__1301__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1301__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1301__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1301__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1301__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1296__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1296__theta)) 
                                                  | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1296__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1301__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1296__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1296__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1296__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1308__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1308__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1309__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1308__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1309__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1308__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1309__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1309__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1309__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1309__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1309__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1309__d)));
    __Vfunc_aes_mul_gf2p2__1309__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1309__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1309__d)));
    __Vfunc_aes_mul_gf2p2__1309__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1309__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1309__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1309__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1309__b)));
    __Vfunc_aes_mul_gf2p2__1309__Vfuncout = __Vfunc_aes_mul_gf2p2__1309__f;
    __Vfunc_aes_mul_gf2p4__1308__a = __Vfunc_aes_mul_gf2p2__1309__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1310__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1308__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1308__delta)));
    __Vfunc_aes_mul_gf2p2__1310__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1308__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1308__gamma)));
    __Vfunc_aes_mul_gf2p2__1310__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1310__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1310__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1310__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1310__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1310__d)));
    __Vfunc_aes_mul_gf2p2__1310__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1310__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1310__d)));
    __Vfunc_aes_mul_gf2p2__1310__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1310__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1310__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1310__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1310__b)));
    __Vfunc_aes_mul_gf2p2__1310__Vfuncout = __Vfunc_aes_mul_gf2p2__1310__f;
    __Vfunc_aes_mul_gf2p4__1308__b = __Vfunc_aes_mul_gf2p2__1310__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1311__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1308__delta));
    __Vfunc_aes_mul_gf2p2__1311__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1308__gamma));
    __Vfunc_aes_mul_gf2p2__1311__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1311__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1311__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1311__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1311__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1311__d)));
    __Vfunc_aes_mul_gf2p2__1311__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1311__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1311__d)));
    __Vfunc_aes_mul_gf2p2__1311__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1311__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1311__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1311__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1311__b)));
    __Vfunc_aes_mul_gf2p2__1311__Vfuncout = __Vfunc_aes_mul_gf2p2__1311__f;
    __Vfunc_aes_mul_gf2p4__1308__c = __Vfunc_aes_mul_gf2p2__1311__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1312__g = __Vfunc_aes_mul_gf2p4__1308__b;
    __Vfunc_aes_scale_omega2_gf2p2__1312__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1312__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1312__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1312__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1312__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1308__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1308__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1308__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1312__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1313__g = __Vfunc_aes_mul_gf2p4__1308__b;
    __Vfunc_aes_scale_omega2_gf2p2__1313__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1313__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1313__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1313__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1313__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1308__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1308__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1308__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1313__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1308__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1308__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1308__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__26(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__26\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1406__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1410__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1411__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1411__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1411__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1418__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1418__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1418__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1418__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1418__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1418__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1419__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1419__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1419__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1419__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1419__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1419__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1419__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1420__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1420__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1420__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1420__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1420__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1420__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1420__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1421__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1421__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1421__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1421__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1421__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1421__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1421__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1422__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1422__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1422__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1423__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1423__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1423__d;
    // Body
    __Vfunc_aes_scale_omega2_gf2p2__1410__Vfuncout 
        = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1410__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1406__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1406__theta)) 
                                                  | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1406__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1410__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1411__g = vlSelf->__Vfunc_aes_mul_gf2p4__1406__b;
    __Vfunc_aes_scale_omega2_gf2p2__1411__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1411__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1411__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1411__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1411__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1406__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1406__theta)) 
                                                  | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1406__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1411__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1406__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1406__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1406__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1418__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1418__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1419__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1418__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1419__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1418__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1419__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1419__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1419__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1419__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1419__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1419__d)));
    __Vfunc_aes_mul_gf2p2__1419__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1419__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1419__d)));
    __Vfunc_aes_mul_gf2p2__1419__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1419__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1419__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1419__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1419__b)));
    __Vfunc_aes_mul_gf2p2__1419__Vfuncout = __Vfunc_aes_mul_gf2p2__1419__f;
    __Vfunc_aes_mul_gf2p4__1418__a = __Vfunc_aes_mul_gf2p2__1419__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1420__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1418__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1418__delta)));
    __Vfunc_aes_mul_gf2p2__1420__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1418__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1418__gamma)));
    __Vfunc_aes_mul_gf2p2__1420__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1420__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1420__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1420__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1420__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1420__d)));
    __Vfunc_aes_mul_gf2p2__1420__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1420__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1420__d)));
    __Vfunc_aes_mul_gf2p2__1420__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1420__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1420__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1420__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1420__b)));
    __Vfunc_aes_mul_gf2p2__1420__Vfuncout = __Vfunc_aes_mul_gf2p2__1420__f;
    __Vfunc_aes_mul_gf2p4__1418__b = __Vfunc_aes_mul_gf2p2__1420__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1421__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1418__delta));
    __Vfunc_aes_mul_gf2p2__1421__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1418__gamma));
    __Vfunc_aes_mul_gf2p2__1421__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1421__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1421__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1421__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1421__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1421__d)));
    __Vfunc_aes_mul_gf2p2__1421__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1421__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1421__d)));
    __Vfunc_aes_mul_gf2p2__1421__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1421__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1421__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1421__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1421__b)));
    __Vfunc_aes_mul_gf2p2__1421__Vfuncout = __Vfunc_aes_mul_gf2p2__1421__f;
    __Vfunc_aes_mul_gf2p4__1418__c = __Vfunc_aes_mul_gf2p2__1421__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1422__g = __Vfunc_aes_mul_gf2p4__1418__b;
    __Vfunc_aes_scale_omega2_gf2p2__1422__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1422__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1422__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1422__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1422__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1418__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1418__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1418__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1422__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1423__g = __Vfunc_aes_mul_gf2p4__1418__b;
    __Vfunc_aes_scale_omega2_gf2p2__1423__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1423__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1423__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1423__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1423__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1418__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1418__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1418__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1423__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1418__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1418__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1418__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__28(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__28\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1516__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1520__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1521__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1521__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1521__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1528__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1528__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1528__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1528__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1528__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1528__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1529__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1529__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1529__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1529__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1529__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1529__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1529__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1530__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1530__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1530__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1530__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1530__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1530__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1530__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1531__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1531__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1531__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1531__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1531__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1531__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1531__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1532__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1532__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1532__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1533__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1533__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1533__d;
    // Body
    __Vfunc_aes_scale_omega2_gf2p2__1520__Vfuncout 
        = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1520__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1516__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1516__theta)) 
                                                  | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1516__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1520__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1521__g = vlSelf->__Vfunc_aes_mul_gf2p4__1516__b;
    __Vfunc_aes_scale_omega2_gf2p2__1521__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1521__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1521__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1521__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1521__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1516__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1516__theta)) 
                                                  | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1516__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1521__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1516__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1516__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1516__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1528__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1528__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1529__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1528__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1529__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1528__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1529__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1529__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1529__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1529__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1529__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1529__d)));
    __Vfunc_aes_mul_gf2p2__1529__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1529__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1529__d)));
    __Vfunc_aes_mul_gf2p2__1529__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1529__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1529__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1529__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1529__b)));
    __Vfunc_aes_mul_gf2p2__1529__Vfuncout = __Vfunc_aes_mul_gf2p2__1529__f;
    __Vfunc_aes_mul_gf2p4__1528__a = __Vfunc_aes_mul_gf2p2__1529__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1530__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1528__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1528__delta)));
    __Vfunc_aes_mul_gf2p2__1530__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1528__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1528__gamma)));
    __Vfunc_aes_mul_gf2p2__1530__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1530__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1530__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1530__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1530__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1530__d)));
    __Vfunc_aes_mul_gf2p2__1530__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1530__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1530__d)));
    __Vfunc_aes_mul_gf2p2__1530__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1530__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1530__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1530__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1530__b)));
    __Vfunc_aes_mul_gf2p2__1530__Vfuncout = __Vfunc_aes_mul_gf2p2__1530__f;
    __Vfunc_aes_mul_gf2p4__1528__b = __Vfunc_aes_mul_gf2p2__1530__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1531__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1528__delta));
    __Vfunc_aes_mul_gf2p2__1531__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1528__gamma));
    __Vfunc_aes_mul_gf2p2__1531__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1531__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1531__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1531__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1531__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1531__d)));
    __Vfunc_aes_mul_gf2p2__1531__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1531__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1531__d)));
    __Vfunc_aes_mul_gf2p2__1531__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1531__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1531__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1531__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1531__b)));
    __Vfunc_aes_mul_gf2p2__1531__Vfuncout = __Vfunc_aes_mul_gf2p2__1531__f;
    __Vfunc_aes_mul_gf2p4__1528__c = __Vfunc_aes_mul_gf2p2__1531__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1532__g = __Vfunc_aes_mul_gf2p4__1528__b;
    __Vfunc_aes_scale_omega2_gf2p2__1532__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1532__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1532__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1532__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1532__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1528__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1528__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1528__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1532__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1533__g = __Vfunc_aes_mul_gf2p4__1528__b;
    __Vfunc_aes_scale_omega2_gf2p2__1533__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1533__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1533__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1533__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1533__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1528__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1528__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1528__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1533__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1528__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1528__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1528__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__30(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__30\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1626__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1630__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1631__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1631__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1631__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1638__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1638__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1638__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1638__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1638__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1638__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1639__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1639__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1639__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1639__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1639__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1639__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1639__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1640__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1640__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1640__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1640__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1640__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1640__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1640__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1641__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1641__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1641__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1641__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1641__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1641__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1641__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1642__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1642__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1642__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1643__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1643__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1643__d;
    // Body
    __Vfunc_aes_scale_omega2_gf2p2__1630__Vfuncout 
        = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1630__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1626__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1626__theta)) 
                                                  | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1626__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1630__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1631__g = vlSelf->__Vfunc_aes_mul_gf2p4__1626__b;
    __Vfunc_aes_scale_omega2_gf2p2__1631__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1631__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1631__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1631__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1631__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1626__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1626__theta)) 
                                                  | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1626__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1631__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1626__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1626__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1626__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1638__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1638__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1639__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1638__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1639__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1638__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1639__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1639__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1639__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1639__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1639__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1639__d)));
    __Vfunc_aes_mul_gf2p2__1639__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1639__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1639__d)));
    __Vfunc_aes_mul_gf2p2__1639__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1639__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1639__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1639__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1639__b)));
    __Vfunc_aes_mul_gf2p2__1639__Vfuncout = __Vfunc_aes_mul_gf2p2__1639__f;
    __Vfunc_aes_mul_gf2p4__1638__a = __Vfunc_aes_mul_gf2p2__1639__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1640__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1638__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1638__delta)));
    __Vfunc_aes_mul_gf2p2__1640__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1638__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1638__gamma)));
    __Vfunc_aes_mul_gf2p2__1640__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1640__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1640__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1640__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1640__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1640__d)));
    __Vfunc_aes_mul_gf2p2__1640__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1640__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1640__d)));
    __Vfunc_aes_mul_gf2p2__1640__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1640__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1640__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1640__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1640__b)));
    __Vfunc_aes_mul_gf2p2__1640__Vfuncout = __Vfunc_aes_mul_gf2p2__1640__f;
    __Vfunc_aes_mul_gf2p4__1638__b = __Vfunc_aes_mul_gf2p2__1640__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1641__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1638__delta));
    __Vfunc_aes_mul_gf2p2__1641__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1638__gamma));
    __Vfunc_aes_mul_gf2p2__1641__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1641__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1641__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1641__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1641__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1641__d)));
    __Vfunc_aes_mul_gf2p2__1641__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1641__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1641__d)));
    __Vfunc_aes_mul_gf2p2__1641__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1641__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1641__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1641__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1641__b)));
    __Vfunc_aes_mul_gf2p2__1641__Vfuncout = __Vfunc_aes_mul_gf2p2__1641__f;
    __Vfunc_aes_mul_gf2p4__1638__c = __Vfunc_aes_mul_gf2p2__1641__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1642__g = __Vfunc_aes_mul_gf2p4__1638__b;
    __Vfunc_aes_scale_omega2_gf2p2__1642__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1642__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1642__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1642__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1642__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1638__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1638__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1638__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1642__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1643__g = __Vfunc_aes_mul_gf2p4__1638__b;
    __Vfunc_aes_scale_omega2_gf2p2__1643__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1643__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1643__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1643__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1643__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1638__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1638__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1638__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1643__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1638__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1638__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1638__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__32(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__32\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1736__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1740__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1741__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1741__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1741__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1748__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1748__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1748__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1748__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1748__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1748__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1749__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1749__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1749__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1749__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1749__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1749__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1749__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1750__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1750__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1750__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1750__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1750__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1750__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1750__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1751__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1751__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1751__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1751__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1751__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1751__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1751__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1752__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1752__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1752__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1753__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1753__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1753__d;
    // Body
    __Vfunc_aes_scale_omega2_gf2p2__1740__Vfuncout 
        = vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1740__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1736__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1736__theta)) 
                                                  | (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1736__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1740__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1741__g = vlSelf->__Vfunc_aes_mul_gf2p4__1736__b;
    __Vfunc_aes_scale_omega2_gf2p2__1741__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1741__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1741__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1741__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1741__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1736__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1736__theta)) 
                                                  | ((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1736__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1741__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1736__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1736__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d 
        = __Vfunc_aes_mul_gf2p4__1736__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1748__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1748__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta;
    __Vfunc_aes_mul_gf2p2__1749__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1748__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1749__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1748__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1749__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1749__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1749__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1749__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1749__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1749__d)));
    __Vfunc_aes_mul_gf2p2__1749__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1749__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1749__d)));
    __Vfunc_aes_mul_gf2p2__1749__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1749__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1749__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1749__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1749__b)));
    __Vfunc_aes_mul_gf2p2__1749__Vfuncout = __Vfunc_aes_mul_gf2p2__1749__f;
    __Vfunc_aes_mul_gf2p4__1748__a = __Vfunc_aes_mul_gf2p2__1749__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1750__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1748__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1748__delta)));
    __Vfunc_aes_mul_gf2p2__1750__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1748__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1748__gamma)));
    __Vfunc_aes_mul_gf2p2__1750__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1750__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1750__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1750__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1750__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1750__d)));
    __Vfunc_aes_mul_gf2p2__1750__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1750__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1750__d)));
    __Vfunc_aes_mul_gf2p2__1750__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1750__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1750__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1750__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1750__b)));
    __Vfunc_aes_mul_gf2p2__1750__Vfuncout = __Vfunc_aes_mul_gf2p2__1750__f;
    __Vfunc_aes_mul_gf2p4__1748__b = __Vfunc_aes_mul_gf2p2__1750__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1751__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1748__delta));
    __Vfunc_aes_mul_gf2p2__1751__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1748__gamma));
    __Vfunc_aes_mul_gf2p2__1751__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1751__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1751__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1751__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1751__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1751__d)));
    __Vfunc_aes_mul_gf2p2__1751__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1751__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1751__d)));
    __Vfunc_aes_mul_gf2p2__1751__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1751__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1751__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1751__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1751__b)));
    __Vfunc_aes_mul_gf2p2__1751__Vfuncout = __Vfunc_aes_mul_gf2p2__1751__f;
    __Vfunc_aes_mul_gf2p4__1748__c = __Vfunc_aes_mul_gf2p2__1751__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1752__g = __Vfunc_aes_mul_gf2p4__1748__b;
    __Vfunc_aes_scale_omega2_gf2p2__1752__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1752__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1752__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1752__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1752__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1748__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1748__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1748__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1752__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1753__g = __Vfunc_aes_mul_gf2p4__1748__b;
    __Vfunc_aes_scale_omega2_gf2p2__1753__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1753__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1753__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1753__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1753__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1748__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1748__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1748__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1753__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1748__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1748__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1748__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__0__KET____DOT__u_aes_sbox_i__34(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__0__KET____DOT__u_aes_sbox_i__34\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1858__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1858__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1858__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1858__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1859__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1859__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1859__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1859__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1859__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1860__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1860__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1860__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1860__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1860__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1860__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1860__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1861__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1861__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1861__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1861__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1861__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1861__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1861__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1862__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1862__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1862__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1863__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1863__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1863__d;
    // Body
    __Vfunc_aes_mul_gf2p2__1859__a = (1U & (((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1859__g) 
                                             & (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1859__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1859__b = (1U & (VL_REDXOR_2(vlSelf->__Vfunc_aes_mul_gf2p2__1859__g) 
                                            & VL_REDXOR_2(vlSelf->__Vfunc_aes_mul_gf2p2__1859__d)));
    __Vfunc_aes_mul_gf2p2__1859__c = (1U & ((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1859__g) 
                                            & (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1859__d)));
    __Vfunc_aes_mul_gf2p2__1859__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1859__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1859__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1859__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1859__b)));
    __Vfunc_aes_mul_gf2p2__1859__Vfuncout = __Vfunc_aes_mul_gf2p2__1859__f;
    __Vfunc_aes_mul_gf2p4__1858__a = __Vfunc_aes_mul_gf2p2__1859__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1860__d = (3U & (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1858__delta) 
                                             >> 2U) 
                                            ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1858__delta)));
    __Vfunc_aes_mul_gf2p2__1860__g = (3U & (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1858__gamma) 
                                             >> 2U) 
                                            ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1858__gamma)));
    __Vfunc_aes_mul_gf2p2__1860__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1860__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1860__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1860__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1860__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1860__d)));
    __Vfunc_aes_mul_gf2p2__1860__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1860__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1860__d)));
    __Vfunc_aes_mul_gf2p2__1860__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1860__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1860__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1860__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1860__b)));
    __Vfunc_aes_mul_gf2p2__1860__Vfuncout = __Vfunc_aes_mul_gf2p2__1860__f;
    __Vfunc_aes_mul_gf2p4__1858__b = __Vfunc_aes_mul_gf2p2__1860__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1861__d = (3U & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1858__delta));
    __Vfunc_aes_mul_gf2p2__1861__g = (3U & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1858__gamma));
    __Vfunc_aes_mul_gf2p2__1861__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1861__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1861__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1861__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1861__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1861__d)));
    __Vfunc_aes_mul_gf2p2__1861__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1861__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1861__d)));
    __Vfunc_aes_mul_gf2p2__1861__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1861__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1861__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1861__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1861__b)));
    __Vfunc_aes_mul_gf2p2__1861__Vfuncout = __Vfunc_aes_mul_gf2p2__1861__f;
    __Vfunc_aes_mul_gf2p4__1858__c = __Vfunc_aes_mul_gf2p2__1861__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1862__g = __Vfunc_aes_mul_gf2p4__1858__b;
    __Vfunc_aes_scale_omega2_gf2p2__1862__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1862__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1862__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1862__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1862__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1858__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1858__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1858__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1862__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1863__g = __Vfunc_aes_mul_gf2p4__1858__b;
    __Vfunc_aes_scale_omega2_gf2p2__1863__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1863__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1863__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1863__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1863__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1858__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1858__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1858__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1863__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1858__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1858__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1858__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__1__KET____DOT__u_aes_sbox_i__36(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__1__KET____DOT__u_aes_sbox_i__36\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1968__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1968__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1968__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1968__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1969__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1969__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1969__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1969__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1969__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1970__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1970__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1970__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1970__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1970__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1970__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1970__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1971__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1971__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1971__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1971__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1971__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1971__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1971__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1972__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1972__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1972__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1973__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1973__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1973__d;
    // Body
    __Vfunc_aes_mul_gf2p2__1969__a = (1U & (((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1969__g) 
                                             & (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1969__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1969__b = (1U & (VL_REDXOR_2(vlSelf->__Vfunc_aes_mul_gf2p2__1969__g) 
                                            & VL_REDXOR_2(vlSelf->__Vfunc_aes_mul_gf2p2__1969__d)));
    __Vfunc_aes_mul_gf2p2__1969__c = (1U & ((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1969__g) 
                                            & (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__1969__d)));
    __Vfunc_aes_mul_gf2p2__1969__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1969__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1969__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1969__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1969__b)));
    __Vfunc_aes_mul_gf2p2__1969__Vfuncout = __Vfunc_aes_mul_gf2p2__1969__f;
    __Vfunc_aes_mul_gf2p4__1968__a = __Vfunc_aes_mul_gf2p2__1969__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1970__d = (3U & (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1968__delta) 
                                             >> 2U) 
                                            ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1968__delta)));
    __Vfunc_aes_mul_gf2p2__1970__g = (3U & (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1968__gamma) 
                                             >> 2U) 
                                            ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1968__gamma)));
    __Vfunc_aes_mul_gf2p2__1970__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1970__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1970__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1970__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1970__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1970__d)));
    __Vfunc_aes_mul_gf2p2__1970__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1970__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1970__d)));
    __Vfunc_aes_mul_gf2p2__1970__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1970__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1970__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1970__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1970__b)));
    __Vfunc_aes_mul_gf2p2__1970__Vfuncout = __Vfunc_aes_mul_gf2p2__1970__f;
    __Vfunc_aes_mul_gf2p4__1968__b = __Vfunc_aes_mul_gf2p2__1970__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1971__d = (3U & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1968__delta));
    __Vfunc_aes_mul_gf2p2__1971__g = (3U & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1968__gamma));
    __Vfunc_aes_mul_gf2p2__1971__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1971__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1971__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1971__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1971__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1971__d)));
    __Vfunc_aes_mul_gf2p2__1971__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1971__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1971__d)));
    __Vfunc_aes_mul_gf2p2__1971__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1971__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1971__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1971__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1971__b)));
    __Vfunc_aes_mul_gf2p2__1971__Vfuncout = __Vfunc_aes_mul_gf2p2__1971__f;
    __Vfunc_aes_mul_gf2p4__1968__c = __Vfunc_aes_mul_gf2p2__1971__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1972__g = __Vfunc_aes_mul_gf2p4__1968__b;
    __Vfunc_aes_scale_omega2_gf2p2__1972__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1972__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1972__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1972__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1972__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1968__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1968__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1968__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1972__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1973__g = __Vfunc_aes_mul_gf2p4__1968__b;
    __Vfunc_aes_scale_omega2_gf2p2__1973__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1973__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1973__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1973__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1973__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1968__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1968__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1968__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1973__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1968__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1968__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1968__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__38(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__2__KET____DOT__u_aes_sbox_i__38\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2078__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2078__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2078__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2078__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2079__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2079__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2079__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2079__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2079__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2080__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2080__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2080__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2080__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2080__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2080__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2080__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2081__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2081__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2081__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2081__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2081__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2081__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2081__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2082__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2082__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2082__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2083__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2083__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2083__d;
    // Body
    __Vfunc_aes_mul_gf2p2__2079__a = (1U & (((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__2079__g) 
                                             & (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__2079__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2079__b = (1U & (VL_REDXOR_2(vlSelf->__Vfunc_aes_mul_gf2p2__2079__g) 
                                            & VL_REDXOR_2(vlSelf->__Vfunc_aes_mul_gf2p2__2079__d)));
    __Vfunc_aes_mul_gf2p2__2079__c = (1U & ((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__2079__g) 
                                            & (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__2079__d)));
    __Vfunc_aes_mul_gf2p2__2079__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2079__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2079__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2079__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2079__b)));
    __Vfunc_aes_mul_gf2p2__2079__Vfuncout = __Vfunc_aes_mul_gf2p2__2079__f;
    __Vfunc_aes_mul_gf2p4__2078__a = __Vfunc_aes_mul_gf2p2__2079__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2080__d = (3U & (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2078__delta) 
                                             >> 2U) 
                                            ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2078__delta)));
    __Vfunc_aes_mul_gf2p2__2080__g = (3U & (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2078__gamma) 
                                             >> 2U) 
                                            ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2078__gamma)));
    __Vfunc_aes_mul_gf2p2__2080__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2080__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2080__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2080__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2080__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2080__d)));
    __Vfunc_aes_mul_gf2p2__2080__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2080__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2080__d)));
    __Vfunc_aes_mul_gf2p2__2080__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2080__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2080__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2080__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2080__b)));
    __Vfunc_aes_mul_gf2p2__2080__Vfuncout = __Vfunc_aes_mul_gf2p2__2080__f;
    __Vfunc_aes_mul_gf2p4__2078__b = __Vfunc_aes_mul_gf2p2__2080__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2081__d = (3U & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2078__delta));
    __Vfunc_aes_mul_gf2p2__2081__g = (3U & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2078__gamma));
    __Vfunc_aes_mul_gf2p2__2081__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2081__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2081__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2081__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2081__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2081__d)));
    __Vfunc_aes_mul_gf2p2__2081__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2081__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2081__d)));
    __Vfunc_aes_mul_gf2p2__2081__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2081__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2081__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2081__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2081__b)));
    __Vfunc_aes_mul_gf2p2__2081__Vfuncout = __Vfunc_aes_mul_gf2p2__2081__f;
    __Vfunc_aes_mul_gf2p4__2078__c = __Vfunc_aes_mul_gf2p2__2081__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2082__g = __Vfunc_aes_mul_gf2p4__2078__b;
    __Vfunc_aes_scale_omega2_gf2p2__2082__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2082__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2082__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2082__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2082__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2078__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2078__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__2078__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2082__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__2083__g = __Vfunc_aes_mul_gf2p4__2078__b;
    __Vfunc_aes_scale_omega2_gf2p2__2083__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2083__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2083__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2083__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2083__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2078__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2078__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__2078__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2083__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__2078__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__2078__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__2078__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i__40(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i__40\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2188__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2188__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2188__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2188__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2189__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2189__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2189__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2189__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2189__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2190__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2190__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2190__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2190__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2190__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2190__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2190__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2191__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2191__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2191__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2191__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2191__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2191__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2191__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2192__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2192__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2192__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2193__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2193__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2193__d;
    // Body
    __Vfunc_aes_mul_gf2p2__2189__a = (1U & (((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__2189__g) 
                                             & (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__2189__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2189__b = (1U & (VL_REDXOR_2(vlSelf->__Vfunc_aes_mul_gf2p2__2189__g) 
                                            & VL_REDXOR_2(vlSelf->__Vfunc_aes_mul_gf2p2__2189__d)));
    __Vfunc_aes_mul_gf2p2__2189__c = (1U & ((IData)(vlSelf->__Vfunc_aes_mul_gf2p2__2189__g) 
                                            & (IData)(vlSelf->__Vfunc_aes_mul_gf2p2__2189__d)));
    __Vfunc_aes_mul_gf2p2__2189__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2189__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2189__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2189__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2189__b)));
    __Vfunc_aes_mul_gf2p2__2189__Vfuncout = __Vfunc_aes_mul_gf2p2__2189__f;
    __Vfunc_aes_mul_gf2p4__2188__a = __Vfunc_aes_mul_gf2p2__2189__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2190__d = (3U & (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2188__delta) 
                                             >> 2U) 
                                            ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2188__delta)));
    __Vfunc_aes_mul_gf2p2__2190__g = (3U & (((IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2188__gamma) 
                                             >> 2U) 
                                            ^ (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2188__gamma)));
    __Vfunc_aes_mul_gf2p2__2190__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2190__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2190__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2190__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2190__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2190__d)));
    __Vfunc_aes_mul_gf2p2__2190__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2190__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2190__d)));
    __Vfunc_aes_mul_gf2p2__2190__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2190__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2190__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2190__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2190__b)));
    __Vfunc_aes_mul_gf2p2__2190__Vfuncout = __Vfunc_aes_mul_gf2p2__2190__f;
    __Vfunc_aes_mul_gf2p4__2188__b = __Vfunc_aes_mul_gf2p2__2190__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2191__d = (3U & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2188__delta));
    __Vfunc_aes_mul_gf2p2__2191__g = (3U & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2188__gamma));
    __Vfunc_aes_mul_gf2p2__2191__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2191__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2191__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2191__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2191__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2191__d)));
    __Vfunc_aes_mul_gf2p2__2191__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2191__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2191__d)));
    __Vfunc_aes_mul_gf2p2__2191__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2191__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2191__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2191__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2191__b)));
    __Vfunc_aes_mul_gf2p2__2191__Vfuncout = __Vfunc_aes_mul_gf2p2__2191__f;
    __Vfunc_aes_mul_gf2p4__2188__c = __Vfunc_aes_mul_gf2p2__2191__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2192__g = __Vfunc_aes_mul_gf2p4__2188__b;
    __Vfunc_aes_scale_omega2_gf2p2__2192__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2192__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2192__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2192__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2192__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2188__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2188__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__2188__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2192__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__2193__g = __Vfunc_aes_mul_gf2p4__2188__b;
    __Vfunc_aes_scale_omega2_gf2p2__2193__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2193__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2193__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2193__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2193__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2188__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2188__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__2188__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2193__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__2188__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__2188__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__2188__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega));
}

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___ctor_var_reset(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->en_i = VL_RAND_RESET_I(1);
    vlSelf->out_req_o = VL_RAND_RESET_I(1);
    vlSelf->out_ack_i = VL_RAND_RESET_I(1);
    vlSelf->op_i = VL_RAND_RESET_I(2);
    vlSelf->data_i = VL_RAND_RESET_I(8);
    vlSelf->mask_i = VL_RAND_RESET_I(8);
    vlSelf->prd_i = VL_RAND_RESET_I(28);
    vlSelf->data_o = VL_RAND_RESET_I(8);
    vlSelf->mask_o = VL_RAND_RESET_I(8);
    vlSelf->prd_o = VL_RAND_RESET_I(20);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__we = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd = VL_RAND_RESET_I(28);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_prd = VL_RAND_RESET_I(20);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_d = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__count_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d = VL_RAND_RESET_I(4);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y_ss__q_o = VL_RAND_RESET_I(8);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_theta = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta = VL_RAND_RESET_I(4);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o = VL_RAND_RESET_I(16);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o = VL_RAND_RESET_I(16);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 = VL_RAND_RESET_I(4);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i = VL_RAND_RESET_I(8);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = VL_RAND_RESET_I(8);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b = VL_RAND_RESET_I(4);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d = VL_RAND_RESET_I(2);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d = VL_RAND_RESET_I(2);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma_ss__q_o = VL_RAND_RESET_I(4);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma10_prd2 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_omega = VL_RAND_RESET_I(2);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_omega = VL_RAND_RESET_I(2);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i = VL_RAND_RESET_I(4);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o = VL_RAND_RESET_I(8);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o = VL_RAND_RESET_I(4);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 = VL_RAND_RESET_I(2);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i = VL_RAND_RESET_I(4);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = VL_RAND_RESET_I(4);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b = VL_RAND_RESET_I(2);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b = VL_RAND_RESET_I(2);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i = VL_RAND_RESET_I(4);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 = VL_RAND_RESET_I(2);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i = VL_RAND_RESET_I(4);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = VL_RAND_RESET_I(4);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b = VL_RAND_RESET_I(2);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b = VL_RAND_RESET_I(2);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i = VL_RAND_RESET_I(4);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_ab_yz0__q_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 = VL_RAND_RESET_I(2);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i = VL_RAND_RESET_I(4);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellout__u_prim_flop_abxz0_z1__q_o = VL_RAND_RESET_I(4);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b = VL_RAND_RESET_I(2);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b = VL_RAND_RESET_I(2);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_mul_abx_b__in_i = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_ay_d = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ay_bx = VL_RAND_RESET_I(4);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__u_prim_flop_abq_z0__q_o = VL_RAND_RESET_I(8);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_ay_d = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_bx_by_d = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ax_by = VL_RAND_RESET_I(4);
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT__mul_ay_bx = VL_RAND_RESET_I(4);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__u_prim_flop_abq_z0__q_o = VL_RAND_RESET_I(8);
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y0__DOT____Vcellout__gen_pipeline__DOT__u_prim_flop_mul_abx_aby__q_o = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__0__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__2__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__3__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__4__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__5__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__6__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__7__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__8__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__9__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__10__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__11__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_aes_mul_gf2p4__20__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__26__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__32__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__38__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__62__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__68__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__74__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__80__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__86__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__86__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__86__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__86__c = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__90__d = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__92__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__92__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__92__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p2__95__a = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__95__b = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__95__c = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p4__98__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__104__theta = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__110__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__111__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__112__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__113__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__114__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__115__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__116__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__117__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__118__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__119__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__120__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__121__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_aes_mul_gf2p4__130__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__136__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__142__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__148__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__172__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__178__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__184__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__190__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__196__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__196__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__196__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__196__c = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__200__d = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__202__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__202__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__202__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p2__205__a = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__205__b = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__205__c = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p4__208__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__214__theta = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__220__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__221__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__222__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__223__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__224__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__225__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__226__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__227__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__228__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__229__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__230__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__231__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_aes_mul_gf2p4__240__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__246__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__252__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__258__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__282__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__288__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__294__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__300__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__306__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__306__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__306__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__306__c = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__310__d = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__312__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__312__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__312__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p2__315__a = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__315__b = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__315__c = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p4__318__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__324__theta = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__330__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__331__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__332__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__333__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__334__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__335__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__336__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__337__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__338__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__339__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__340__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__341__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_aes_mul_gf2p4__350__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__356__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__362__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__368__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__392__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__398__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__404__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__410__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__416__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__416__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__416__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__416__c = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__420__d = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__422__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__422__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__422__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p2__425__a = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__425__b = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__425__c = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p4__428__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__434__theta = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__440__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__441__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__442__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__443__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__444__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__445__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__446__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__447__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__448__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__449__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__450__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__451__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_aes_mul_gf2p4__460__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__466__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__472__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__478__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__502__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__508__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__514__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__520__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__526__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__526__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__526__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__526__c = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__530__d = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__532__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__532__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__532__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p2__535__a = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__535__b = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__535__c = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p4__538__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__544__theta = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__550__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__551__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__552__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__553__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__554__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__555__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__556__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__557__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__558__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__559__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__560__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__561__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_aes_mul_gf2p4__570__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__576__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__582__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__588__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__612__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__618__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__624__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__630__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__636__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__636__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__636__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__636__c = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__640__d = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__642__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__642__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__642__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p2__645__a = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__645__b = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__645__c = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p4__648__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__654__theta = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__660__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__661__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__662__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__663__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__664__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__665__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__666__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__667__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__668__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__669__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__670__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__671__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_aes_mul_gf2p4__680__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__686__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__692__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__698__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__722__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__728__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__734__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__740__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__746__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__746__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__746__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__746__c = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__750__d = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__752__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__752__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__752__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p2__755__a = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__755__b = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__755__c = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p4__758__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__764__theta = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__770__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__771__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__772__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__773__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__774__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__775__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__776__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__777__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__778__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__779__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__780__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__781__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_aes_mul_gf2p4__790__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__796__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__802__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__808__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__832__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__838__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__844__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__850__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__856__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__856__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__856__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__856__c = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__860__d = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__862__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__862__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__862__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p2__865__a = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__865__b = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__865__c = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p4__868__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__874__theta = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__880__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__881__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__882__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__883__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__884__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__885__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__886__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__887__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__888__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__889__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__890__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__891__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_aes_mul_gf2p4__900__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__906__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__912__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__918__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__942__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__948__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__954__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__960__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__966__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__966__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__966__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__966__c = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__970__d = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__972__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__972__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__972__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p2__975__a = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__975__b = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__975__c = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p4__978__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__984__theta = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__990__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__991__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__992__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__993__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__994__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__995__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__996__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__997__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__998__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__999__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1000__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1001__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_aes_mul_gf2p4__1010__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1016__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1022__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1028__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1052__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1058__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1064__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1070__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1076__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1076__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1076__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1076__c = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1080__d = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1082__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1082__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1082__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p2__1085__a = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__1085__b = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__1085__c = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p4__1088__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1094__theta = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1100__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1101__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1102__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1103__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1104__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1105__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1106__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1107__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1108__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1109__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1110__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1111__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_aes_mul_gf2p4__1120__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1126__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1132__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1138__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1162__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1168__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1174__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1180__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1186__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1186__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1186__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1186__c = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1190__d = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1192__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1192__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1192__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p2__1195__a = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__1195__b = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__1195__c = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p4__1198__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1204__theta = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1210__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1211__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1212__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1213__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1214__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1215__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1216__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1217__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1218__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1219__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1220__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1221__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_aes_mul_gf2p4__1230__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1236__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1242__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1248__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1272__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1278__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1284__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1290__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1296__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1296__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1296__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1296__c = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1300__d = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1302__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1302__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1302__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p2__1305__a = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__1305__b = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__1305__c = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p4__1308__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1314__theta = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1320__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1321__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1322__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1323__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1324__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1325__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1326__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1327__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1328__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1329__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1330__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1331__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_aes_mul_gf2p4__1340__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1346__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1352__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1358__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1382__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1388__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1394__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1400__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1406__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1406__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1406__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1406__c = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1410__d = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1412__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1412__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1412__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p2__1415__a = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__1415__b = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__1415__c = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p4__1418__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1424__theta = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1430__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1431__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1432__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1433__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1434__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1435__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1436__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1437__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1438__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1439__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1440__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1441__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_aes_mul_gf2p4__1450__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1456__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1462__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1468__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1492__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1498__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1504__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1510__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1516__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1516__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1516__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1516__c = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1520__d = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1522__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1522__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1522__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p2__1525__a = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__1525__b = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__1525__c = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p4__1528__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1534__theta = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1540__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1541__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1542__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1543__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1544__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1545__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1546__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1547__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1548__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1549__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1550__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1551__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_aes_mul_gf2p4__1560__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1566__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1572__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1578__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1602__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1608__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1614__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1620__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1626__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1626__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1626__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1626__c = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1630__d = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1632__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1632__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1632__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p2__1635__a = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__1635__b = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__1635__c = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p4__1638__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1644__theta = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1650__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1651__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1652__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1653__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1654__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1655__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1656__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1657__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1658__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1659__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1660__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1661__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_aes_mul_gf2p4__1670__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1676__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1682__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1688__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1712__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1718__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1724__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1730__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1736__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1736__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1736__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1736__c = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_scale_omega2_gf2p2__1740__d = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1742__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1742__a = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1742__b = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p2__1745__a = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__1745__b = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p2__1745__c = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_aes_mul_gf2p4__1748__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1754__theta = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1760__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1761__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1762__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1763__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1764__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1765__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1766__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1767__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1768__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1769__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1770__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1771__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_aes_mul_gf2p4__1780__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1786__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1792__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1798__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1822__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1828__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1834__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1840__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1846__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1852__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1858__gamma = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1858__delta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1858__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p2__1859__g = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p2__1859__d = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1864__theta = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1870__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1871__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1872__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1873__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1874__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1875__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1876__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1877__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1878__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1879__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1880__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1881__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_aes_mul_gf2p4__1890__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1896__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1902__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1908__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1932__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1938__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1944__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1950__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1956__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1962__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1968__gamma = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1968__delta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__1968__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p2__1969__g = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p2__1969__d = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__1974__theta = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1980__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1981__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1982__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1983__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1984__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1985__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1986__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1987__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1988__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1989__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1990__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__1991__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_aes_mul_gf2p4__2000__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2006__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2012__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2018__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2042__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2048__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2054__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2060__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2066__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2072__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2078__gamma = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2078__delta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2078__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p2__2079__g = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p2__2079__d = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__2084__theta = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__2090__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__2091__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__2092__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__2093__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__2094__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__2095__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__2096__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__2097__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__2098__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__2099__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__2100__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__Vfunc_aes_mvm__2101__mat_a[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_aes_mul_gf2p4__2110__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2116__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2122__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2128__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2152__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2158__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2164__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2170__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2176__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2182__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2188__gamma = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2188__delta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p4__2188__theta = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_aes_mul_gf2p2__2189__g = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p2__2189__d = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_aes_mul_gf2p4__2194__theta = VL_RAND_RESET_I(4);
}
