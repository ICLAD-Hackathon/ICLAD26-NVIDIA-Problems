// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__48(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__48\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__790__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__790__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__790__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__790__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__790__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__790__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__791__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__791__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__791__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__791__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__791__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__791__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__791__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__792__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__792__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__792__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__792__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__792__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__792__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__792__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__793__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__793__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__793__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__793__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__793__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__793__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__793__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__794__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__794__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__794__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__795__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__795__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__795__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__796__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__796__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__796__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__796__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__796__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__796__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__797__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__797__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__797__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__797__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__797__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__797__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__797__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__798__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__798__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__798__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__798__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__798__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__798__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__798__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__799__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__799__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__799__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__799__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__799__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__799__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__799__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__800__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__800__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__800__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__801__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__801__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__801__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__820__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__820__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__820__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__820__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__820__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__820__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__820__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__821__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__821__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__821__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__821__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__821__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__821__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__821__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__824__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__824__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__824__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__824__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__824__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__824__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__824__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__825__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__825__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__825__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__825__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__825__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__825__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__825__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__828__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__828__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__828__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__828__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__828__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__828__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__828__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__829__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__829__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__829__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__829__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__829__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__829__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__829__c;
    // Body
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
        = ((0xff00000U & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[0xbU] 
                          << 8U)) | ((0xf0000U & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[0xbU] 
                                                  >> 4U)) 
                                     | ((0xff00U & 
                                         (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[0xbU] 
                                          >> 0x10U)) 
                                        | (0xffU & 
                                           vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[0xcU]))));
    __Vfunc_aes_mul_gf2p2__820__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0x10U));
    __Vfunc_aes_mul_gf2p2__820__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__820__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__820__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__820__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__820__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__820__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__820__d)));
    __Vfunc_aes_mul_gf2p2__820__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__820__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__820__d)));
    __Vfunc_aes_mul_gf2p2__820__f = ((((IData)(__Vfunc_aes_mul_gf2p2__820__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__820__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__820__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__820__b)));
    __Vfunc_aes_mul_gf2p2__820__Vfuncout = __Vfunc_aes_mul_gf2p2__820__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__820__Vfuncout;
    __Vfunc_aes_mul_gf2p2__821__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0x10U));
    __Vfunc_aes_mul_gf2p2__821__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__821__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__821__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__821__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__821__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__821__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__821__d)));
    __Vfunc_aes_mul_gf2p2__821__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__821__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__821__d)));
    __Vfunc_aes_mul_gf2p2__821__f = ((((IData)(__Vfunc_aes_mul_gf2p2__821__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__821__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__821__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__821__b)));
    __Vfunc_aes_mul_gf2p2__821__Vfuncout = __Vfunc_aes_mul_gf2p2__821__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__821__Vfuncout;
    __Vfunc_aes_mul_gf2p2__824__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0xcU));
    __Vfunc_aes_mul_gf2p2__824__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__824__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__824__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__824__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__824__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__824__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__824__d)));
    __Vfunc_aes_mul_gf2p2__824__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__824__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__824__d)));
    __Vfunc_aes_mul_gf2p2__824__f = ((((IData)(__Vfunc_aes_mul_gf2p2__824__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__824__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__824__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__824__b)));
    __Vfunc_aes_mul_gf2p2__824__Vfuncout = __Vfunc_aes_mul_gf2p2__824__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__824__Vfuncout;
    __Vfunc_aes_mul_gf2p2__825__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0xcU));
    __Vfunc_aes_mul_gf2p2__825__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__825__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__825__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__825__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__825__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__825__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__825__d)));
    __Vfunc_aes_mul_gf2p2__825__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__825__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__825__d)));
    __Vfunc_aes_mul_gf2p2__825__f = ((((IData)(__Vfunc_aes_mul_gf2p2__825__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__825__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__825__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__825__b)));
    __Vfunc_aes_mul_gf2p2__825__Vfuncout = __Vfunc_aes_mul_gf2p2__825__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__825__Vfuncout;
    __Vfunc_aes_mul_gf2p4__790__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                 >> 0x14U));
    __Vfunc_aes_mul_gf2p4__790__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__791__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__790__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__791__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__790__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__791__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__791__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__791__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__791__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__791__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__791__d)));
    __Vfunc_aes_mul_gf2p2__791__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__791__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__791__d)));
    __Vfunc_aes_mul_gf2p2__791__f = ((((IData)(__Vfunc_aes_mul_gf2p2__791__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__791__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__791__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__791__b)));
    __Vfunc_aes_mul_gf2p2__791__Vfuncout = __Vfunc_aes_mul_gf2p2__791__f;
    __Vfunc_aes_mul_gf2p4__790__a = __Vfunc_aes_mul_gf2p2__791__Vfuncout;
    __Vfunc_aes_mul_gf2p2__792__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__790__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__790__delta)));
    __Vfunc_aes_mul_gf2p2__792__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__790__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__790__gamma)));
    __Vfunc_aes_mul_gf2p2__792__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__792__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__792__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__792__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__792__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__792__d)));
    __Vfunc_aes_mul_gf2p2__792__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__792__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__792__d)));
    __Vfunc_aes_mul_gf2p2__792__f = ((((IData)(__Vfunc_aes_mul_gf2p2__792__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__792__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__792__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__792__b)));
    __Vfunc_aes_mul_gf2p2__792__Vfuncout = __Vfunc_aes_mul_gf2p2__792__f;
    __Vfunc_aes_mul_gf2p4__790__b = __Vfunc_aes_mul_gf2p2__792__Vfuncout;
    __Vfunc_aes_mul_gf2p2__793__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__790__delta));
    __Vfunc_aes_mul_gf2p2__793__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__790__gamma));
    __Vfunc_aes_mul_gf2p2__793__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__793__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__793__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__793__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__793__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__793__d)));
    __Vfunc_aes_mul_gf2p2__793__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__793__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__793__d)));
    __Vfunc_aes_mul_gf2p2__793__f = ((((IData)(__Vfunc_aes_mul_gf2p2__793__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__793__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__793__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__793__b)));
    __Vfunc_aes_mul_gf2p2__793__Vfuncout = __Vfunc_aes_mul_gf2p2__793__f;
    __Vfunc_aes_mul_gf2p4__790__c = __Vfunc_aes_mul_gf2p2__793__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__794__g = __Vfunc_aes_mul_gf2p4__790__b;
    __Vfunc_aes_scale_omega2_gf2p2__794__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__794__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__794__g)));
    __Vfunc_aes_scale_omega2_gf2p2__794__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__794__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__790__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__790__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__790__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__794__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__795__g = __Vfunc_aes_mul_gf2p4__790__b;
    __Vfunc_aes_scale_omega2_gf2p2__795__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__795__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__795__g)));
    __Vfunc_aes_scale_omega2_gf2p2__795__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__795__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__790__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__790__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__790__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__795__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__790__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__790__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__790__Vfuncout;
    __Vfunc_aes_mul_gf2p4__796__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                 >> 0x14U));
    __Vfunc_aes_mul_gf2p4__796__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__797__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__796__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__797__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__796__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__797__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__797__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__797__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__797__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__797__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__797__d)));
    __Vfunc_aes_mul_gf2p2__797__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__797__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__797__d)));
    __Vfunc_aes_mul_gf2p2__797__f = ((((IData)(__Vfunc_aes_mul_gf2p2__797__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__797__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__797__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__797__b)));
    __Vfunc_aes_mul_gf2p2__797__Vfuncout = __Vfunc_aes_mul_gf2p2__797__f;
    __Vfunc_aes_mul_gf2p4__796__a = __Vfunc_aes_mul_gf2p2__797__Vfuncout;
    __Vfunc_aes_mul_gf2p2__798__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__796__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__796__delta)));
    __Vfunc_aes_mul_gf2p2__798__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__796__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__796__gamma)));
    __Vfunc_aes_mul_gf2p2__798__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__798__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__798__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__798__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__798__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__798__d)));
    __Vfunc_aes_mul_gf2p2__798__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__798__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__798__d)));
    __Vfunc_aes_mul_gf2p2__798__f = ((((IData)(__Vfunc_aes_mul_gf2p2__798__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__798__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__798__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__798__b)));
    __Vfunc_aes_mul_gf2p2__798__Vfuncout = __Vfunc_aes_mul_gf2p2__798__f;
    __Vfunc_aes_mul_gf2p4__796__b = __Vfunc_aes_mul_gf2p2__798__Vfuncout;
    __Vfunc_aes_mul_gf2p2__799__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__796__delta));
    __Vfunc_aes_mul_gf2p2__799__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__796__gamma));
    __Vfunc_aes_mul_gf2p2__799__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__799__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__799__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__799__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__799__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__799__d)));
    __Vfunc_aes_mul_gf2p2__799__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__799__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__799__d)));
    __Vfunc_aes_mul_gf2p2__799__f = ((((IData)(__Vfunc_aes_mul_gf2p2__799__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__799__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__799__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__799__b)));
    __Vfunc_aes_mul_gf2p2__799__Vfuncout = __Vfunc_aes_mul_gf2p2__799__f;
    __Vfunc_aes_mul_gf2p4__796__c = __Vfunc_aes_mul_gf2p2__799__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__800__g = __Vfunc_aes_mul_gf2p4__796__b;
    __Vfunc_aes_scale_omega2_gf2p2__800__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__800__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__800__g)));
    __Vfunc_aes_scale_omega2_gf2p2__800__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__800__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__796__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__796__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__796__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__800__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__801__g = __Vfunc_aes_mul_gf2p4__796__b;
    __Vfunc_aes_scale_omega2_gf2p2__801__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__801__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__801__g)));
    __Vfunc_aes_scale_omega2_gf2p2__801__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__801__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__796__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__796__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__796__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__801__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__796__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__796__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__796__Vfuncout;
    __Vfunc_aes_mul_gf2p2__828__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__828__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__828__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__828__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__828__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__828__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__828__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__828__d)));
    __Vfunc_aes_mul_gf2p2__828__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__828__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__828__d)));
    __Vfunc_aes_mul_gf2p2__828__f = ((((IData)(__Vfunc_aes_mul_gf2p2__828__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__828__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__828__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__828__b)));
    __Vfunc_aes_mul_gf2p2__828__Vfuncout = __Vfunc_aes_mul_gf2p2__828__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__828__Vfuncout;
    __Vfunc_aes_mul_gf2p2__829__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__829__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i));
    __Vfunc_aes_mul_gf2p2__829__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__829__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__829__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__829__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__829__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__829__d)));
    __Vfunc_aes_mul_gf2p2__829__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__829__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__829__d)));
    __Vfunc_aes_mul_gf2p2__829__f = ((((IData)(__Vfunc_aes_mul_gf2p2__829__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__829__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__829__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__829__b)));
    __Vfunc_aes_mul_gf2p2__829__Vfuncout = __Vfunc_aes_mul_gf2p2__829__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__829__Vfuncout;
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

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__75(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__75\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__770__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__770__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__770__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__771__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__771__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__771__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__772__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__772__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__772__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__773__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__773__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__773__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__774__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__774__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__774__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__775__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__775__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__775__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__776__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__776__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__776__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__777__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__777__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__777__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__778__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__778__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__778__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__779__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__779__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__779__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__780__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__780__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__780__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__781__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__781__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__781__vec_c;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__782__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__782__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__782__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__782__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__782__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__783__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__783__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__783__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__784__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__784__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__784__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__785__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__785__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__785__d;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__786__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__786__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__786__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__786__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__786__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__787__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__787__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__787__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__788__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__788__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__788__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__789__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__789__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__789__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__802__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__802__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__802__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__802__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__802__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__802__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__803__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__803__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__803__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__803__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__803__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__803__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__803__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__804__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__804__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__804__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__804__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__804__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__804__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__804__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__805__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__805__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__805__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__805__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__805__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__805__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__805__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__806__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__806__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__806__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__807__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__807__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__807__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__808__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__808__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__808__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__808__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__808__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__808__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__809__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__809__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__809__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__809__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__809__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__809__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__809__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__810__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__810__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__810__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__810__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__810__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__810__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__810__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__811__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__811__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__811__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__811__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__811__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__811__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__811__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__812__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__812__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__812__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__813__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__813__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__813__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__814__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__814__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__814__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__815__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__815__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__815__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__816__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__816__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__816__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__817__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__817__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__817__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__822__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__822__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__822__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__822__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__822__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__822__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__822__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__823__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__823__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__823__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__823__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__823__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__823__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__823__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__826__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__826__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__826__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__826__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__826__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__826__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__826__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__827__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__827__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__827__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__827__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__827__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__827__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__827__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__830__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__830__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__830__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__830__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__830__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__830__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__830__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__831__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__831__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__831__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__831__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__831__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__831__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__831__c;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__838__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__838__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__838__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__838__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__838__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__838__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__839__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__839__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__839__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__839__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__839__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__839__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__839__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__840__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__840__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__840__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__840__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__840__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__840__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__840__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__841__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__841__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__841__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__841__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__841__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__841__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__841__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__842__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__842__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__842__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__843__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__843__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__843__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__844__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__844__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__844__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__844__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__844__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__844__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__845__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__845__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__845__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__845__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__845__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__845__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__845__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__846__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__846__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__846__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__846__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__846__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__846__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__846__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__847__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__847__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__847__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__847__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__847__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__847__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__847__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__848__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__848__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__848__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__849__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__849__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__849__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__862__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__862__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__863__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__863__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__863__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__863__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__863__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__863__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__863__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__864__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__864__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__864__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__864__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__864__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__864__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__864__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__865__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__865__d;
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
    vlSelf->__Vfunc_aes_mvm__772__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__772__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__772__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__772__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__772__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__772__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__772__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__772__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__772__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [0U][3U] 
                                            >> 8U));
    __Vfunc_aes_mvm__772__vec_c = 0U;
    __Vfunc_aes_mvm__772__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__772__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__772__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__772__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__772__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__772__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__772__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__772__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__772__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__772__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__772__vec_b)))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__772__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__772__vec_b)))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__772__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__772__vec_b)))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__772__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__772__vec_b)))));
    __Vfunc_aes_mvm__772__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__772__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__772__vec_b)))));
    __Vfunc_aes_mvm__772__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__772__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__772__vec_b)))));
    __Vfunc_aes_mvm__772__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__772__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__772__vec_b)))));
    __Vfunc_aes_mvm__772__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__772__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__772__vec_b)))));
    __Vfunc_aes_mvm__772__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__772__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__772__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__772__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__772__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__772__Vfuncout = __Vfunc_aes_mvm__772__vec_c;
    vlSelf->__Vfunc_aes_mvm__771__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__771__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__771__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__771__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__771__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__771__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__771__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__771__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__771__vec_b = (0xffU & (0x63U ^ 
                                            ((vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                              [0U][3U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                [0U][3U] 
                                                >> 8U))));
    __Vfunc_aes_mvm__771__vec_c = 0U;
    __Vfunc_aes_mvm__771__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__771__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__771__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__771__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__771__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__771__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__771__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__771__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__771__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__771__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__771__vec_b)))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__771__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__771__vec_b)))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__771__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__771__vec_b)))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__771__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__771__vec_b)))));
    __Vfunc_aes_mvm__771__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__771__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__771__vec_b)))));
    __Vfunc_aes_mvm__771__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__771__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__771__vec_b)))));
    __Vfunc_aes_mvm__771__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__771__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__771__vec_b)))));
    __Vfunc_aes_mvm__771__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__771__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__771__vec_b)))));
    __Vfunc_aes_mvm__771__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__771__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__771__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__771__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__771__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__771__Vfuncout = __Vfunc_aes_mvm__771__vec_c;
    vlSelf->__Vfunc_aes_mvm__770__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__770__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__770__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__770__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__770__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__770__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__770__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__770__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__770__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [0U][3U] 
                                            >> 8U));
    __Vfunc_aes_mvm__770__vec_c = 0U;
    __Vfunc_aes_mvm__770__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__770__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__770__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__770__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__770__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__770__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__770__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__770__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__770__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__770__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__770__vec_b)))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__770__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__770__vec_b)))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__770__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__770__vec_b)))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__770__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__770__vec_b)))));
    __Vfunc_aes_mvm__770__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__770__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__770__vec_b)))));
    __Vfunc_aes_mvm__770__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__770__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__770__vec_b)))));
    __Vfunc_aes_mvm__770__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__770__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__770__vec_b)))));
    __Vfunc_aes_mvm__770__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__770__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__770__vec_b)))));
    __Vfunc_aes_mvm__770__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__770__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__770__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__770__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__770__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__770__Vfuncout = __Vfunc_aes_mvm__770__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__770__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__771__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__772__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__775__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__775__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__775__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__775__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__775__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__775__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__775__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__775__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__775__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [1U][3U] 
                                            >> 8U));
    __Vfunc_aes_mvm__775__vec_c = 0U;
    __Vfunc_aes_mvm__775__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__775__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__775__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__775__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__775__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__775__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__775__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__775__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__775__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__775__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__775__vec_b)))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__775__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__775__vec_b)))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__775__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__775__vec_b)))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__775__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__775__vec_b)))));
    __Vfunc_aes_mvm__775__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__775__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__775__vec_b)))));
    __Vfunc_aes_mvm__775__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__775__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__775__vec_b)))));
    __Vfunc_aes_mvm__775__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__775__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__775__vec_b)))));
    __Vfunc_aes_mvm__775__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__775__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__775__vec_b)))));
    __Vfunc_aes_mvm__775__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__775__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__775__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__775__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__775__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__775__Vfuncout = __Vfunc_aes_mvm__775__vec_c;
    vlSelf->__Vfunc_aes_mvm__774__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__774__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__774__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__774__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__774__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__774__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__774__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__774__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__774__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [1U][3U] 
                                            >> 8U));
    __Vfunc_aes_mvm__774__vec_c = 0U;
    __Vfunc_aes_mvm__774__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__774__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__774__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__774__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__774__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__774__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__774__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__774__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__774__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__774__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__774__vec_b)))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__774__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__774__vec_b)))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__774__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__774__vec_b)))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__774__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__774__vec_b)))));
    __Vfunc_aes_mvm__774__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__774__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__774__vec_b)))));
    __Vfunc_aes_mvm__774__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__774__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__774__vec_b)))));
    __Vfunc_aes_mvm__774__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__774__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__774__vec_b)))));
    __Vfunc_aes_mvm__774__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__774__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__774__vec_b)))));
    __Vfunc_aes_mvm__774__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__774__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__774__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__774__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__774__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__774__Vfuncout = __Vfunc_aes_mvm__774__vec_c;
    vlSelf->__Vfunc_aes_mvm__773__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__773__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__773__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__773__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__773__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__773__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__773__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__773__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__773__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [1U][3U] 
                                            >> 8U));
    __Vfunc_aes_mvm__773__vec_c = 0U;
    __Vfunc_aes_mvm__773__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__773__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__773__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__773__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__773__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__773__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__773__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__773__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__773__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__773__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__773__vec_b)))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__773__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__773__vec_b)))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__773__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__773__vec_b)))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__773__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__773__vec_b)))));
    __Vfunc_aes_mvm__773__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__773__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__773__vec_b)))));
    __Vfunc_aes_mvm__773__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__773__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__773__vec_b)))));
    __Vfunc_aes_mvm__773__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__773__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__773__vec_b)))));
    __Vfunc_aes_mvm__773__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__773__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__773__vec_b)))));
    __Vfunc_aes_mvm__773__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__773__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__773__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__773__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__773__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__773__Vfuncout = __Vfunc_aes_mvm__773__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__773__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__774__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__775__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__782__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__782__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__782__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__782__gamma)));
    __Vfunc_aes_square_gf2p2__783__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__782__gamma));
    __Vfunc_aes_square_gf2p2__783__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__783__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__783__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__783__Vfuncout = __Vfunc_aes_square_gf2p2__783__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__782__b = __Vfunc_aes_square_gf2p2__783__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__785__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__782__b;
    __Vfunc_aes_scale_omega_gf2p2__785__d = ((2U & 
                                              (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__785__g) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(__Vfunc_aes_scale_omega_gf2p2__785__g) 
                                                   >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__785__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__785__d;
    __Vfunc_aes_square_gf2p2__784__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__782__a;
    __Vfunc_aes_square_gf2p2__784__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__784__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__784__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__784__Vfuncout = __Vfunc_aes_square_gf2p2__784__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__782__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__784__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__785__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__782__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__782__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__782__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__786__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__786__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__786__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__786__gamma)));
    __Vfunc_aes_square_gf2p2__787__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__786__gamma));
    __Vfunc_aes_square_gf2p2__787__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__787__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__787__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__787__Vfuncout = __Vfunc_aes_square_gf2p2__787__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__786__b = __Vfunc_aes_square_gf2p2__787__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__789__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__786__b;
    __Vfunc_aes_scale_omega_gf2p2__789__d = ((2U & 
                                              (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__789__g) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(__Vfunc_aes_scale_omega_gf2p2__789__g) 
                                                   >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__789__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__789__d;
    __Vfunc_aes_square_gf2p2__788__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__786__a;
    __Vfunc_aes_square_gf2p2__788__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__788__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__788__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__788__Vfuncout = __Vfunc_aes_square_gf2p2__788__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__786__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__788__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__789__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__786__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__786__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__786__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__802__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p4__802__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__803__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__802__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__803__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__802__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__803__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__803__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__803__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__803__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__803__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__803__d)));
    __Vfunc_aes_mul_gf2p2__803__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__803__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__803__d)));
    __Vfunc_aes_mul_gf2p2__803__f = ((((IData)(__Vfunc_aes_mul_gf2p2__803__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__803__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__803__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__803__b)));
    __Vfunc_aes_mul_gf2p2__803__Vfuncout = __Vfunc_aes_mul_gf2p2__803__f;
    __Vfunc_aes_mul_gf2p4__802__a = __Vfunc_aes_mul_gf2p2__803__Vfuncout;
    __Vfunc_aes_mul_gf2p2__804__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__802__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__802__delta)));
    __Vfunc_aes_mul_gf2p2__804__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__802__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__802__gamma)));
    __Vfunc_aes_mul_gf2p2__804__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__804__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__804__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__804__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__804__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__804__d)));
    __Vfunc_aes_mul_gf2p2__804__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__804__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__804__d)));
    __Vfunc_aes_mul_gf2p2__804__f = ((((IData)(__Vfunc_aes_mul_gf2p2__804__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__804__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__804__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__804__b)));
    __Vfunc_aes_mul_gf2p2__804__Vfuncout = __Vfunc_aes_mul_gf2p2__804__f;
    __Vfunc_aes_mul_gf2p4__802__b = __Vfunc_aes_mul_gf2p2__804__Vfuncout;
    __Vfunc_aes_mul_gf2p2__805__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__802__delta));
    __Vfunc_aes_mul_gf2p2__805__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__802__gamma));
    __Vfunc_aes_mul_gf2p2__805__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__805__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__805__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__805__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__805__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__805__d)));
    __Vfunc_aes_mul_gf2p2__805__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__805__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__805__d)));
    __Vfunc_aes_mul_gf2p2__805__f = ((((IData)(__Vfunc_aes_mul_gf2p2__805__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__805__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__805__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__805__b)));
    __Vfunc_aes_mul_gf2p2__805__Vfuncout = __Vfunc_aes_mul_gf2p2__805__f;
    __Vfunc_aes_mul_gf2p4__802__c = __Vfunc_aes_mul_gf2p2__805__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__806__g = __Vfunc_aes_mul_gf2p4__802__b;
    __Vfunc_aes_scale_omega2_gf2p2__806__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__806__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__806__g)));
    __Vfunc_aes_scale_omega2_gf2p2__806__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__806__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__802__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__802__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__802__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__806__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__807__g = __Vfunc_aes_mul_gf2p4__802__b;
    __Vfunc_aes_scale_omega2_gf2p2__807__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__807__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__807__g)));
    __Vfunc_aes_scale_omega2_gf2p2__807__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__807__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__802__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__802__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__802__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__807__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__802__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__802__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__802__Vfuncout;
    __Vfunc_aes_mul_gf2p4__808__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p4__808__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__809__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__808__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__809__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__808__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__809__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__809__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__809__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__809__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__809__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__809__d)));
    __Vfunc_aes_mul_gf2p2__809__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__809__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__809__d)));
    __Vfunc_aes_mul_gf2p2__809__f = ((((IData)(__Vfunc_aes_mul_gf2p2__809__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__809__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__809__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__809__b)));
    __Vfunc_aes_mul_gf2p2__809__Vfuncout = __Vfunc_aes_mul_gf2p2__809__f;
    __Vfunc_aes_mul_gf2p4__808__a = __Vfunc_aes_mul_gf2p2__809__Vfuncout;
    __Vfunc_aes_mul_gf2p2__810__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__808__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__808__delta)));
    __Vfunc_aes_mul_gf2p2__810__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__808__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__808__gamma)));
    __Vfunc_aes_mul_gf2p2__810__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__810__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__810__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__810__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__810__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__810__d)));
    __Vfunc_aes_mul_gf2p2__810__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__810__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__810__d)));
    __Vfunc_aes_mul_gf2p2__810__f = ((((IData)(__Vfunc_aes_mul_gf2p2__810__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__810__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__810__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__810__b)));
    __Vfunc_aes_mul_gf2p2__810__Vfuncout = __Vfunc_aes_mul_gf2p2__810__f;
    __Vfunc_aes_mul_gf2p4__808__b = __Vfunc_aes_mul_gf2p2__810__Vfuncout;
    __Vfunc_aes_mul_gf2p2__811__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__808__delta));
    __Vfunc_aes_mul_gf2p2__811__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__808__gamma));
    __Vfunc_aes_mul_gf2p2__811__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__811__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__811__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__811__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__811__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__811__d)));
    __Vfunc_aes_mul_gf2p2__811__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__811__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__811__d)));
    __Vfunc_aes_mul_gf2p2__811__f = ((((IData)(__Vfunc_aes_mul_gf2p2__811__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__811__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__811__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__811__b)));
    __Vfunc_aes_mul_gf2p2__811__Vfuncout = __Vfunc_aes_mul_gf2p2__811__f;
    __Vfunc_aes_mul_gf2p4__808__c = __Vfunc_aes_mul_gf2p2__811__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__812__g = __Vfunc_aes_mul_gf2p4__808__b;
    __Vfunc_aes_scale_omega2_gf2p2__812__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__812__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__812__g)));
    __Vfunc_aes_scale_omega2_gf2p2__812__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__812__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__808__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__808__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__808__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__812__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__813__g = __Vfunc_aes_mul_gf2p4__808__b;
    __Vfunc_aes_scale_omega2_gf2p2__813__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__813__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__813__g)));
    __Vfunc_aes_scale_omega2_gf2p2__813__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__813__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__808__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__808__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__808__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__813__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__808__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__808__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__808__Vfuncout;
    __Vfunc_aes_mul_gf2p2__826__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__826__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__826__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__826__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__826__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__826__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__826__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__826__d)));
    __Vfunc_aes_mul_gf2p2__826__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__826__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__826__d)));
    __Vfunc_aes_mul_gf2p2__826__f = ((((IData)(__Vfunc_aes_mul_gf2p2__826__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__826__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__826__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__826__b)));
    __Vfunc_aes_mul_gf2p2__826__Vfuncout = __Vfunc_aes_mul_gf2p2__826__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__826__Vfuncout;
    __Vfunc_aes_mul_gf2p2__827__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__827__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__827__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__827__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__827__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__827__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__827__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__827__d)));
    __Vfunc_aes_mul_gf2p2__827__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__827__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__827__d)));
    __Vfunc_aes_mul_gf2p2__827__f = ((((IData)(__Vfunc_aes_mul_gf2p2__827__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__827__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__827__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__827__b)));
    __Vfunc_aes_mul_gf2p2__827__Vfuncout = __Vfunc_aes_mul_gf2p2__827__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__827__Vfuncout;
    __Vfunc_aes_mul_gf2p2__830__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__830__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__830__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__830__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__830__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__830__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__830__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__830__d)));
    __Vfunc_aes_mul_gf2p2__830__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__830__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__830__d)));
    __Vfunc_aes_mul_gf2p2__830__f = ((((IData)(__Vfunc_aes_mul_gf2p2__830__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__830__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__830__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__830__b)));
    __Vfunc_aes_mul_gf2p2__830__Vfuncout = __Vfunc_aes_mul_gf2p2__830__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__830__Vfuncout;
    __Vfunc_aes_mul_gf2p2__831__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__831__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__831__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__831__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__831__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__831__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__831__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__831__d)));
    __Vfunc_aes_mul_gf2p2__831__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__831__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__831__d)));
    __Vfunc_aes_mul_gf2p2__831__f = ((((IData)(__Vfunc_aes_mul_gf2p2__831__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__831__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__831__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__831__b)));
    __Vfunc_aes_mul_gf2p2__831__Vfuncout = __Vfunc_aes_mul_gf2p2__831__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__831__Vfuncout;
    vlSelf->__Vfunc_aes_mvm__781__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__781__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__781__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__781__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__781__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__781__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__781__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__781__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__781__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__781__vec_c = 0U;
    __Vfunc_aes_mvm__781__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__781__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__781__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__781__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__781__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__781__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__781__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__781__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__781__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__781__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__781__vec_b)))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__781__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__781__vec_b)))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__781__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__781__vec_b)))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__781__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__781__vec_b)))));
    __Vfunc_aes_mvm__781__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__781__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__781__vec_b)))));
    __Vfunc_aes_mvm__781__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__781__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__781__vec_b)))));
    __Vfunc_aes_mvm__781__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__781__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__781__vec_b)))));
    __Vfunc_aes_mvm__781__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__781__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__781__vec_b)))));
    __Vfunc_aes_mvm__781__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__781__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__781__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__781__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__781__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__781__Vfuncout = __Vfunc_aes_mvm__781__vec_c;
    vlSelf->__Vfunc_aes_mvm__780__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__780__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__780__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__780__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__780__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__780__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__780__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__780__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__780__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__780__vec_c = 0U;
    __Vfunc_aes_mvm__780__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__780__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__780__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__780__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__780__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__780__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__780__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__780__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__780__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__780__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__780__vec_b)))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__780__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__780__vec_b)))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__780__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__780__vec_b)))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__780__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__780__vec_b)))));
    __Vfunc_aes_mvm__780__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__780__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__780__vec_b)))));
    __Vfunc_aes_mvm__780__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__780__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__780__vec_b)))));
    __Vfunc_aes_mvm__780__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__780__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__780__vec_b)))));
    __Vfunc_aes_mvm__780__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__780__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__780__vec_b)))));
    __Vfunc_aes_mvm__780__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__780__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__780__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__780__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__780__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__780__Vfuncout = __Vfunc_aes_mvm__780__vec_c;
    vlSelf->__Vfunc_aes_mvm__779__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__779__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__779__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__779__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__779__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__779__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__779__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__779__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__779__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__779__vec_c = 0U;
    __Vfunc_aes_mvm__779__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__779__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__779__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__779__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__779__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__779__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__779__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__779__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__779__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__779__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__779__vec_b)))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__779__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__779__vec_b)))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__779__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__779__vec_b)))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__779__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__779__vec_b)))));
    __Vfunc_aes_mvm__779__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__779__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__779__vec_b)))));
    __Vfunc_aes_mvm__779__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__779__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__779__vec_b)))));
    __Vfunc_aes_mvm__779__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__779__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__779__vec_b)))));
    __Vfunc_aes_mvm__779__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__779__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__779__vec_b)))));
    __Vfunc_aes_mvm__779__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__779__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__779__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__779__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__779__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__779__Vfuncout = __Vfunc_aes_mvm__779__vec_c;
    vlSelf->mask_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (IData)(__Vfunc_aes_mvm__779__Vfuncout)
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__780__Vfuncout)
                           : (IData)(__Vfunc_aes_mvm__781__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__778__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__778__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__778__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__778__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__778__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__778__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__778__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__778__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__778__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__778__vec_c = 0U;
    __Vfunc_aes_mvm__778__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__778__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__778__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__778__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__778__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__778__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__778__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__778__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__778__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__778__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__778__vec_b)))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__778__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__778__vec_b)))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__778__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__778__vec_b)))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__778__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__778__vec_b)))));
    __Vfunc_aes_mvm__778__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__778__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__778__vec_b)))));
    __Vfunc_aes_mvm__778__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__778__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__778__vec_b)))));
    __Vfunc_aes_mvm__778__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__778__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__778__vec_b)))));
    __Vfunc_aes_mvm__778__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__778__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__778__vec_b)))));
    __Vfunc_aes_mvm__778__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__778__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__778__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__778__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__778__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__778__Vfuncout = __Vfunc_aes_mvm__778__vec_c;
    vlSelf->__Vfunc_aes_mvm__777__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__777__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__777__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__777__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__777__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__777__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__777__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__777__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__777__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__777__vec_c = 0U;
    __Vfunc_aes_mvm__777__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__777__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__777__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__777__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__777__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__777__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__777__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__777__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__777__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__777__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__777__vec_b)))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__777__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__777__vec_b)))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__777__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__777__vec_b)))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__777__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__777__vec_b)))));
    __Vfunc_aes_mvm__777__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__777__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__777__vec_b)))));
    __Vfunc_aes_mvm__777__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__777__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__777__vec_b)))));
    __Vfunc_aes_mvm__777__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__777__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__777__vec_b)))));
    __Vfunc_aes_mvm__777__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__777__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__777__vec_b)))));
    __Vfunc_aes_mvm__777__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__777__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__777__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__777__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__777__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__777__Vfuncout = __Vfunc_aes_mvm__777__vec_c;
    vlSelf->__Vfunc_aes_mvm__776__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__776__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__776__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__776__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__776__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__776__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__776__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__776__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__776__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__776__vec_c = 0U;
    __Vfunc_aes_mvm__776__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__776__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__776__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__776__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__776__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__776__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__776__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__776__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__776__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__776__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__776__vec_b)))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__776__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__776__vec_b)))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__776__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__776__vec_b)))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__776__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__776__vec_b)))));
    __Vfunc_aes_mvm__776__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__776__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__776__vec_b)))));
    __Vfunc_aes_mvm__776__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__776__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__776__vec_b)))));
    __Vfunc_aes_mvm__776__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__776__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__776__vec_b)))));
    __Vfunc_aes_mvm__776__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__776__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__776__vec_b)))));
    __Vfunc_aes_mvm__776__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__776__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__776__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__776__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__776__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__776__Vfuncout = __Vfunc_aes_mvm__776__vec_c;
    vlSelf->data_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (0x63U ^ (IData)(__Vfunc_aes_mvm__776__Vfuncout))
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__777__Vfuncout)
                           : (0x63U ^ (IData)(__Vfunc_aes_mvm__778__Vfuncout))));
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
    __Vfunc_aes_mul_gf2p2__822__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__822__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__822__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__822__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__822__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__822__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__822__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__822__d)));
    __Vfunc_aes_mul_gf2p2__822__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__822__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__822__d)));
    __Vfunc_aes_mul_gf2p2__822__f = ((((IData)(__Vfunc_aes_mul_gf2p2__822__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__822__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__822__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__822__b)));
    __Vfunc_aes_mul_gf2p2__822__Vfuncout = __Vfunc_aes_mul_gf2p2__822__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__822__Vfuncout;
    __Vfunc_aes_mul_gf2p2__823__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__823__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__823__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__823__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__823__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__823__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__823__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__823__d)));
    __Vfunc_aes_mul_gf2p2__823__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__823__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__823__d)));
    __Vfunc_aes_mul_gf2p2__823__f = ((((IData)(__Vfunc_aes_mul_gf2p2__823__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__823__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__823__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__823__b)));
    __Vfunc_aes_mul_gf2p2__823__Vfuncout = __Vfunc_aes_mul_gf2p2__823__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__823__Vfuncout;
    __Vfunc_aes_square_gf2p2__815__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                               >> 6U) 
                                              ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                 >> 4U)));
    __Vfunc_aes_square_gf2p2__815__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__815__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__815__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__815__Vfuncout = __Vfunc_aes_square_gf2p2__815__d;
    __Vfunc_aes_scale_omega2_gf2p2__814__g = __Vfunc_aes_square_gf2p2__815__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__814__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__814__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__814__g)));
    __Vfunc_aes_scale_omega2_gf2p2__814__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__814__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__814__Vfuncout;
    __Vfunc_aes_square_gf2p2__817__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                               >> 2U) 
                                              ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i)));
    __Vfunc_aes_square_gf2p2__817__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__817__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__817__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__817__Vfuncout = __Vfunc_aes_square_gf2p2__817__d;
    __Vfunc_aes_scale_omega2_gf2p2__816__g = __Vfunc_aes_square_gf2p2__817__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__816__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__816__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__816__g)));
    __Vfunc_aes_scale_omega2_gf2p2__816__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__816__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__816__Vfuncout;
    __Vfunc_aes_mul_gf2p4__838__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__838__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__839__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__838__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__839__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__838__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__839__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__839__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__839__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__839__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__839__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__839__d)));
    __Vfunc_aes_mul_gf2p2__839__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__839__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__839__d)));
    __Vfunc_aes_mul_gf2p2__839__f = ((((IData)(__Vfunc_aes_mul_gf2p2__839__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__839__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__839__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__839__b)));
    __Vfunc_aes_mul_gf2p2__839__Vfuncout = __Vfunc_aes_mul_gf2p2__839__f;
    __Vfunc_aes_mul_gf2p4__838__a = __Vfunc_aes_mul_gf2p2__839__Vfuncout;
    __Vfunc_aes_mul_gf2p2__840__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__838__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__838__delta)));
    __Vfunc_aes_mul_gf2p2__840__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__838__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__838__gamma)));
    __Vfunc_aes_mul_gf2p2__840__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__840__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__840__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__840__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__840__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__840__d)));
    __Vfunc_aes_mul_gf2p2__840__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__840__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__840__d)));
    __Vfunc_aes_mul_gf2p2__840__f = ((((IData)(__Vfunc_aes_mul_gf2p2__840__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__840__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__840__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__840__b)));
    __Vfunc_aes_mul_gf2p2__840__Vfuncout = __Vfunc_aes_mul_gf2p2__840__f;
    __Vfunc_aes_mul_gf2p4__838__b = __Vfunc_aes_mul_gf2p2__840__Vfuncout;
    __Vfunc_aes_mul_gf2p2__841__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__838__delta));
    __Vfunc_aes_mul_gf2p2__841__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__838__gamma));
    __Vfunc_aes_mul_gf2p2__841__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__841__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__841__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__841__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__841__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__841__d)));
    __Vfunc_aes_mul_gf2p2__841__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__841__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__841__d)));
    __Vfunc_aes_mul_gf2p2__841__f = ((((IData)(__Vfunc_aes_mul_gf2p2__841__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__841__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__841__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__841__b)));
    __Vfunc_aes_mul_gf2p2__841__Vfuncout = __Vfunc_aes_mul_gf2p2__841__f;
    __Vfunc_aes_mul_gf2p4__838__c = __Vfunc_aes_mul_gf2p2__841__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__842__g = __Vfunc_aes_mul_gf2p4__838__b;
    __Vfunc_aes_scale_omega2_gf2p2__842__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__842__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__842__g)));
    __Vfunc_aes_scale_omega2_gf2p2__842__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__842__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__838__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__838__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__838__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__842__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__843__g = __Vfunc_aes_mul_gf2p4__838__b;
    __Vfunc_aes_scale_omega2_gf2p2__843__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__843__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__843__g)));
    __Vfunc_aes_scale_omega2_gf2p2__843__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__843__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__838__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__838__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__838__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__843__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__838__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__838__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__838__Vfuncout;
    __Vfunc_aes_mul_gf2p4__844__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__844__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__845__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__844__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__845__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__844__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__845__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__845__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__845__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__845__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__845__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__845__d)));
    __Vfunc_aes_mul_gf2p2__845__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__845__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__845__d)));
    __Vfunc_aes_mul_gf2p2__845__f = ((((IData)(__Vfunc_aes_mul_gf2p2__845__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__845__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__845__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__845__b)));
    __Vfunc_aes_mul_gf2p2__845__Vfuncout = __Vfunc_aes_mul_gf2p2__845__f;
    __Vfunc_aes_mul_gf2p4__844__a = __Vfunc_aes_mul_gf2p2__845__Vfuncout;
    __Vfunc_aes_mul_gf2p2__846__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__844__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__844__delta)));
    __Vfunc_aes_mul_gf2p2__846__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__844__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__844__gamma)));
    __Vfunc_aes_mul_gf2p2__846__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__846__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__846__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__846__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__846__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__846__d)));
    __Vfunc_aes_mul_gf2p2__846__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__846__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__846__d)));
    __Vfunc_aes_mul_gf2p2__846__f = ((((IData)(__Vfunc_aes_mul_gf2p2__846__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__846__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__846__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__846__b)));
    __Vfunc_aes_mul_gf2p2__846__Vfuncout = __Vfunc_aes_mul_gf2p2__846__f;
    __Vfunc_aes_mul_gf2p4__844__b = __Vfunc_aes_mul_gf2p2__846__Vfuncout;
    __Vfunc_aes_mul_gf2p2__847__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__844__delta));
    __Vfunc_aes_mul_gf2p2__847__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__844__gamma));
    __Vfunc_aes_mul_gf2p2__847__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__847__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__847__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__847__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__847__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__847__d)));
    __Vfunc_aes_mul_gf2p2__847__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__847__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__847__d)));
    __Vfunc_aes_mul_gf2p2__847__f = ((((IData)(__Vfunc_aes_mul_gf2p2__847__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__847__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__847__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__847__b)));
    __Vfunc_aes_mul_gf2p2__847__Vfuncout = __Vfunc_aes_mul_gf2p2__847__f;
    __Vfunc_aes_mul_gf2p4__844__c = __Vfunc_aes_mul_gf2p2__847__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__848__g = __Vfunc_aes_mul_gf2p4__844__b;
    __Vfunc_aes_scale_omega2_gf2p2__848__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__848__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__848__g)));
    __Vfunc_aes_scale_omega2_gf2p2__848__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__848__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__844__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__844__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__844__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__848__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__849__g = __Vfunc_aes_mul_gf2p4__844__b;
    __Vfunc_aes_scale_omega2_gf2p2__849__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__849__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__849__g)));
    __Vfunc_aes_scale_omega2_gf2p2__849__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__849__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__844__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__844__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__844__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__849__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__844__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__844__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__844__Vfuncout;
    __Vfunc_aes_mul_gf2p4__862__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__862__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p2__863__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__862__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__863__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__862__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__863__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__863__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__863__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__863__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__863__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__863__d)));
    __Vfunc_aes_mul_gf2p2__863__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__863__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__863__d)));
    __Vfunc_aes_mul_gf2p2__863__f = ((((IData)(__Vfunc_aes_mul_gf2p2__863__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__863__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__863__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__863__b)));
    __Vfunc_aes_mul_gf2p2__863__Vfuncout = __Vfunc_aes_mul_gf2p2__863__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__862__a = __Vfunc_aes_mul_gf2p2__863__Vfuncout;
    __Vfunc_aes_mul_gf2p2__864__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__862__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__862__delta)));
    __Vfunc_aes_mul_gf2p2__864__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__862__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__862__gamma)));
    __Vfunc_aes_mul_gf2p2__864__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__864__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__864__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__864__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__864__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__864__d)));
    __Vfunc_aes_mul_gf2p2__864__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__864__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__864__d)));
    __Vfunc_aes_mul_gf2p2__864__f = ((((IData)(__Vfunc_aes_mul_gf2p2__864__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__864__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__864__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__864__b)));
    __Vfunc_aes_mul_gf2p2__864__Vfuncout = __Vfunc_aes_mul_gf2p2__864__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__862__b = __Vfunc_aes_mul_gf2p2__864__Vfuncout;
    __Vfunc_aes_mul_gf2p2__865__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__862__delta));
    __Vfunc_aes_mul_gf2p2__865__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__862__gamma));
    vlSelf->__Vfunc_aes_mul_gf2p2__865__a = (1U & (
                                                   ((IData)(__Vfunc_aes_mul_gf2p2__865__g) 
                                                    & (IData)(__Vfunc_aes_mul_gf2p2__865__d)) 
                                                   >> 1U));
    vlSelf->__Vfunc_aes_mul_gf2p2__865__b = (1U & (
                                                   VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__865__g) 
                                                   & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__865__d)));
    vlSelf->__Vfunc_aes_mul_gf2p2__865__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__865__g) 
                                                   & (IData)(__Vfunc_aes_mul_gf2p2__865__d)));
}
