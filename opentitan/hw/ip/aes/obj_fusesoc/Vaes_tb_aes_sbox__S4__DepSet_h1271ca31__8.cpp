// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__49(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__49\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__900__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__900__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__900__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__900__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__900__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__900__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__901__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__901__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__901__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__901__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__901__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__901__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__901__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__902__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__902__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__902__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__902__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__902__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__902__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__902__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__903__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__903__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__903__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__903__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__903__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__903__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__903__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__904__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__904__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__904__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__905__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__905__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__905__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__906__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__906__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__906__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__906__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__906__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__906__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__907__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__907__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__907__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__907__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__907__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__907__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__907__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__908__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__908__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__908__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__908__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__908__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__908__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__908__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__909__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__909__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__909__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__909__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__909__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__909__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__909__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__910__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__910__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__910__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__911__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__911__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__911__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__930__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__930__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__930__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__930__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__930__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__930__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__930__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__931__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__931__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__931__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__931__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__931__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__931__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__931__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__934__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__934__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__934__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__934__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__934__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__934__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__934__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__935__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__935__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__935__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__935__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__935__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__935__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__935__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__938__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__938__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__938__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__938__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__938__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__938__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__938__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__939__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__939__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__939__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__939__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__939__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__939__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__939__c;
    // Body
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
        = ((0xff00000U & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[1U] 
                          >> 4U)) | ((0xf0000U & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[2U] 
                                                  << 0x10U)) 
                                     | ((0xff00U & 
                                         (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[2U] 
                                          << 4U)) | 
                                        (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[2U] 
                                                  >> 0xcU)))));
    __Vfunc_aes_mul_gf2p2__930__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0x10U));
    __Vfunc_aes_mul_gf2p2__930__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__930__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__930__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__930__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__930__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__930__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__930__d)));
    __Vfunc_aes_mul_gf2p2__930__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__930__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__930__d)));
    __Vfunc_aes_mul_gf2p2__930__f = ((((IData)(__Vfunc_aes_mul_gf2p2__930__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__930__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__930__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__930__b)));
    __Vfunc_aes_mul_gf2p2__930__Vfuncout = __Vfunc_aes_mul_gf2p2__930__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__930__Vfuncout;
    __Vfunc_aes_mul_gf2p2__931__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0x10U));
    __Vfunc_aes_mul_gf2p2__931__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__931__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__931__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__931__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__931__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__931__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__931__d)));
    __Vfunc_aes_mul_gf2p2__931__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__931__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__931__d)));
    __Vfunc_aes_mul_gf2p2__931__f = ((((IData)(__Vfunc_aes_mul_gf2p2__931__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__931__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__931__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__931__b)));
    __Vfunc_aes_mul_gf2p2__931__Vfuncout = __Vfunc_aes_mul_gf2p2__931__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__931__Vfuncout;
    __Vfunc_aes_mul_gf2p2__934__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0xcU));
    __Vfunc_aes_mul_gf2p2__934__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__934__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__934__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__934__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__934__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__934__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__934__d)));
    __Vfunc_aes_mul_gf2p2__934__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__934__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__934__d)));
    __Vfunc_aes_mul_gf2p2__934__f = ((((IData)(__Vfunc_aes_mul_gf2p2__934__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__934__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__934__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__934__b)));
    __Vfunc_aes_mul_gf2p2__934__Vfuncout = __Vfunc_aes_mul_gf2p2__934__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__934__Vfuncout;
    __Vfunc_aes_mul_gf2p2__935__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0xcU));
    __Vfunc_aes_mul_gf2p2__935__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__935__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__935__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__935__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__935__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__935__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__935__d)));
    __Vfunc_aes_mul_gf2p2__935__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__935__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__935__d)));
    __Vfunc_aes_mul_gf2p2__935__f = ((((IData)(__Vfunc_aes_mul_gf2p2__935__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__935__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__935__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__935__b)));
    __Vfunc_aes_mul_gf2p2__935__Vfuncout = __Vfunc_aes_mul_gf2p2__935__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__935__Vfuncout;
    __Vfunc_aes_mul_gf2p4__900__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                 >> 0x14U));
    __Vfunc_aes_mul_gf2p4__900__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__901__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__900__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__901__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__900__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__901__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__901__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__901__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__901__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__901__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__901__d)));
    __Vfunc_aes_mul_gf2p2__901__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__901__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__901__d)));
    __Vfunc_aes_mul_gf2p2__901__f = ((((IData)(__Vfunc_aes_mul_gf2p2__901__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__901__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__901__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__901__b)));
    __Vfunc_aes_mul_gf2p2__901__Vfuncout = __Vfunc_aes_mul_gf2p2__901__f;
    __Vfunc_aes_mul_gf2p4__900__a = __Vfunc_aes_mul_gf2p2__901__Vfuncout;
    __Vfunc_aes_mul_gf2p2__902__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__900__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__900__delta)));
    __Vfunc_aes_mul_gf2p2__902__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__900__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__900__gamma)));
    __Vfunc_aes_mul_gf2p2__902__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__902__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__902__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__902__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__902__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__902__d)));
    __Vfunc_aes_mul_gf2p2__902__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__902__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__902__d)));
    __Vfunc_aes_mul_gf2p2__902__f = ((((IData)(__Vfunc_aes_mul_gf2p2__902__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__902__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__902__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__902__b)));
    __Vfunc_aes_mul_gf2p2__902__Vfuncout = __Vfunc_aes_mul_gf2p2__902__f;
    __Vfunc_aes_mul_gf2p4__900__b = __Vfunc_aes_mul_gf2p2__902__Vfuncout;
    __Vfunc_aes_mul_gf2p2__903__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__900__delta));
    __Vfunc_aes_mul_gf2p2__903__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__900__gamma));
    __Vfunc_aes_mul_gf2p2__903__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__903__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__903__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__903__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__903__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__903__d)));
    __Vfunc_aes_mul_gf2p2__903__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__903__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__903__d)));
    __Vfunc_aes_mul_gf2p2__903__f = ((((IData)(__Vfunc_aes_mul_gf2p2__903__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__903__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__903__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__903__b)));
    __Vfunc_aes_mul_gf2p2__903__Vfuncout = __Vfunc_aes_mul_gf2p2__903__f;
    __Vfunc_aes_mul_gf2p4__900__c = __Vfunc_aes_mul_gf2p2__903__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__904__g = __Vfunc_aes_mul_gf2p4__900__b;
    __Vfunc_aes_scale_omega2_gf2p2__904__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__904__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__904__g)));
    __Vfunc_aes_scale_omega2_gf2p2__904__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__904__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__900__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__900__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__900__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__904__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__905__g = __Vfunc_aes_mul_gf2p4__900__b;
    __Vfunc_aes_scale_omega2_gf2p2__905__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__905__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__905__g)));
    __Vfunc_aes_scale_omega2_gf2p2__905__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__905__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__900__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__900__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__900__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__905__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__900__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__900__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__900__Vfuncout;
    __Vfunc_aes_mul_gf2p4__906__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                 >> 0x14U));
    __Vfunc_aes_mul_gf2p4__906__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__907__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__906__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__907__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__906__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__907__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__907__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__907__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__907__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__907__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__907__d)));
    __Vfunc_aes_mul_gf2p2__907__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__907__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__907__d)));
    __Vfunc_aes_mul_gf2p2__907__f = ((((IData)(__Vfunc_aes_mul_gf2p2__907__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__907__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__907__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__907__b)));
    __Vfunc_aes_mul_gf2p2__907__Vfuncout = __Vfunc_aes_mul_gf2p2__907__f;
    __Vfunc_aes_mul_gf2p4__906__a = __Vfunc_aes_mul_gf2p2__907__Vfuncout;
    __Vfunc_aes_mul_gf2p2__908__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__906__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__906__delta)));
    __Vfunc_aes_mul_gf2p2__908__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__906__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__906__gamma)));
    __Vfunc_aes_mul_gf2p2__908__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__908__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__908__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__908__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__908__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__908__d)));
    __Vfunc_aes_mul_gf2p2__908__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__908__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__908__d)));
    __Vfunc_aes_mul_gf2p2__908__f = ((((IData)(__Vfunc_aes_mul_gf2p2__908__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__908__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__908__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__908__b)));
    __Vfunc_aes_mul_gf2p2__908__Vfuncout = __Vfunc_aes_mul_gf2p2__908__f;
    __Vfunc_aes_mul_gf2p4__906__b = __Vfunc_aes_mul_gf2p2__908__Vfuncout;
    __Vfunc_aes_mul_gf2p2__909__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__906__delta));
    __Vfunc_aes_mul_gf2p2__909__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__906__gamma));
    __Vfunc_aes_mul_gf2p2__909__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__909__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__909__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__909__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__909__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__909__d)));
    __Vfunc_aes_mul_gf2p2__909__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__909__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__909__d)));
    __Vfunc_aes_mul_gf2p2__909__f = ((((IData)(__Vfunc_aes_mul_gf2p2__909__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__909__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__909__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__909__b)));
    __Vfunc_aes_mul_gf2p2__909__Vfuncout = __Vfunc_aes_mul_gf2p2__909__f;
    __Vfunc_aes_mul_gf2p4__906__c = __Vfunc_aes_mul_gf2p2__909__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__910__g = __Vfunc_aes_mul_gf2p4__906__b;
    __Vfunc_aes_scale_omega2_gf2p2__910__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__910__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__910__g)));
    __Vfunc_aes_scale_omega2_gf2p2__910__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__910__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__906__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__906__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__906__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__910__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__911__g = __Vfunc_aes_mul_gf2p4__906__b;
    __Vfunc_aes_scale_omega2_gf2p2__911__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__911__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__911__g)));
    __Vfunc_aes_scale_omega2_gf2p2__911__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__911__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__906__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__906__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__906__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__911__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__906__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__906__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__906__Vfuncout;
    __Vfunc_aes_mul_gf2p2__938__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__938__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__938__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__938__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__938__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__938__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__938__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__938__d)));
    __Vfunc_aes_mul_gf2p2__938__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__938__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__938__d)));
    __Vfunc_aes_mul_gf2p2__938__f = ((((IData)(__Vfunc_aes_mul_gf2p2__938__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__938__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__938__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__938__b)));
    __Vfunc_aes_mul_gf2p2__938__Vfuncout = __Vfunc_aes_mul_gf2p2__938__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__938__Vfuncout;
    __Vfunc_aes_mul_gf2p2__939__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__939__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i));
    __Vfunc_aes_mul_gf2p2__939__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__939__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__939__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__939__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__939__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__939__d)));
    __Vfunc_aes_mul_gf2p2__939__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__939__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__939__d)));
    __Vfunc_aes_mul_gf2p2__939__f = ((((IData)(__Vfunc_aes_mul_gf2p2__939__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__939__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__939__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__939__b)));
    __Vfunc_aes_mul_gf2p2__939__Vfuncout = __Vfunc_aes_mul_gf2p2__939__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__939__Vfuncout;
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

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__77(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__77\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__880__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__880__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__880__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__881__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__881__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__881__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__882__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__882__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__882__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__883__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__883__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__883__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__884__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__884__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__884__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__885__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__885__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__885__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__886__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__886__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__886__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__887__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__887__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__887__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__888__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__888__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__888__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__889__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__889__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__889__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__890__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__890__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__890__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__891__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__891__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__891__vec_c;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__892__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__892__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__892__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__892__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__892__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__893__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__893__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__893__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__894__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__894__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__894__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__895__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__895__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__895__d;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__896__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__896__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__896__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__896__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__896__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__897__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__897__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__897__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__898__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__898__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__898__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__899__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__899__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__899__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__912__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__912__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__912__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__912__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__912__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__912__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__913__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__913__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__913__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__913__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__913__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__913__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__913__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__914__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__914__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__914__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__914__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__914__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__914__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__914__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__915__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__915__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__915__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__915__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__915__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__915__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__915__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__916__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__916__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__916__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__917__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__917__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__917__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__918__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__918__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__918__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__918__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__918__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__918__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__919__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__919__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__919__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__919__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__919__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__919__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__919__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__920__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__920__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__920__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__920__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__920__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__920__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__920__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__921__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__921__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__921__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__921__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__921__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__921__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__921__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__922__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__922__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__922__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__923__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__923__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__923__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__924__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__924__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__924__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__925__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__925__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__925__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__926__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__926__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__926__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__927__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__927__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__927__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__932__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__932__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__932__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__932__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__932__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__932__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__932__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__933__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__933__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__933__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__933__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__933__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__933__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__933__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__936__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__936__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__936__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__936__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__936__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__936__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__936__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__937__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__937__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__937__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__937__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__937__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__937__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__937__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__940__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__940__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__940__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__940__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__940__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__940__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__940__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__941__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__941__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__941__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__941__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__941__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__941__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__941__c;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__948__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__948__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__948__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__948__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__948__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__948__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__949__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__949__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__949__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__949__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__949__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__949__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__949__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__950__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__950__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__950__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__950__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__950__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__950__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__950__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__951__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__951__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__951__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__951__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__951__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__951__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__951__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__952__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__952__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__952__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__953__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__953__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__953__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__954__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__954__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__954__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__954__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__954__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__954__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__955__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__955__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__955__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__955__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__955__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__955__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__955__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__956__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__956__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__956__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__956__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__956__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__956__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__956__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__957__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__957__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__957__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__957__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__957__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__957__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__957__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__958__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__958__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__958__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__959__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__959__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__959__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__972__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__972__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__973__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__973__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__973__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__973__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__973__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__973__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__973__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__974__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__974__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__974__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__974__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__974__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__974__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__974__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__975__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__975__d;
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
    vlSelf->__Vfunc_aes_mvm__882__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__882__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__882__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__882__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__882__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__882__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__882__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__882__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__882__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [0U][0U] 
                                            >> 0x10U));
    __Vfunc_aes_mvm__882__vec_c = 0U;
    __Vfunc_aes_mvm__882__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__882__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__882__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__882__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__882__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__882__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__882__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__882__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__882__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__882__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__882__vec_b)))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__882__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__882__vec_b)))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__882__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__882__vec_b)))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__882__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__882__vec_b)))));
    __Vfunc_aes_mvm__882__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__882__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__882__vec_b)))));
    __Vfunc_aes_mvm__882__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__882__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__882__vec_b)))));
    __Vfunc_aes_mvm__882__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__882__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__882__vec_b)))));
    __Vfunc_aes_mvm__882__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__882__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__882__vec_b)))));
    __Vfunc_aes_mvm__882__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__882__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__882__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__882__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__882__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__882__Vfuncout = __Vfunc_aes_mvm__882__vec_c;
    vlSelf->__Vfunc_aes_mvm__881__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__881__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__881__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__881__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__881__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__881__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__881__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__881__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__881__vec_b = (0xffU & (0x63U ^ 
                                            ((vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                              [0U][0U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                [0U][0U] 
                                                >> 0x10U))));
    __Vfunc_aes_mvm__881__vec_c = 0U;
    __Vfunc_aes_mvm__881__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__881__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__881__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__881__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__881__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__881__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__881__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__881__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__881__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__881__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__881__vec_b)))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__881__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__881__vec_b)))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__881__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__881__vec_b)))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__881__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__881__vec_b)))));
    __Vfunc_aes_mvm__881__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__881__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__881__vec_b)))));
    __Vfunc_aes_mvm__881__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__881__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__881__vec_b)))));
    __Vfunc_aes_mvm__881__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__881__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__881__vec_b)))));
    __Vfunc_aes_mvm__881__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__881__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__881__vec_b)))));
    __Vfunc_aes_mvm__881__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__881__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__881__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__881__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__881__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__881__Vfuncout = __Vfunc_aes_mvm__881__vec_c;
    vlSelf->__Vfunc_aes_mvm__880__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__880__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__880__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__880__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__880__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__880__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__880__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__880__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__880__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [0U][0U] 
                                            >> 0x10U));
    __Vfunc_aes_mvm__880__vec_c = 0U;
    __Vfunc_aes_mvm__880__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__880__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__880__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__880__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__880__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__880__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__880__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__880__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__880__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__880__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__880__vec_b)))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__880__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__880__vec_b)))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__880__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__880__vec_b)))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__880__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__880__vec_b)))));
    __Vfunc_aes_mvm__880__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__880__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__880__vec_b)))));
    __Vfunc_aes_mvm__880__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__880__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__880__vec_b)))));
    __Vfunc_aes_mvm__880__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__880__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__880__vec_b)))));
    __Vfunc_aes_mvm__880__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__880__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__880__vec_b)))));
    __Vfunc_aes_mvm__880__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__880__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__880__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__880__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__880__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__880__Vfuncout = __Vfunc_aes_mvm__880__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__880__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__881__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__882__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__885__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__885__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__885__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__885__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__885__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__885__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__885__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__885__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__885__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [1U][0U] 
                                            >> 0x10U));
    __Vfunc_aes_mvm__885__vec_c = 0U;
    __Vfunc_aes_mvm__885__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__885__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__885__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__885__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__885__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__885__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__885__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__885__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__885__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__885__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__885__vec_b)))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__885__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__885__vec_b)))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__885__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__885__vec_b)))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__885__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__885__vec_b)))));
    __Vfunc_aes_mvm__885__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__885__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__885__vec_b)))));
    __Vfunc_aes_mvm__885__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__885__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__885__vec_b)))));
    __Vfunc_aes_mvm__885__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__885__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__885__vec_b)))));
    __Vfunc_aes_mvm__885__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__885__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__885__vec_b)))));
    __Vfunc_aes_mvm__885__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__885__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__885__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__885__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__885__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__885__Vfuncout = __Vfunc_aes_mvm__885__vec_c;
    vlSelf->__Vfunc_aes_mvm__884__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__884__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__884__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__884__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__884__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__884__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__884__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__884__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__884__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [1U][0U] 
                                            >> 0x10U));
    __Vfunc_aes_mvm__884__vec_c = 0U;
    __Vfunc_aes_mvm__884__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__884__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__884__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__884__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__884__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__884__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__884__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__884__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__884__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__884__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__884__vec_b)))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__884__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__884__vec_b)))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__884__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__884__vec_b)))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__884__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__884__vec_b)))));
    __Vfunc_aes_mvm__884__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__884__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__884__vec_b)))));
    __Vfunc_aes_mvm__884__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__884__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__884__vec_b)))));
    __Vfunc_aes_mvm__884__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__884__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__884__vec_b)))));
    __Vfunc_aes_mvm__884__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__884__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__884__vec_b)))));
    __Vfunc_aes_mvm__884__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__884__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__884__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__884__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__884__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__884__Vfuncout = __Vfunc_aes_mvm__884__vec_c;
    vlSelf->__Vfunc_aes_mvm__883__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__883__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__883__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__883__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__883__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__883__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__883__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__883__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__883__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [1U][0U] 
                                            >> 0x10U));
    __Vfunc_aes_mvm__883__vec_c = 0U;
    __Vfunc_aes_mvm__883__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__883__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__883__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__883__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__883__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__883__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__883__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__883__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__883__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__883__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__883__vec_b)))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__883__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__883__vec_b)))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__883__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__883__vec_b)))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__883__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__883__vec_b)))));
    __Vfunc_aes_mvm__883__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__883__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__883__vec_b)))));
    __Vfunc_aes_mvm__883__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__883__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__883__vec_b)))));
    __Vfunc_aes_mvm__883__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__883__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__883__vec_b)))));
    __Vfunc_aes_mvm__883__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__883__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__883__vec_b)))));
    __Vfunc_aes_mvm__883__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__883__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__883__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__883__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__883__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__883__Vfuncout = __Vfunc_aes_mvm__883__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__883__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__884__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__885__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__892__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__892__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__892__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__892__gamma)));
    __Vfunc_aes_square_gf2p2__893__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__892__gamma));
    __Vfunc_aes_square_gf2p2__893__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__893__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__893__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__893__Vfuncout = __Vfunc_aes_square_gf2p2__893__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__892__b = __Vfunc_aes_square_gf2p2__893__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__895__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__892__b;
    __Vfunc_aes_scale_omega_gf2p2__895__d = ((2U & 
                                              (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__895__g) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(__Vfunc_aes_scale_omega_gf2p2__895__g) 
                                                   >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__895__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__895__d;
    __Vfunc_aes_square_gf2p2__894__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__892__a;
    __Vfunc_aes_square_gf2p2__894__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__894__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__894__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__894__Vfuncout = __Vfunc_aes_square_gf2p2__894__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__892__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__894__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__895__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__892__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__892__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__892__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__896__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__896__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__896__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__896__gamma)));
    __Vfunc_aes_square_gf2p2__897__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__896__gamma));
    __Vfunc_aes_square_gf2p2__897__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__897__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__897__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__897__Vfuncout = __Vfunc_aes_square_gf2p2__897__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__896__b = __Vfunc_aes_square_gf2p2__897__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__899__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__896__b;
    __Vfunc_aes_scale_omega_gf2p2__899__d = ((2U & 
                                              (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__899__g) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(__Vfunc_aes_scale_omega_gf2p2__899__g) 
                                                   >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__899__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__899__d;
    __Vfunc_aes_square_gf2p2__898__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__896__a;
    __Vfunc_aes_square_gf2p2__898__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__898__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__898__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__898__Vfuncout = __Vfunc_aes_square_gf2p2__898__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__896__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__898__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__899__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__896__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__896__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__896__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__912__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p4__912__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__913__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__912__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__913__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__912__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__913__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__913__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__913__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__913__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__913__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__913__d)));
    __Vfunc_aes_mul_gf2p2__913__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__913__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__913__d)));
    __Vfunc_aes_mul_gf2p2__913__f = ((((IData)(__Vfunc_aes_mul_gf2p2__913__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__913__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__913__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__913__b)));
    __Vfunc_aes_mul_gf2p2__913__Vfuncout = __Vfunc_aes_mul_gf2p2__913__f;
    __Vfunc_aes_mul_gf2p4__912__a = __Vfunc_aes_mul_gf2p2__913__Vfuncout;
    __Vfunc_aes_mul_gf2p2__914__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__912__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__912__delta)));
    __Vfunc_aes_mul_gf2p2__914__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__912__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__912__gamma)));
    __Vfunc_aes_mul_gf2p2__914__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__914__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__914__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__914__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__914__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__914__d)));
    __Vfunc_aes_mul_gf2p2__914__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__914__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__914__d)));
    __Vfunc_aes_mul_gf2p2__914__f = ((((IData)(__Vfunc_aes_mul_gf2p2__914__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__914__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__914__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__914__b)));
    __Vfunc_aes_mul_gf2p2__914__Vfuncout = __Vfunc_aes_mul_gf2p2__914__f;
    __Vfunc_aes_mul_gf2p4__912__b = __Vfunc_aes_mul_gf2p2__914__Vfuncout;
    __Vfunc_aes_mul_gf2p2__915__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__912__delta));
    __Vfunc_aes_mul_gf2p2__915__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__912__gamma));
    __Vfunc_aes_mul_gf2p2__915__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__915__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__915__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__915__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__915__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__915__d)));
    __Vfunc_aes_mul_gf2p2__915__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__915__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__915__d)));
    __Vfunc_aes_mul_gf2p2__915__f = ((((IData)(__Vfunc_aes_mul_gf2p2__915__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__915__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__915__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__915__b)));
    __Vfunc_aes_mul_gf2p2__915__Vfuncout = __Vfunc_aes_mul_gf2p2__915__f;
    __Vfunc_aes_mul_gf2p4__912__c = __Vfunc_aes_mul_gf2p2__915__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__916__g = __Vfunc_aes_mul_gf2p4__912__b;
    __Vfunc_aes_scale_omega2_gf2p2__916__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__916__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__916__g)));
    __Vfunc_aes_scale_omega2_gf2p2__916__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__916__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__912__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__912__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__912__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__916__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__917__g = __Vfunc_aes_mul_gf2p4__912__b;
    __Vfunc_aes_scale_omega2_gf2p2__917__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__917__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__917__g)));
    __Vfunc_aes_scale_omega2_gf2p2__917__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__917__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__912__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__912__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__912__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__917__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__912__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__912__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__912__Vfuncout;
    __Vfunc_aes_mul_gf2p4__918__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p4__918__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__919__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__918__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__919__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__918__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__919__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__919__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__919__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__919__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__919__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__919__d)));
    __Vfunc_aes_mul_gf2p2__919__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__919__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__919__d)));
    __Vfunc_aes_mul_gf2p2__919__f = ((((IData)(__Vfunc_aes_mul_gf2p2__919__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__919__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__919__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__919__b)));
    __Vfunc_aes_mul_gf2p2__919__Vfuncout = __Vfunc_aes_mul_gf2p2__919__f;
    __Vfunc_aes_mul_gf2p4__918__a = __Vfunc_aes_mul_gf2p2__919__Vfuncout;
    __Vfunc_aes_mul_gf2p2__920__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__918__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__918__delta)));
    __Vfunc_aes_mul_gf2p2__920__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__918__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__918__gamma)));
    __Vfunc_aes_mul_gf2p2__920__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__920__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__920__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__920__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__920__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__920__d)));
    __Vfunc_aes_mul_gf2p2__920__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__920__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__920__d)));
    __Vfunc_aes_mul_gf2p2__920__f = ((((IData)(__Vfunc_aes_mul_gf2p2__920__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__920__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__920__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__920__b)));
    __Vfunc_aes_mul_gf2p2__920__Vfuncout = __Vfunc_aes_mul_gf2p2__920__f;
    __Vfunc_aes_mul_gf2p4__918__b = __Vfunc_aes_mul_gf2p2__920__Vfuncout;
    __Vfunc_aes_mul_gf2p2__921__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__918__delta));
    __Vfunc_aes_mul_gf2p2__921__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__918__gamma));
    __Vfunc_aes_mul_gf2p2__921__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__921__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__921__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__921__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__921__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__921__d)));
    __Vfunc_aes_mul_gf2p2__921__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__921__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__921__d)));
    __Vfunc_aes_mul_gf2p2__921__f = ((((IData)(__Vfunc_aes_mul_gf2p2__921__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__921__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__921__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__921__b)));
    __Vfunc_aes_mul_gf2p2__921__Vfuncout = __Vfunc_aes_mul_gf2p2__921__f;
    __Vfunc_aes_mul_gf2p4__918__c = __Vfunc_aes_mul_gf2p2__921__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__922__g = __Vfunc_aes_mul_gf2p4__918__b;
    __Vfunc_aes_scale_omega2_gf2p2__922__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__922__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__922__g)));
    __Vfunc_aes_scale_omega2_gf2p2__922__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__922__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__918__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__918__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__918__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__922__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__923__g = __Vfunc_aes_mul_gf2p4__918__b;
    __Vfunc_aes_scale_omega2_gf2p2__923__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__923__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__923__g)));
    __Vfunc_aes_scale_omega2_gf2p2__923__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__923__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__918__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__918__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__918__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__923__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__918__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__918__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__918__Vfuncout;
    __Vfunc_aes_mul_gf2p2__936__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__936__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__936__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__936__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__936__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__936__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__936__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__936__d)));
    __Vfunc_aes_mul_gf2p2__936__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__936__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__936__d)));
    __Vfunc_aes_mul_gf2p2__936__f = ((((IData)(__Vfunc_aes_mul_gf2p2__936__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__936__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__936__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__936__b)));
    __Vfunc_aes_mul_gf2p2__936__Vfuncout = __Vfunc_aes_mul_gf2p2__936__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__936__Vfuncout;
    __Vfunc_aes_mul_gf2p2__937__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__937__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__937__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__937__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__937__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__937__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__937__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__937__d)));
    __Vfunc_aes_mul_gf2p2__937__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__937__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__937__d)));
    __Vfunc_aes_mul_gf2p2__937__f = ((((IData)(__Vfunc_aes_mul_gf2p2__937__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__937__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__937__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__937__b)));
    __Vfunc_aes_mul_gf2p2__937__Vfuncout = __Vfunc_aes_mul_gf2p2__937__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__937__Vfuncout;
    __Vfunc_aes_mul_gf2p2__940__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__940__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__940__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__940__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__940__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__940__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__940__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__940__d)));
    __Vfunc_aes_mul_gf2p2__940__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__940__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__940__d)));
    __Vfunc_aes_mul_gf2p2__940__f = ((((IData)(__Vfunc_aes_mul_gf2p2__940__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__940__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__940__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__940__b)));
    __Vfunc_aes_mul_gf2p2__940__Vfuncout = __Vfunc_aes_mul_gf2p2__940__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__940__Vfuncout;
    __Vfunc_aes_mul_gf2p2__941__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__941__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__941__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__941__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__941__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__941__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__941__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__941__d)));
    __Vfunc_aes_mul_gf2p2__941__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__941__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__941__d)));
    __Vfunc_aes_mul_gf2p2__941__f = ((((IData)(__Vfunc_aes_mul_gf2p2__941__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__941__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__941__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__941__b)));
    __Vfunc_aes_mul_gf2p2__941__Vfuncout = __Vfunc_aes_mul_gf2p2__941__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__941__Vfuncout;
    vlSelf->__Vfunc_aes_mvm__891__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__891__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__891__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__891__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__891__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__891__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__891__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__891__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__891__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__891__vec_c = 0U;
    __Vfunc_aes_mvm__891__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__891__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__891__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__891__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__891__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__891__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__891__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__891__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__891__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__891__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__891__vec_b)))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__891__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__891__vec_b)))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__891__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__891__vec_b)))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__891__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__891__vec_b)))));
    __Vfunc_aes_mvm__891__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__891__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__891__vec_b)))));
    __Vfunc_aes_mvm__891__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__891__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__891__vec_b)))));
    __Vfunc_aes_mvm__891__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__891__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__891__vec_b)))));
    __Vfunc_aes_mvm__891__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__891__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__891__vec_b)))));
    __Vfunc_aes_mvm__891__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__891__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__891__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__891__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__891__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__891__Vfuncout = __Vfunc_aes_mvm__891__vec_c;
    vlSelf->__Vfunc_aes_mvm__890__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__890__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__890__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__890__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__890__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__890__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__890__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__890__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__890__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__890__vec_c = 0U;
    __Vfunc_aes_mvm__890__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__890__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__890__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__890__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__890__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__890__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__890__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__890__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__890__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__890__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__890__vec_b)))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__890__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__890__vec_b)))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__890__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__890__vec_b)))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__890__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__890__vec_b)))));
    __Vfunc_aes_mvm__890__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__890__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__890__vec_b)))));
    __Vfunc_aes_mvm__890__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__890__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__890__vec_b)))));
    __Vfunc_aes_mvm__890__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__890__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__890__vec_b)))));
    __Vfunc_aes_mvm__890__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__890__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__890__vec_b)))));
    __Vfunc_aes_mvm__890__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__890__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__890__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__890__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__890__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__890__Vfuncout = __Vfunc_aes_mvm__890__vec_c;
    vlSelf->__Vfunc_aes_mvm__889__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__889__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__889__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__889__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__889__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__889__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__889__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__889__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__889__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__889__vec_c = 0U;
    __Vfunc_aes_mvm__889__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__889__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__889__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__889__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__889__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__889__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__889__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__889__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__889__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__889__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__889__vec_b)))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__889__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__889__vec_b)))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__889__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__889__vec_b)))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__889__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__889__vec_b)))));
    __Vfunc_aes_mvm__889__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__889__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__889__vec_b)))));
    __Vfunc_aes_mvm__889__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__889__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__889__vec_b)))));
    __Vfunc_aes_mvm__889__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__889__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__889__vec_b)))));
    __Vfunc_aes_mvm__889__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__889__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__889__vec_b)))));
    __Vfunc_aes_mvm__889__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__889__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__889__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__889__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__889__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__889__Vfuncout = __Vfunc_aes_mvm__889__vec_c;
    vlSelf->mask_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (IData)(__Vfunc_aes_mvm__889__Vfuncout)
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__890__Vfuncout)
                           : (IData)(__Vfunc_aes_mvm__891__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__888__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__888__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__888__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__888__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__888__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__888__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__888__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__888__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__888__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__888__vec_c = 0U;
    __Vfunc_aes_mvm__888__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__888__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__888__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__888__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__888__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__888__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__888__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__888__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__888__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__888__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__888__vec_b)))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__888__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__888__vec_b)))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__888__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__888__vec_b)))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__888__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__888__vec_b)))));
    __Vfunc_aes_mvm__888__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__888__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__888__vec_b)))));
    __Vfunc_aes_mvm__888__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__888__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__888__vec_b)))));
    __Vfunc_aes_mvm__888__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__888__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__888__vec_b)))));
    __Vfunc_aes_mvm__888__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__888__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__888__vec_b)))));
    __Vfunc_aes_mvm__888__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__888__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__888__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__888__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__888__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__888__Vfuncout = __Vfunc_aes_mvm__888__vec_c;
    vlSelf->__Vfunc_aes_mvm__887__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__887__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__887__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__887__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__887__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__887__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__887__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__887__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__887__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__887__vec_c = 0U;
    __Vfunc_aes_mvm__887__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__887__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__887__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__887__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__887__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__887__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__887__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__887__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__887__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__887__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__887__vec_b)))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__887__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__887__vec_b)))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__887__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__887__vec_b)))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__887__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__887__vec_b)))));
    __Vfunc_aes_mvm__887__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__887__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__887__vec_b)))));
    __Vfunc_aes_mvm__887__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__887__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__887__vec_b)))));
    __Vfunc_aes_mvm__887__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__887__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__887__vec_b)))));
    __Vfunc_aes_mvm__887__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__887__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__887__vec_b)))));
    __Vfunc_aes_mvm__887__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__887__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__887__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__887__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__887__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__887__Vfuncout = __Vfunc_aes_mvm__887__vec_c;
    vlSelf->__Vfunc_aes_mvm__886__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__886__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__886__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__886__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__886__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__886__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__886__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__886__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__886__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__886__vec_c = 0U;
    __Vfunc_aes_mvm__886__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__886__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__886__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__886__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__886__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__886__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__886__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__886__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__886__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__886__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__886__vec_b)))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__886__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__886__vec_b)))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__886__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__886__vec_b)))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__886__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__886__vec_b)))));
    __Vfunc_aes_mvm__886__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__886__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__886__vec_b)))));
    __Vfunc_aes_mvm__886__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__886__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__886__vec_b)))));
    __Vfunc_aes_mvm__886__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__886__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__886__vec_b)))));
    __Vfunc_aes_mvm__886__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__886__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__886__vec_b)))));
    __Vfunc_aes_mvm__886__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__886__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__886__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__886__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__886__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__886__Vfuncout = __Vfunc_aes_mvm__886__vec_c;
    vlSelf->data_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (0x63U ^ (IData)(__Vfunc_aes_mvm__886__Vfuncout))
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__887__Vfuncout)
                           : (0x63U ^ (IData)(__Vfunc_aes_mvm__888__Vfuncout))));
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
    __Vfunc_aes_mul_gf2p2__932__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__932__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__932__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__932__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__932__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__932__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__932__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__932__d)));
    __Vfunc_aes_mul_gf2p2__932__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__932__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__932__d)));
    __Vfunc_aes_mul_gf2p2__932__f = ((((IData)(__Vfunc_aes_mul_gf2p2__932__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__932__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__932__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__932__b)));
    __Vfunc_aes_mul_gf2p2__932__Vfuncout = __Vfunc_aes_mul_gf2p2__932__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__932__Vfuncout;
    __Vfunc_aes_mul_gf2p2__933__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__933__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__933__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__933__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__933__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__933__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__933__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__933__d)));
    __Vfunc_aes_mul_gf2p2__933__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__933__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__933__d)));
    __Vfunc_aes_mul_gf2p2__933__f = ((((IData)(__Vfunc_aes_mul_gf2p2__933__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__933__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__933__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__933__b)));
    __Vfunc_aes_mul_gf2p2__933__Vfuncout = __Vfunc_aes_mul_gf2p2__933__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__933__Vfuncout;
    __Vfunc_aes_square_gf2p2__925__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                               >> 6U) 
                                              ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                 >> 4U)));
    __Vfunc_aes_square_gf2p2__925__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__925__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__925__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__925__Vfuncout = __Vfunc_aes_square_gf2p2__925__d;
    __Vfunc_aes_scale_omega2_gf2p2__924__g = __Vfunc_aes_square_gf2p2__925__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__924__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__924__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__924__g)));
    __Vfunc_aes_scale_omega2_gf2p2__924__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__924__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__924__Vfuncout;
    __Vfunc_aes_square_gf2p2__927__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                               >> 2U) 
                                              ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i)));
    __Vfunc_aes_square_gf2p2__927__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__927__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__927__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__927__Vfuncout = __Vfunc_aes_square_gf2p2__927__d;
    __Vfunc_aes_scale_omega2_gf2p2__926__g = __Vfunc_aes_square_gf2p2__927__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__926__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__926__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__926__g)));
    __Vfunc_aes_scale_omega2_gf2p2__926__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__926__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__926__Vfuncout;
    __Vfunc_aes_mul_gf2p4__948__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__948__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__949__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__948__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__949__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__948__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__949__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__949__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__949__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__949__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__949__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__949__d)));
    __Vfunc_aes_mul_gf2p2__949__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__949__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__949__d)));
    __Vfunc_aes_mul_gf2p2__949__f = ((((IData)(__Vfunc_aes_mul_gf2p2__949__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__949__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__949__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__949__b)));
    __Vfunc_aes_mul_gf2p2__949__Vfuncout = __Vfunc_aes_mul_gf2p2__949__f;
    __Vfunc_aes_mul_gf2p4__948__a = __Vfunc_aes_mul_gf2p2__949__Vfuncout;
    __Vfunc_aes_mul_gf2p2__950__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__948__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__948__delta)));
    __Vfunc_aes_mul_gf2p2__950__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__948__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__948__gamma)));
    __Vfunc_aes_mul_gf2p2__950__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__950__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__950__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__950__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__950__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__950__d)));
    __Vfunc_aes_mul_gf2p2__950__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__950__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__950__d)));
    __Vfunc_aes_mul_gf2p2__950__f = ((((IData)(__Vfunc_aes_mul_gf2p2__950__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__950__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__950__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__950__b)));
    __Vfunc_aes_mul_gf2p2__950__Vfuncout = __Vfunc_aes_mul_gf2p2__950__f;
    __Vfunc_aes_mul_gf2p4__948__b = __Vfunc_aes_mul_gf2p2__950__Vfuncout;
    __Vfunc_aes_mul_gf2p2__951__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__948__delta));
    __Vfunc_aes_mul_gf2p2__951__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__948__gamma));
    __Vfunc_aes_mul_gf2p2__951__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__951__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__951__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__951__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__951__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__951__d)));
    __Vfunc_aes_mul_gf2p2__951__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__951__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__951__d)));
    __Vfunc_aes_mul_gf2p2__951__f = ((((IData)(__Vfunc_aes_mul_gf2p2__951__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__951__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__951__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__951__b)));
    __Vfunc_aes_mul_gf2p2__951__Vfuncout = __Vfunc_aes_mul_gf2p2__951__f;
    __Vfunc_aes_mul_gf2p4__948__c = __Vfunc_aes_mul_gf2p2__951__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__952__g = __Vfunc_aes_mul_gf2p4__948__b;
    __Vfunc_aes_scale_omega2_gf2p2__952__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__952__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__952__g)));
    __Vfunc_aes_scale_omega2_gf2p2__952__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__952__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__948__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__948__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__948__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__952__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__953__g = __Vfunc_aes_mul_gf2p4__948__b;
    __Vfunc_aes_scale_omega2_gf2p2__953__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__953__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__953__g)));
    __Vfunc_aes_scale_omega2_gf2p2__953__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__953__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__948__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__948__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__948__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__953__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__948__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__948__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__948__Vfuncout;
    __Vfunc_aes_mul_gf2p4__954__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__954__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__955__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__954__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__955__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__954__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__955__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__955__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__955__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__955__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__955__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__955__d)));
    __Vfunc_aes_mul_gf2p2__955__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__955__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__955__d)));
    __Vfunc_aes_mul_gf2p2__955__f = ((((IData)(__Vfunc_aes_mul_gf2p2__955__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__955__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__955__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__955__b)));
    __Vfunc_aes_mul_gf2p2__955__Vfuncout = __Vfunc_aes_mul_gf2p2__955__f;
    __Vfunc_aes_mul_gf2p4__954__a = __Vfunc_aes_mul_gf2p2__955__Vfuncout;
    __Vfunc_aes_mul_gf2p2__956__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__954__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__954__delta)));
    __Vfunc_aes_mul_gf2p2__956__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__954__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__954__gamma)));
    __Vfunc_aes_mul_gf2p2__956__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__956__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__956__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__956__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__956__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__956__d)));
    __Vfunc_aes_mul_gf2p2__956__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__956__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__956__d)));
    __Vfunc_aes_mul_gf2p2__956__f = ((((IData)(__Vfunc_aes_mul_gf2p2__956__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__956__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__956__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__956__b)));
    __Vfunc_aes_mul_gf2p2__956__Vfuncout = __Vfunc_aes_mul_gf2p2__956__f;
    __Vfunc_aes_mul_gf2p4__954__b = __Vfunc_aes_mul_gf2p2__956__Vfuncout;
    __Vfunc_aes_mul_gf2p2__957__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__954__delta));
    __Vfunc_aes_mul_gf2p2__957__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__954__gamma));
    __Vfunc_aes_mul_gf2p2__957__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__957__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__957__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__957__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__957__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__957__d)));
    __Vfunc_aes_mul_gf2p2__957__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__957__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__957__d)));
    __Vfunc_aes_mul_gf2p2__957__f = ((((IData)(__Vfunc_aes_mul_gf2p2__957__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__957__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__957__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__957__b)));
    __Vfunc_aes_mul_gf2p2__957__Vfuncout = __Vfunc_aes_mul_gf2p2__957__f;
    __Vfunc_aes_mul_gf2p4__954__c = __Vfunc_aes_mul_gf2p2__957__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__958__g = __Vfunc_aes_mul_gf2p4__954__b;
    __Vfunc_aes_scale_omega2_gf2p2__958__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__958__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__958__g)));
    __Vfunc_aes_scale_omega2_gf2p2__958__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__958__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__954__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__954__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__954__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__958__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__959__g = __Vfunc_aes_mul_gf2p4__954__b;
    __Vfunc_aes_scale_omega2_gf2p2__959__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__959__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__959__g)));
    __Vfunc_aes_scale_omega2_gf2p2__959__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__959__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__954__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__954__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__954__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__959__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__954__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__954__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__954__Vfuncout;
    __Vfunc_aes_mul_gf2p4__972__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__972__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p2__973__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__972__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__973__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__972__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__973__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__973__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__973__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__973__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__973__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__973__d)));
    __Vfunc_aes_mul_gf2p2__973__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__973__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__973__d)));
    __Vfunc_aes_mul_gf2p2__973__f = ((((IData)(__Vfunc_aes_mul_gf2p2__973__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__973__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__973__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__973__b)));
    __Vfunc_aes_mul_gf2p2__973__Vfuncout = __Vfunc_aes_mul_gf2p2__973__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__972__a = __Vfunc_aes_mul_gf2p2__973__Vfuncout;
    __Vfunc_aes_mul_gf2p2__974__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__972__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__972__delta)));
    __Vfunc_aes_mul_gf2p2__974__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__972__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__972__gamma)));
    __Vfunc_aes_mul_gf2p2__974__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__974__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__974__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__974__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__974__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__974__d)));
    __Vfunc_aes_mul_gf2p2__974__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__974__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__974__d)));
    __Vfunc_aes_mul_gf2p2__974__f = ((((IData)(__Vfunc_aes_mul_gf2p2__974__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__974__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__974__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__974__b)));
    __Vfunc_aes_mul_gf2p2__974__Vfuncout = __Vfunc_aes_mul_gf2p2__974__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__972__b = __Vfunc_aes_mul_gf2p2__974__Vfuncout;
    __Vfunc_aes_mul_gf2p2__975__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__972__delta));
    __Vfunc_aes_mul_gf2p2__975__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__972__gamma));
    vlSelf->__Vfunc_aes_mul_gf2p2__975__a = (1U & (
                                                   ((IData)(__Vfunc_aes_mul_gf2p2__975__g) 
                                                    & (IData)(__Vfunc_aes_mul_gf2p2__975__d)) 
                                                   >> 1U));
    vlSelf->__Vfunc_aes_mul_gf2p2__975__b = (1U & (
                                                   VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__975__g) 
                                                   & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__975__d)));
    vlSelf->__Vfunc_aes_mul_gf2p2__975__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__975__g) 
                                                   & (IData)(__Vfunc_aes_mul_gf2p2__975__d)));
}
