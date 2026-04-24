// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__47(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__47\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__680__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__680__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__680__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__680__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__680__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__680__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__681__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__681__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__681__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__681__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__681__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__681__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__681__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__682__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__682__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__682__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__682__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__682__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__682__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__682__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__683__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__683__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__683__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__683__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__683__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__683__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__683__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__684__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__684__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__684__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__685__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__685__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__685__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__686__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__686__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__686__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__686__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__686__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__686__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__687__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__687__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__687__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__687__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__687__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__687__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__687__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__688__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__688__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__688__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__688__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__688__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__688__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__688__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__689__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__689__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__689__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__689__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__689__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__689__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__689__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__690__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__690__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__690__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__691__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__691__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__691__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__710__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__710__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__710__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__710__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__710__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__710__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__710__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__711__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__711__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__711__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__711__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__711__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__711__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__711__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__714__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__714__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__714__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__714__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__714__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__714__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__714__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__715__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__715__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__715__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__715__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__715__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__715__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__715__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__718__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__718__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__718__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__718__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__718__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__718__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__718__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__719__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__719__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__719__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__719__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__719__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__719__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__719__c;
    // Body
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
        = ((0xff00000U & ((vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[8U] 
                           << 0x18U) | (0xf00000U & 
                                        (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[7U] 
                                         >> 8U)))) 
           | ((0xf0000U & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[8U] 
                           << 0xcU)) | ((0xff00U & 
                                         vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[8U]) 
                                        | (0xffU & 
                                           (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[8U] 
                                            >> 0x10U)))));
    __Vfunc_aes_mul_gf2p2__710__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0x10U));
    __Vfunc_aes_mul_gf2p2__710__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__710__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__710__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__710__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__710__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__710__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__710__d)));
    __Vfunc_aes_mul_gf2p2__710__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__710__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__710__d)));
    __Vfunc_aes_mul_gf2p2__710__f = ((((IData)(__Vfunc_aes_mul_gf2p2__710__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__710__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__710__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__710__b)));
    __Vfunc_aes_mul_gf2p2__710__Vfuncout = __Vfunc_aes_mul_gf2p2__710__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__710__Vfuncout;
    __Vfunc_aes_mul_gf2p2__711__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0x10U));
    __Vfunc_aes_mul_gf2p2__711__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__711__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__711__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__711__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__711__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__711__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__711__d)));
    __Vfunc_aes_mul_gf2p2__711__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__711__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__711__d)));
    __Vfunc_aes_mul_gf2p2__711__f = ((((IData)(__Vfunc_aes_mul_gf2p2__711__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__711__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__711__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__711__b)));
    __Vfunc_aes_mul_gf2p2__711__Vfuncout = __Vfunc_aes_mul_gf2p2__711__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__711__Vfuncout;
    __Vfunc_aes_mul_gf2p2__714__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0xcU));
    __Vfunc_aes_mul_gf2p2__714__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__714__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__714__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__714__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__714__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__714__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__714__d)));
    __Vfunc_aes_mul_gf2p2__714__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__714__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__714__d)));
    __Vfunc_aes_mul_gf2p2__714__f = ((((IData)(__Vfunc_aes_mul_gf2p2__714__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__714__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__714__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__714__b)));
    __Vfunc_aes_mul_gf2p2__714__Vfuncout = __Vfunc_aes_mul_gf2p2__714__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__714__Vfuncout;
    __Vfunc_aes_mul_gf2p2__715__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0xcU));
    __Vfunc_aes_mul_gf2p2__715__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__715__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__715__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__715__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__715__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__715__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__715__d)));
    __Vfunc_aes_mul_gf2p2__715__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__715__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__715__d)));
    __Vfunc_aes_mul_gf2p2__715__f = ((((IData)(__Vfunc_aes_mul_gf2p2__715__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__715__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__715__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__715__b)));
    __Vfunc_aes_mul_gf2p2__715__Vfuncout = __Vfunc_aes_mul_gf2p2__715__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__715__Vfuncout;
    __Vfunc_aes_mul_gf2p4__680__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                 >> 0x14U));
    __Vfunc_aes_mul_gf2p4__680__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__681__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__680__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__681__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__680__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__681__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__681__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__681__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__681__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__681__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__681__d)));
    __Vfunc_aes_mul_gf2p2__681__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__681__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__681__d)));
    __Vfunc_aes_mul_gf2p2__681__f = ((((IData)(__Vfunc_aes_mul_gf2p2__681__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__681__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__681__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__681__b)));
    __Vfunc_aes_mul_gf2p2__681__Vfuncout = __Vfunc_aes_mul_gf2p2__681__f;
    __Vfunc_aes_mul_gf2p4__680__a = __Vfunc_aes_mul_gf2p2__681__Vfuncout;
    __Vfunc_aes_mul_gf2p2__682__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__680__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__680__delta)));
    __Vfunc_aes_mul_gf2p2__682__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__680__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__680__gamma)));
    __Vfunc_aes_mul_gf2p2__682__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__682__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__682__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__682__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__682__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__682__d)));
    __Vfunc_aes_mul_gf2p2__682__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__682__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__682__d)));
    __Vfunc_aes_mul_gf2p2__682__f = ((((IData)(__Vfunc_aes_mul_gf2p2__682__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__682__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__682__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__682__b)));
    __Vfunc_aes_mul_gf2p2__682__Vfuncout = __Vfunc_aes_mul_gf2p2__682__f;
    __Vfunc_aes_mul_gf2p4__680__b = __Vfunc_aes_mul_gf2p2__682__Vfuncout;
    __Vfunc_aes_mul_gf2p2__683__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__680__delta));
    __Vfunc_aes_mul_gf2p2__683__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__680__gamma));
    __Vfunc_aes_mul_gf2p2__683__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__683__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__683__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__683__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__683__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__683__d)));
    __Vfunc_aes_mul_gf2p2__683__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__683__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__683__d)));
    __Vfunc_aes_mul_gf2p2__683__f = ((((IData)(__Vfunc_aes_mul_gf2p2__683__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__683__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__683__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__683__b)));
    __Vfunc_aes_mul_gf2p2__683__Vfuncout = __Vfunc_aes_mul_gf2p2__683__f;
    __Vfunc_aes_mul_gf2p4__680__c = __Vfunc_aes_mul_gf2p2__683__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__684__g = __Vfunc_aes_mul_gf2p4__680__b;
    __Vfunc_aes_scale_omega2_gf2p2__684__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__684__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__684__g)));
    __Vfunc_aes_scale_omega2_gf2p2__684__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__684__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__680__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__680__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__680__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__684__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__685__g = __Vfunc_aes_mul_gf2p4__680__b;
    __Vfunc_aes_scale_omega2_gf2p2__685__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__685__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__685__g)));
    __Vfunc_aes_scale_omega2_gf2p2__685__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__685__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__680__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__680__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__680__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__685__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__680__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__680__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__680__Vfuncout;
    __Vfunc_aes_mul_gf2p4__686__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                 >> 0x14U));
    __Vfunc_aes_mul_gf2p4__686__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__687__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__686__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__687__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__686__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__687__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__687__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__687__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__687__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__687__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__687__d)));
    __Vfunc_aes_mul_gf2p2__687__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__687__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__687__d)));
    __Vfunc_aes_mul_gf2p2__687__f = ((((IData)(__Vfunc_aes_mul_gf2p2__687__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__687__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__687__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__687__b)));
    __Vfunc_aes_mul_gf2p2__687__Vfuncout = __Vfunc_aes_mul_gf2p2__687__f;
    __Vfunc_aes_mul_gf2p4__686__a = __Vfunc_aes_mul_gf2p2__687__Vfuncout;
    __Vfunc_aes_mul_gf2p2__688__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__686__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__686__delta)));
    __Vfunc_aes_mul_gf2p2__688__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__686__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__686__gamma)));
    __Vfunc_aes_mul_gf2p2__688__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__688__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__688__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__688__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__688__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__688__d)));
    __Vfunc_aes_mul_gf2p2__688__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__688__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__688__d)));
    __Vfunc_aes_mul_gf2p2__688__f = ((((IData)(__Vfunc_aes_mul_gf2p2__688__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__688__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__688__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__688__b)));
    __Vfunc_aes_mul_gf2p2__688__Vfuncout = __Vfunc_aes_mul_gf2p2__688__f;
    __Vfunc_aes_mul_gf2p4__686__b = __Vfunc_aes_mul_gf2p2__688__Vfuncout;
    __Vfunc_aes_mul_gf2p2__689__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__686__delta));
    __Vfunc_aes_mul_gf2p2__689__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__686__gamma));
    __Vfunc_aes_mul_gf2p2__689__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__689__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__689__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__689__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__689__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__689__d)));
    __Vfunc_aes_mul_gf2p2__689__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__689__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__689__d)));
    __Vfunc_aes_mul_gf2p2__689__f = ((((IData)(__Vfunc_aes_mul_gf2p2__689__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__689__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__689__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__689__b)));
    __Vfunc_aes_mul_gf2p2__689__Vfuncout = __Vfunc_aes_mul_gf2p2__689__f;
    __Vfunc_aes_mul_gf2p4__686__c = __Vfunc_aes_mul_gf2p2__689__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__690__g = __Vfunc_aes_mul_gf2p4__686__b;
    __Vfunc_aes_scale_omega2_gf2p2__690__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__690__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__690__g)));
    __Vfunc_aes_scale_omega2_gf2p2__690__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__690__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__686__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__686__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__686__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__690__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__691__g = __Vfunc_aes_mul_gf2p4__686__b;
    __Vfunc_aes_scale_omega2_gf2p2__691__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__691__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__691__g)));
    __Vfunc_aes_scale_omega2_gf2p2__691__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__691__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__686__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__686__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__686__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__691__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__686__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__686__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__686__Vfuncout;
    __Vfunc_aes_mul_gf2p2__718__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__718__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__718__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__718__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__718__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__718__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__718__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__718__d)));
    __Vfunc_aes_mul_gf2p2__718__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__718__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__718__d)));
    __Vfunc_aes_mul_gf2p2__718__f = ((((IData)(__Vfunc_aes_mul_gf2p2__718__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__718__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__718__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__718__b)));
    __Vfunc_aes_mul_gf2p2__718__Vfuncout = __Vfunc_aes_mul_gf2p2__718__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__718__Vfuncout;
    __Vfunc_aes_mul_gf2p2__719__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__719__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i));
    __Vfunc_aes_mul_gf2p2__719__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__719__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__719__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__719__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__719__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__719__d)));
    __Vfunc_aes_mul_gf2p2__719__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__719__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__719__d)));
    __Vfunc_aes_mul_gf2p2__719__f = ((((IData)(__Vfunc_aes_mul_gf2p2__719__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__719__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__719__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__719__b)));
    __Vfunc_aes_mul_gf2p2__719__Vfuncout = __Vfunc_aes_mul_gf2p2__719__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__719__Vfuncout;
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

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__73(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__73\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__660__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__660__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__660__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__661__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__661__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__661__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__662__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__662__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__662__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__663__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__663__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__663__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__664__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__664__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__664__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__665__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__665__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__665__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__666__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__666__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__666__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__667__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__667__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__667__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__668__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__668__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__668__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__669__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__669__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__669__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__670__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__670__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__670__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__671__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__671__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__671__vec_c;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__672__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__672__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__672__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__672__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__672__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__673__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__673__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__673__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__674__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__674__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__674__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__675__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__675__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__675__d;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__676__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__676__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__676__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__676__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__676__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__677__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__677__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__677__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__678__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__678__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__678__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__679__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__679__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__679__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__692__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__692__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__692__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__692__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__692__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__692__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__693__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__693__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__693__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__693__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__693__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__693__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__693__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__694__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__694__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__694__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__694__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__694__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__694__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__694__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__695__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__695__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__695__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__695__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__695__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__695__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__695__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__696__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__696__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__696__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__697__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__697__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__697__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__698__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__698__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__698__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__698__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__698__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__698__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__699__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__699__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__699__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__699__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__699__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__699__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__699__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__700__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__700__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__700__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__700__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__700__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__700__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__700__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__701__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__701__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__701__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__701__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__701__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__701__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__701__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__702__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__702__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__702__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__703__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__703__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__703__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__704__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__704__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__704__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__705__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__705__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__705__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__706__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__706__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__706__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__707__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__707__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__707__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__712__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__712__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__712__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__712__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__712__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__712__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__712__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__713__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__713__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__713__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__713__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__713__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__713__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__713__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__716__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__716__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__716__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__716__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__716__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__716__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__716__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__717__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__717__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__717__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__717__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__717__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__717__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__717__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__720__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__720__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__720__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__720__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__720__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__720__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__720__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__721__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__721__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__721__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__721__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__721__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__721__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__721__c;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__728__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__728__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__728__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__728__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__728__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__728__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__729__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__729__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__729__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__729__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__729__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__729__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__729__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__730__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__730__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__730__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__730__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__730__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__730__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__730__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__731__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__731__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__731__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__731__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__731__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__731__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__731__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__732__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__732__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__732__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__733__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__733__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__733__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__734__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__734__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__734__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__734__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__734__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__734__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__735__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__735__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__735__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__735__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__735__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__735__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__735__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__736__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__736__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__736__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__736__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__736__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__736__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__736__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__737__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__737__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__737__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__737__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__737__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__737__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__737__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__738__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__738__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__738__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__739__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__739__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__739__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__752__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__752__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__753__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__753__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__753__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__753__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__753__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__753__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__753__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__754__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__754__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__754__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__754__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__754__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__754__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__754__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__755__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__755__d;
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
    vlSelf->__Vfunc_aes_mvm__662__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__662__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__662__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__662__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__662__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__662__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__662__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__662__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__662__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [0U][2U] 
                                            >> 8U));
    __Vfunc_aes_mvm__662__vec_c = 0U;
    __Vfunc_aes_mvm__662__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__662__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__662__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__662__vec_b)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__662__vec_b)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__662__vec_b)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__662__vec_b)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__662__vec_b)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__662__vec_b)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__662__vec_b)))));
    __Vfunc_aes_mvm__662__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__662__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__662__vec_b)))));
    __Vfunc_aes_mvm__662__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__662__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__662__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__662__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__662__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__662__Vfuncout = __Vfunc_aes_mvm__662__vec_c;
    vlSelf->__Vfunc_aes_mvm__661__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__661__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__661__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__661__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__661__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__661__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__661__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__661__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__661__vec_b = (0xffU & (0x63U ^ 
                                            ((vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                              [0U][2U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                [0U][2U] 
                                                >> 8U))));
    __Vfunc_aes_mvm__661__vec_c = 0U;
    __Vfunc_aes_mvm__661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__661__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__661__vec_b)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__661__vec_b)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__661__vec_b)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__661__vec_b)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__661__vec_b)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__661__vec_b)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__661__vec_b)))));
    __Vfunc_aes_mvm__661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__661__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__661__vec_b)))));
    __Vfunc_aes_mvm__661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__661__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__661__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__661__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__661__Vfuncout = __Vfunc_aes_mvm__661__vec_c;
    vlSelf->__Vfunc_aes_mvm__660__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__660__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__660__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__660__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__660__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__660__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__660__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__660__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__660__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [0U][2U] 
                                            >> 8U));
    __Vfunc_aes_mvm__660__vec_c = 0U;
    __Vfunc_aes_mvm__660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__660__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__660__vec_b)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__660__vec_b)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__660__vec_b)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__660__vec_b)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__660__vec_b)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__660__vec_b)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__660__vec_b)))));
    __Vfunc_aes_mvm__660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__660__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__660__vec_b)))));
    __Vfunc_aes_mvm__660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__660__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__660__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__660__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__660__Vfuncout = __Vfunc_aes_mvm__660__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__660__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__661__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__662__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__665__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__665__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__665__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__665__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__665__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__665__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__665__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__665__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__665__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [1U][2U] 
                                            >> 8U));
    __Vfunc_aes_mvm__665__vec_c = 0U;
    __Vfunc_aes_mvm__665__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__665__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__665__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__665__vec_b)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__665__vec_b)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__665__vec_b)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__665__vec_b)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__665__vec_b)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__665__vec_b)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__665__vec_b)))));
    __Vfunc_aes_mvm__665__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__665__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__665__vec_b)))));
    __Vfunc_aes_mvm__665__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__665__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__665__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__665__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__665__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__665__Vfuncout = __Vfunc_aes_mvm__665__vec_c;
    vlSelf->__Vfunc_aes_mvm__664__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__664__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__664__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__664__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__664__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__664__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__664__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__664__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__664__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [1U][2U] 
                                            >> 8U));
    __Vfunc_aes_mvm__664__vec_c = 0U;
    __Vfunc_aes_mvm__664__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__664__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__664__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__664__vec_b)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__664__vec_b)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__664__vec_b)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__664__vec_b)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__664__vec_b)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__664__vec_b)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__664__vec_b)))));
    __Vfunc_aes_mvm__664__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__664__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__664__vec_b)))));
    __Vfunc_aes_mvm__664__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__664__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__664__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__664__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__664__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__664__Vfuncout = __Vfunc_aes_mvm__664__vec_c;
    vlSelf->__Vfunc_aes_mvm__663__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__663__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__663__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__663__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__663__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__663__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__663__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__663__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__663__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [1U][2U] 
                                            >> 8U));
    __Vfunc_aes_mvm__663__vec_c = 0U;
    __Vfunc_aes_mvm__663__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__663__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__663__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__663__vec_b)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__663__vec_b)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__663__vec_b)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__663__vec_b)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__663__vec_b)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__663__vec_b)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__663__vec_b)))));
    __Vfunc_aes_mvm__663__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__663__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__663__vec_b)))));
    __Vfunc_aes_mvm__663__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__663__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__663__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__663__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__663__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__663__Vfuncout = __Vfunc_aes_mvm__663__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__663__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__664__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__665__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__672__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__672__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__672__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__672__gamma)));
    __Vfunc_aes_square_gf2p2__673__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__672__gamma));
    __Vfunc_aes_square_gf2p2__673__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__673__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__673__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__673__Vfuncout = __Vfunc_aes_square_gf2p2__673__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__672__b = __Vfunc_aes_square_gf2p2__673__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__675__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__672__b;
    __Vfunc_aes_scale_omega_gf2p2__675__d = ((2U & 
                                              (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__675__g) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(__Vfunc_aes_scale_omega_gf2p2__675__g) 
                                                   >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__675__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__675__d;
    __Vfunc_aes_square_gf2p2__674__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__672__a;
    __Vfunc_aes_square_gf2p2__674__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__674__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__674__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__674__Vfuncout = __Vfunc_aes_square_gf2p2__674__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__672__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__674__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__675__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__672__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__672__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__672__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__676__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__676__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__676__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__676__gamma)));
    __Vfunc_aes_square_gf2p2__677__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__676__gamma));
    __Vfunc_aes_square_gf2p2__677__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__677__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__677__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__677__Vfuncout = __Vfunc_aes_square_gf2p2__677__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__676__b = __Vfunc_aes_square_gf2p2__677__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__679__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__676__b;
    __Vfunc_aes_scale_omega_gf2p2__679__d = ((2U & 
                                              (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__679__g) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(__Vfunc_aes_scale_omega_gf2p2__679__g) 
                                                   >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__679__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__679__d;
    __Vfunc_aes_square_gf2p2__678__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__676__a;
    __Vfunc_aes_square_gf2p2__678__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__678__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__678__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__678__Vfuncout = __Vfunc_aes_square_gf2p2__678__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__676__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__678__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__679__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__676__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__676__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__676__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__692__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p4__692__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__693__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__692__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__693__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__692__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__693__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__693__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__693__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__693__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__693__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__693__d)));
    __Vfunc_aes_mul_gf2p2__693__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__693__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__693__d)));
    __Vfunc_aes_mul_gf2p2__693__f = ((((IData)(__Vfunc_aes_mul_gf2p2__693__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__693__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__693__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__693__b)));
    __Vfunc_aes_mul_gf2p2__693__Vfuncout = __Vfunc_aes_mul_gf2p2__693__f;
    __Vfunc_aes_mul_gf2p4__692__a = __Vfunc_aes_mul_gf2p2__693__Vfuncout;
    __Vfunc_aes_mul_gf2p2__694__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__692__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__692__delta)));
    __Vfunc_aes_mul_gf2p2__694__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__692__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__692__gamma)));
    __Vfunc_aes_mul_gf2p2__694__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__694__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__694__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__694__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__694__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__694__d)));
    __Vfunc_aes_mul_gf2p2__694__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__694__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__694__d)));
    __Vfunc_aes_mul_gf2p2__694__f = ((((IData)(__Vfunc_aes_mul_gf2p2__694__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__694__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__694__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__694__b)));
    __Vfunc_aes_mul_gf2p2__694__Vfuncout = __Vfunc_aes_mul_gf2p2__694__f;
    __Vfunc_aes_mul_gf2p4__692__b = __Vfunc_aes_mul_gf2p2__694__Vfuncout;
    __Vfunc_aes_mul_gf2p2__695__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__692__delta));
    __Vfunc_aes_mul_gf2p2__695__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__692__gamma));
    __Vfunc_aes_mul_gf2p2__695__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__695__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__695__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__695__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__695__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__695__d)));
    __Vfunc_aes_mul_gf2p2__695__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__695__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__695__d)));
    __Vfunc_aes_mul_gf2p2__695__f = ((((IData)(__Vfunc_aes_mul_gf2p2__695__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__695__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__695__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__695__b)));
    __Vfunc_aes_mul_gf2p2__695__Vfuncout = __Vfunc_aes_mul_gf2p2__695__f;
    __Vfunc_aes_mul_gf2p4__692__c = __Vfunc_aes_mul_gf2p2__695__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__696__g = __Vfunc_aes_mul_gf2p4__692__b;
    __Vfunc_aes_scale_omega2_gf2p2__696__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__696__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__696__g)));
    __Vfunc_aes_scale_omega2_gf2p2__696__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__696__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__692__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__692__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__692__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__696__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__697__g = __Vfunc_aes_mul_gf2p4__692__b;
    __Vfunc_aes_scale_omega2_gf2p2__697__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__697__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__697__g)));
    __Vfunc_aes_scale_omega2_gf2p2__697__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__697__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__692__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__692__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__692__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__697__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__692__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__692__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__692__Vfuncout;
    __Vfunc_aes_mul_gf2p4__698__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p4__698__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__699__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__698__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__699__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__698__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__699__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__699__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__699__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__699__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__699__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__699__d)));
    __Vfunc_aes_mul_gf2p2__699__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__699__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__699__d)));
    __Vfunc_aes_mul_gf2p2__699__f = ((((IData)(__Vfunc_aes_mul_gf2p2__699__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__699__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__699__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__699__b)));
    __Vfunc_aes_mul_gf2p2__699__Vfuncout = __Vfunc_aes_mul_gf2p2__699__f;
    __Vfunc_aes_mul_gf2p4__698__a = __Vfunc_aes_mul_gf2p2__699__Vfuncout;
    __Vfunc_aes_mul_gf2p2__700__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__698__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__698__delta)));
    __Vfunc_aes_mul_gf2p2__700__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__698__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__698__gamma)));
    __Vfunc_aes_mul_gf2p2__700__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__700__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__700__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__700__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__700__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__700__d)));
    __Vfunc_aes_mul_gf2p2__700__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__700__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__700__d)));
    __Vfunc_aes_mul_gf2p2__700__f = ((((IData)(__Vfunc_aes_mul_gf2p2__700__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__700__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__700__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__700__b)));
    __Vfunc_aes_mul_gf2p2__700__Vfuncout = __Vfunc_aes_mul_gf2p2__700__f;
    __Vfunc_aes_mul_gf2p4__698__b = __Vfunc_aes_mul_gf2p2__700__Vfuncout;
    __Vfunc_aes_mul_gf2p2__701__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__698__delta));
    __Vfunc_aes_mul_gf2p2__701__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__698__gamma));
    __Vfunc_aes_mul_gf2p2__701__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__701__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__701__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__701__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__701__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__701__d)));
    __Vfunc_aes_mul_gf2p2__701__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__701__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__701__d)));
    __Vfunc_aes_mul_gf2p2__701__f = ((((IData)(__Vfunc_aes_mul_gf2p2__701__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__701__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__701__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__701__b)));
    __Vfunc_aes_mul_gf2p2__701__Vfuncout = __Vfunc_aes_mul_gf2p2__701__f;
    __Vfunc_aes_mul_gf2p4__698__c = __Vfunc_aes_mul_gf2p2__701__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__702__g = __Vfunc_aes_mul_gf2p4__698__b;
    __Vfunc_aes_scale_omega2_gf2p2__702__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__702__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__702__g)));
    __Vfunc_aes_scale_omega2_gf2p2__702__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__702__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__698__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__698__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__698__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__702__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__703__g = __Vfunc_aes_mul_gf2p4__698__b;
    __Vfunc_aes_scale_omega2_gf2p2__703__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__703__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__703__g)));
    __Vfunc_aes_scale_omega2_gf2p2__703__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__703__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__698__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__698__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__698__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__703__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__698__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__698__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__698__Vfuncout;
    __Vfunc_aes_mul_gf2p2__716__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__716__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__716__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__716__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__716__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__716__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__716__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__716__d)));
    __Vfunc_aes_mul_gf2p2__716__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__716__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__716__d)));
    __Vfunc_aes_mul_gf2p2__716__f = ((((IData)(__Vfunc_aes_mul_gf2p2__716__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__716__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__716__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__716__b)));
    __Vfunc_aes_mul_gf2p2__716__Vfuncout = __Vfunc_aes_mul_gf2p2__716__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__716__Vfuncout;
    __Vfunc_aes_mul_gf2p2__717__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__717__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__717__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__717__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__717__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__717__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__717__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__717__d)));
    __Vfunc_aes_mul_gf2p2__717__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__717__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__717__d)));
    __Vfunc_aes_mul_gf2p2__717__f = ((((IData)(__Vfunc_aes_mul_gf2p2__717__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__717__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__717__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__717__b)));
    __Vfunc_aes_mul_gf2p2__717__Vfuncout = __Vfunc_aes_mul_gf2p2__717__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__717__Vfuncout;
    __Vfunc_aes_mul_gf2p2__720__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__720__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__720__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__720__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__720__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__720__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__720__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__720__d)));
    __Vfunc_aes_mul_gf2p2__720__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__720__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__720__d)));
    __Vfunc_aes_mul_gf2p2__720__f = ((((IData)(__Vfunc_aes_mul_gf2p2__720__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__720__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__720__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__720__b)));
    __Vfunc_aes_mul_gf2p2__720__Vfuncout = __Vfunc_aes_mul_gf2p2__720__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__720__Vfuncout;
    __Vfunc_aes_mul_gf2p2__721__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__721__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__721__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__721__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__721__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__721__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__721__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__721__d)));
    __Vfunc_aes_mul_gf2p2__721__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__721__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__721__d)));
    __Vfunc_aes_mul_gf2p2__721__f = ((((IData)(__Vfunc_aes_mul_gf2p2__721__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__721__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__721__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__721__b)));
    __Vfunc_aes_mul_gf2p2__721__Vfuncout = __Vfunc_aes_mul_gf2p2__721__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__721__Vfuncout;
    vlSelf->__Vfunc_aes_mvm__671__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__671__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__671__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__671__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__671__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__671__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__671__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__671__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__671__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__671__vec_c = 0U;
    __Vfunc_aes_mvm__671__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__671__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__671__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__671__vec_b)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__671__vec_b)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__671__vec_b)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__671__vec_b)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__671__vec_b)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__671__vec_b)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__671__vec_b)))));
    __Vfunc_aes_mvm__671__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__671__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__671__vec_b)))));
    __Vfunc_aes_mvm__671__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__671__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__671__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__671__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__671__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__671__Vfuncout = __Vfunc_aes_mvm__671__vec_c;
    vlSelf->__Vfunc_aes_mvm__670__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__670__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__670__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__670__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__670__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__670__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__670__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__670__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__670__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__670__vec_c = 0U;
    __Vfunc_aes_mvm__670__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__670__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__670__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__670__vec_b)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__670__vec_b)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__670__vec_b)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__670__vec_b)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__670__vec_b)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__670__vec_b)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__670__vec_b)))));
    __Vfunc_aes_mvm__670__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__670__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__670__vec_b)))));
    __Vfunc_aes_mvm__670__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__670__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__670__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__670__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__670__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__670__Vfuncout = __Vfunc_aes_mvm__670__vec_c;
    vlSelf->__Vfunc_aes_mvm__669__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__669__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__669__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__669__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__669__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__669__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__669__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__669__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__669__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__669__vec_c = 0U;
    __Vfunc_aes_mvm__669__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__669__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__669__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__669__vec_b)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__669__vec_b)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__669__vec_b)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__669__vec_b)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__669__vec_b)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__669__vec_b)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__669__vec_b)))));
    __Vfunc_aes_mvm__669__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__669__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__669__vec_b)))));
    __Vfunc_aes_mvm__669__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__669__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__669__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__669__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__669__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__669__Vfuncout = __Vfunc_aes_mvm__669__vec_c;
    vlSelf->mask_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (IData)(__Vfunc_aes_mvm__669__Vfuncout)
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__670__Vfuncout)
                           : (IData)(__Vfunc_aes_mvm__671__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__668__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__668__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__668__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__668__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__668__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__668__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__668__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__668__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__668__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__668__vec_c = 0U;
    __Vfunc_aes_mvm__668__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__668__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__668__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__668__vec_b)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__668__vec_b)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__668__vec_b)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__668__vec_b)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__668__vec_b)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__668__vec_b)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__668__vec_b)))));
    __Vfunc_aes_mvm__668__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__668__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__668__vec_b)))));
    __Vfunc_aes_mvm__668__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__668__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__668__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__668__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__668__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__668__Vfuncout = __Vfunc_aes_mvm__668__vec_c;
    vlSelf->__Vfunc_aes_mvm__667__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__667__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__667__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__667__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__667__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__667__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__667__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__667__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__667__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__667__vec_c = 0U;
    __Vfunc_aes_mvm__667__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__667__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__667__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__667__vec_b)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__667__vec_b)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__667__vec_b)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__667__vec_b)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__667__vec_b)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__667__vec_b)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__667__vec_b)))));
    __Vfunc_aes_mvm__667__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__667__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__667__vec_b)))));
    __Vfunc_aes_mvm__667__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__667__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__667__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__667__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__667__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__667__Vfuncout = __Vfunc_aes_mvm__667__vec_c;
    vlSelf->__Vfunc_aes_mvm__666__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__666__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__666__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__666__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__666__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__666__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__666__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__666__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__666__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__666__vec_c = 0U;
    __Vfunc_aes_mvm__666__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__666__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__666__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__666__vec_b)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__666__vec_b)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__666__vec_b)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__666__vec_b)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__666__vec_b)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__666__vec_b)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__666__vec_b)))));
    __Vfunc_aes_mvm__666__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__666__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__666__vec_b)))));
    __Vfunc_aes_mvm__666__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__666__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__666__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__666__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__666__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__666__Vfuncout = __Vfunc_aes_mvm__666__vec_c;
    vlSelf->data_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (0x63U ^ (IData)(__Vfunc_aes_mvm__666__Vfuncout))
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__667__Vfuncout)
                           : (0x63U ^ (IData)(__Vfunc_aes_mvm__668__Vfuncout))));
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
    __Vfunc_aes_mul_gf2p2__712__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__712__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__712__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__712__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__712__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__712__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__712__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__712__d)));
    __Vfunc_aes_mul_gf2p2__712__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__712__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__712__d)));
    __Vfunc_aes_mul_gf2p2__712__f = ((((IData)(__Vfunc_aes_mul_gf2p2__712__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__712__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__712__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__712__b)));
    __Vfunc_aes_mul_gf2p2__712__Vfuncout = __Vfunc_aes_mul_gf2p2__712__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__712__Vfuncout;
    __Vfunc_aes_mul_gf2p2__713__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__713__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__713__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__713__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__713__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__713__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__713__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__713__d)));
    __Vfunc_aes_mul_gf2p2__713__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__713__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__713__d)));
    __Vfunc_aes_mul_gf2p2__713__f = ((((IData)(__Vfunc_aes_mul_gf2p2__713__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__713__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__713__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__713__b)));
    __Vfunc_aes_mul_gf2p2__713__Vfuncout = __Vfunc_aes_mul_gf2p2__713__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__713__Vfuncout;
    __Vfunc_aes_square_gf2p2__705__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                               >> 6U) 
                                              ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                 >> 4U)));
    __Vfunc_aes_square_gf2p2__705__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__705__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__705__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__705__Vfuncout = __Vfunc_aes_square_gf2p2__705__d;
    __Vfunc_aes_scale_omega2_gf2p2__704__g = __Vfunc_aes_square_gf2p2__705__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__704__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__704__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__704__g)));
    __Vfunc_aes_scale_omega2_gf2p2__704__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__704__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__704__Vfuncout;
    __Vfunc_aes_square_gf2p2__707__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                               >> 2U) 
                                              ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i)));
    __Vfunc_aes_square_gf2p2__707__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__707__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__707__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__707__Vfuncout = __Vfunc_aes_square_gf2p2__707__d;
    __Vfunc_aes_scale_omega2_gf2p2__706__g = __Vfunc_aes_square_gf2p2__707__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__706__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__706__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__706__g)));
    __Vfunc_aes_scale_omega2_gf2p2__706__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__706__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__706__Vfuncout;
    __Vfunc_aes_mul_gf2p4__728__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__728__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__729__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__728__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__729__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__728__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__729__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__729__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__729__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__729__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__729__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__729__d)));
    __Vfunc_aes_mul_gf2p2__729__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__729__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__729__d)));
    __Vfunc_aes_mul_gf2p2__729__f = ((((IData)(__Vfunc_aes_mul_gf2p2__729__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__729__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__729__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__729__b)));
    __Vfunc_aes_mul_gf2p2__729__Vfuncout = __Vfunc_aes_mul_gf2p2__729__f;
    __Vfunc_aes_mul_gf2p4__728__a = __Vfunc_aes_mul_gf2p2__729__Vfuncout;
    __Vfunc_aes_mul_gf2p2__730__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__728__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__728__delta)));
    __Vfunc_aes_mul_gf2p2__730__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__728__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__728__gamma)));
    __Vfunc_aes_mul_gf2p2__730__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__730__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__730__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__730__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__730__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__730__d)));
    __Vfunc_aes_mul_gf2p2__730__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__730__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__730__d)));
    __Vfunc_aes_mul_gf2p2__730__f = ((((IData)(__Vfunc_aes_mul_gf2p2__730__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__730__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__730__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__730__b)));
    __Vfunc_aes_mul_gf2p2__730__Vfuncout = __Vfunc_aes_mul_gf2p2__730__f;
    __Vfunc_aes_mul_gf2p4__728__b = __Vfunc_aes_mul_gf2p2__730__Vfuncout;
    __Vfunc_aes_mul_gf2p2__731__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__728__delta));
    __Vfunc_aes_mul_gf2p2__731__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__728__gamma));
    __Vfunc_aes_mul_gf2p2__731__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__731__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__731__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__731__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__731__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__731__d)));
    __Vfunc_aes_mul_gf2p2__731__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__731__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__731__d)));
    __Vfunc_aes_mul_gf2p2__731__f = ((((IData)(__Vfunc_aes_mul_gf2p2__731__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__731__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__731__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__731__b)));
    __Vfunc_aes_mul_gf2p2__731__Vfuncout = __Vfunc_aes_mul_gf2p2__731__f;
    __Vfunc_aes_mul_gf2p4__728__c = __Vfunc_aes_mul_gf2p2__731__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__732__g = __Vfunc_aes_mul_gf2p4__728__b;
    __Vfunc_aes_scale_omega2_gf2p2__732__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__732__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__732__g)));
    __Vfunc_aes_scale_omega2_gf2p2__732__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__732__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__728__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__728__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__728__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__732__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__733__g = __Vfunc_aes_mul_gf2p4__728__b;
    __Vfunc_aes_scale_omega2_gf2p2__733__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__733__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__733__g)));
    __Vfunc_aes_scale_omega2_gf2p2__733__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__733__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__728__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__728__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__728__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__733__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__728__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__728__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__728__Vfuncout;
    __Vfunc_aes_mul_gf2p4__734__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__734__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__735__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__734__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__735__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__734__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__735__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__735__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__735__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__735__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__735__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__735__d)));
    __Vfunc_aes_mul_gf2p2__735__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__735__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__735__d)));
    __Vfunc_aes_mul_gf2p2__735__f = ((((IData)(__Vfunc_aes_mul_gf2p2__735__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__735__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__735__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__735__b)));
    __Vfunc_aes_mul_gf2p2__735__Vfuncout = __Vfunc_aes_mul_gf2p2__735__f;
    __Vfunc_aes_mul_gf2p4__734__a = __Vfunc_aes_mul_gf2p2__735__Vfuncout;
    __Vfunc_aes_mul_gf2p2__736__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__734__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__734__delta)));
    __Vfunc_aes_mul_gf2p2__736__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__734__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__734__gamma)));
    __Vfunc_aes_mul_gf2p2__736__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__736__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__736__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__736__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__736__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__736__d)));
    __Vfunc_aes_mul_gf2p2__736__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__736__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__736__d)));
    __Vfunc_aes_mul_gf2p2__736__f = ((((IData)(__Vfunc_aes_mul_gf2p2__736__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__736__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__736__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__736__b)));
    __Vfunc_aes_mul_gf2p2__736__Vfuncout = __Vfunc_aes_mul_gf2p2__736__f;
    __Vfunc_aes_mul_gf2p4__734__b = __Vfunc_aes_mul_gf2p2__736__Vfuncout;
    __Vfunc_aes_mul_gf2p2__737__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__734__delta));
    __Vfunc_aes_mul_gf2p2__737__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__734__gamma));
    __Vfunc_aes_mul_gf2p2__737__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__737__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__737__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__737__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__737__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__737__d)));
    __Vfunc_aes_mul_gf2p2__737__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__737__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__737__d)));
    __Vfunc_aes_mul_gf2p2__737__f = ((((IData)(__Vfunc_aes_mul_gf2p2__737__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__737__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__737__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__737__b)));
    __Vfunc_aes_mul_gf2p2__737__Vfuncout = __Vfunc_aes_mul_gf2p2__737__f;
    __Vfunc_aes_mul_gf2p4__734__c = __Vfunc_aes_mul_gf2p2__737__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__738__g = __Vfunc_aes_mul_gf2p4__734__b;
    __Vfunc_aes_scale_omega2_gf2p2__738__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__738__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__738__g)));
    __Vfunc_aes_scale_omega2_gf2p2__738__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__738__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__734__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__734__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__734__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__738__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__739__g = __Vfunc_aes_mul_gf2p4__734__b;
    __Vfunc_aes_scale_omega2_gf2p2__739__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__739__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__739__g)));
    __Vfunc_aes_scale_omega2_gf2p2__739__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__739__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__734__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__734__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__734__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__739__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__734__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__734__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__734__Vfuncout;
    __Vfunc_aes_mul_gf2p4__752__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__752__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p2__753__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__752__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__753__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__752__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__753__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__753__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__753__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__753__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__753__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__753__d)));
    __Vfunc_aes_mul_gf2p2__753__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__753__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__753__d)));
    __Vfunc_aes_mul_gf2p2__753__f = ((((IData)(__Vfunc_aes_mul_gf2p2__753__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__753__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__753__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__753__b)));
    __Vfunc_aes_mul_gf2p2__753__Vfuncout = __Vfunc_aes_mul_gf2p2__753__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__752__a = __Vfunc_aes_mul_gf2p2__753__Vfuncout;
    __Vfunc_aes_mul_gf2p2__754__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__752__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__752__delta)));
    __Vfunc_aes_mul_gf2p2__754__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__752__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__752__gamma)));
    __Vfunc_aes_mul_gf2p2__754__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__754__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__754__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__754__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__754__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__754__d)));
    __Vfunc_aes_mul_gf2p2__754__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__754__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__754__d)));
    __Vfunc_aes_mul_gf2p2__754__f = ((((IData)(__Vfunc_aes_mul_gf2p2__754__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__754__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__754__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__754__b)));
    __Vfunc_aes_mul_gf2p2__754__Vfuncout = __Vfunc_aes_mul_gf2p2__754__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__752__b = __Vfunc_aes_mul_gf2p2__754__Vfuncout;
    __Vfunc_aes_mul_gf2p2__755__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__752__delta));
    __Vfunc_aes_mul_gf2p2__755__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__752__gamma));
    vlSelf->__Vfunc_aes_mul_gf2p2__755__a = (1U & (
                                                   ((IData)(__Vfunc_aes_mul_gf2p2__755__g) 
                                                    & (IData)(__Vfunc_aes_mul_gf2p2__755__d)) 
                                                   >> 1U));
    vlSelf->__Vfunc_aes_mul_gf2p2__755__b = (1U & (
                                                   VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__755__g) 
                                                   & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__755__d)));
    vlSelf->__Vfunc_aes_mul_gf2p2__755__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__755__g) 
                                                   & (IData)(__Vfunc_aes_mul_gf2p2__755__d)));
}
