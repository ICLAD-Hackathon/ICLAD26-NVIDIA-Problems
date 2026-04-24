// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__43(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__43\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__240__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__240__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__240__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__240__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__240__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__240__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__241__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__241__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__241__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__241__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__241__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__241__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__241__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__242__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__242__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__242__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__242__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__242__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__242__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__242__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__243__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__243__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__243__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__243__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__243__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__243__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__243__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__244__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__244__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__244__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__245__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__245__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__245__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__246__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__246__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__246__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__246__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__246__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__246__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__247__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__247__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__247__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__247__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__247__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__247__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__247__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__248__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__248__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__248__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__248__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__248__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__248__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__248__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__249__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__249__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__249__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__249__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__249__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__249__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__249__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__250__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__250__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__250__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__251__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__251__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__251__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__270__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__270__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__270__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__270__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__270__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__270__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__270__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__271__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__271__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__271__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__271__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__271__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__271__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__271__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__274__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__274__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__274__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__274__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__274__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__274__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__274__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__275__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__275__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__275__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__275__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__275__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__275__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__275__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__278__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__278__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__278__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__278__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__278__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__278__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__278__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__279__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__279__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__279__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__279__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__279__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__279__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__279__c;
    // Body
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
        = ((0xff00000U & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[7U] 
                          << 0x14U)) | ((0xf0000U & 
                                         (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[7U] 
                                          << 8U)) | 
                                        ((0xff00U & 
                                          (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[7U] 
                                           >> 4U)) 
                                         | (0xffU & 
                                            (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[7U] 
                                             >> 0x14U)))));
    __Vfunc_aes_mul_gf2p2__270__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0x10U));
    __Vfunc_aes_mul_gf2p2__270__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__270__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__270__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__270__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__270__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__270__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__270__d)));
    __Vfunc_aes_mul_gf2p2__270__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__270__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__270__d)));
    __Vfunc_aes_mul_gf2p2__270__f = ((((IData)(__Vfunc_aes_mul_gf2p2__270__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__270__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__270__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__270__b)));
    __Vfunc_aes_mul_gf2p2__270__Vfuncout = __Vfunc_aes_mul_gf2p2__270__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__270__Vfuncout;
    __Vfunc_aes_mul_gf2p2__271__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0x10U));
    __Vfunc_aes_mul_gf2p2__271__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__271__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__271__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__271__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__271__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__271__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__271__d)));
    __Vfunc_aes_mul_gf2p2__271__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__271__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__271__d)));
    __Vfunc_aes_mul_gf2p2__271__f = ((((IData)(__Vfunc_aes_mul_gf2p2__271__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__271__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__271__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__271__b)));
    __Vfunc_aes_mul_gf2p2__271__Vfuncout = __Vfunc_aes_mul_gf2p2__271__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__271__Vfuncout;
    __Vfunc_aes_mul_gf2p2__274__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0xcU));
    __Vfunc_aes_mul_gf2p2__274__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__274__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__274__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__274__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__274__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__274__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__274__d)));
    __Vfunc_aes_mul_gf2p2__274__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__274__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__274__d)));
    __Vfunc_aes_mul_gf2p2__274__f = ((((IData)(__Vfunc_aes_mul_gf2p2__274__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__274__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__274__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__274__b)));
    __Vfunc_aes_mul_gf2p2__274__Vfuncout = __Vfunc_aes_mul_gf2p2__274__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__274__Vfuncout;
    __Vfunc_aes_mul_gf2p2__275__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0xcU));
    __Vfunc_aes_mul_gf2p2__275__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__275__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__275__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__275__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__275__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__275__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__275__d)));
    __Vfunc_aes_mul_gf2p2__275__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__275__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__275__d)));
    __Vfunc_aes_mul_gf2p2__275__f = ((((IData)(__Vfunc_aes_mul_gf2p2__275__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__275__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__275__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__275__b)));
    __Vfunc_aes_mul_gf2p2__275__Vfuncout = __Vfunc_aes_mul_gf2p2__275__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__275__Vfuncout;
    __Vfunc_aes_mul_gf2p4__240__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                 >> 0x14U));
    __Vfunc_aes_mul_gf2p4__240__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__241__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__240__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__241__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__240__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__241__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__241__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__241__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__241__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__241__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__241__d)));
    __Vfunc_aes_mul_gf2p2__241__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__241__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__241__d)));
    __Vfunc_aes_mul_gf2p2__241__f = ((((IData)(__Vfunc_aes_mul_gf2p2__241__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__241__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__241__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__241__b)));
    __Vfunc_aes_mul_gf2p2__241__Vfuncout = __Vfunc_aes_mul_gf2p2__241__f;
    __Vfunc_aes_mul_gf2p4__240__a = __Vfunc_aes_mul_gf2p2__241__Vfuncout;
    __Vfunc_aes_mul_gf2p2__242__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__240__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__240__delta)));
    __Vfunc_aes_mul_gf2p2__242__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__240__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__240__gamma)));
    __Vfunc_aes_mul_gf2p2__242__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__242__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__242__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__242__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__242__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__242__d)));
    __Vfunc_aes_mul_gf2p2__242__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__242__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__242__d)));
    __Vfunc_aes_mul_gf2p2__242__f = ((((IData)(__Vfunc_aes_mul_gf2p2__242__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__242__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__242__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__242__b)));
    __Vfunc_aes_mul_gf2p2__242__Vfuncout = __Vfunc_aes_mul_gf2p2__242__f;
    __Vfunc_aes_mul_gf2p4__240__b = __Vfunc_aes_mul_gf2p2__242__Vfuncout;
    __Vfunc_aes_mul_gf2p2__243__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__240__delta));
    __Vfunc_aes_mul_gf2p2__243__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__240__gamma));
    __Vfunc_aes_mul_gf2p2__243__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__243__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__243__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__243__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__243__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__243__d)));
    __Vfunc_aes_mul_gf2p2__243__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__243__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__243__d)));
    __Vfunc_aes_mul_gf2p2__243__f = ((((IData)(__Vfunc_aes_mul_gf2p2__243__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__243__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__243__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__243__b)));
    __Vfunc_aes_mul_gf2p2__243__Vfuncout = __Vfunc_aes_mul_gf2p2__243__f;
    __Vfunc_aes_mul_gf2p4__240__c = __Vfunc_aes_mul_gf2p2__243__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__244__g = __Vfunc_aes_mul_gf2p4__240__b;
    __Vfunc_aes_scale_omega2_gf2p2__244__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__244__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__244__g)));
    __Vfunc_aes_scale_omega2_gf2p2__244__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__244__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__240__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__240__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__240__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__244__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__245__g = __Vfunc_aes_mul_gf2p4__240__b;
    __Vfunc_aes_scale_omega2_gf2p2__245__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__245__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__245__g)));
    __Vfunc_aes_scale_omega2_gf2p2__245__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__245__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__240__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__240__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__240__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__245__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__240__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__240__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__240__Vfuncout;
    __Vfunc_aes_mul_gf2p4__246__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                 >> 0x14U));
    __Vfunc_aes_mul_gf2p4__246__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__247__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__246__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__247__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__246__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__247__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__247__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__247__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__247__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__247__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__247__d)));
    __Vfunc_aes_mul_gf2p2__247__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__247__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__247__d)));
    __Vfunc_aes_mul_gf2p2__247__f = ((((IData)(__Vfunc_aes_mul_gf2p2__247__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__247__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__247__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__247__b)));
    __Vfunc_aes_mul_gf2p2__247__Vfuncout = __Vfunc_aes_mul_gf2p2__247__f;
    __Vfunc_aes_mul_gf2p4__246__a = __Vfunc_aes_mul_gf2p2__247__Vfuncout;
    __Vfunc_aes_mul_gf2p2__248__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__246__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__246__delta)));
    __Vfunc_aes_mul_gf2p2__248__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__246__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__246__gamma)));
    __Vfunc_aes_mul_gf2p2__248__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__248__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__248__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__248__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__248__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__248__d)));
    __Vfunc_aes_mul_gf2p2__248__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__248__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__248__d)));
    __Vfunc_aes_mul_gf2p2__248__f = ((((IData)(__Vfunc_aes_mul_gf2p2__248__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__248__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__248__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__248__b)));
    __Vfunc_aes_mul_gf2p2__248__Vfuncout = __Vfunc_aes_mul_gf2p2__248__f;
    __Vfunc_aes_mul_gf2p4__246__b = __Vfunc_aes_mul_gf2p2__248__Vfuncout;
    __Vfunc_aes_mul_gf2p2__249__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__246__delta));
    __Vfunc_aes_mul_gf2p2__249__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__246__gamma));
    __Vfunc_aes_mul_gf2p2__249__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__249__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__249__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__249__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__249__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__249__d)));
    __Vfunc_aes_mul_gf2p2__249__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__249__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__249__d)));
    __Vfunc_aes_mul_gf2p2__249__f = ((((IData)(__Vfunc_aes_mul_gf2p2__249__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__249__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__249__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__249__b)));
    __Vfunc_aes_mul_gf2p2__249__Vfuncout = __Vfunc_aes_mul_gf2p2__249__f;
    __Vfunc_aes_mul_gf2p4__246__c = __Vfunc_aes_mul_gf2p2__249__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__250__g = __Vfunc_aes_mul_gf2p4__246__b;
    __Vfunc_aes_scale_omega2_gf2p2__250__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__250__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__250__g)));
    __Vfunc_aes_scale_omega2_gf2p2__250__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__250__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__246__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__246__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__246__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__250__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__251__g = __Vfunc_aes_mul_gf2p4__246__b;
    __Vfunc_aes_scale_omega2_gf2p2__251__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__251__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__251__g)));
    __Vfunc_aes_scale_omega2_gf2p2__251__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__251__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__246__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__246__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__246__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__251__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__246__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__246__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__246__Vfuncout;
    __Vfunc_aes_mul_gf2p2__278__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__278__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__278__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__278__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__278__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__278__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__278__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__278__d)));
    __Vfunc_aes_mul_gf2p2__278__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__278__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__278__d)));
    __Vfunc_aes_mul_gf2p2__278__f = ((((IData)(__Vfunc_aes_mul_gf2p2__278__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__278__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__278__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__278__b)));
    __Vfunc_aes_mul_gf2p2__278__Vfuncout = __Vfunc_aes_mul_gf2p2__278__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__278__Vfuncout;
    __Vfunc_aes_mul_gf2p2__279__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__279__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i));
    __Vfunc_aes_mul_gf2p2__279__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__279__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__279__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__279__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__279__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__279__d)));
    __Vfunc_aes_mul_gf2p2__279__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__279__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__279__d)));
    __Vfunc_aes_mul_gf2p2__279__f = ((((IData)(__Vfunc_aes_mul_gf2p2__279__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__279__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__279__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__279__b)));
    __Vfunc_aes_mul_gf2p2__279__Vfuncout = __Vfunc_aes_mul_gf2p2__279__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__279__Vfuncout;
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

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__65(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__65\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__220__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__220__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__220__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__221__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__221__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__221__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__222__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__222__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__222__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__223__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__223__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__223__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__224__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__224__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__224__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__225__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__225__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__225__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__226__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__226__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__226__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__227__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__227__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__227__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__228__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__228__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__228__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__229__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__229__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__229__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__230__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__230__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__230__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__231__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__231__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__231__vec_c;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__232__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__232__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__232__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__232__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__232__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__233__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__233__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__233__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__234__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__234__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__234__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__235__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__235__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__235__d;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__236__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__236__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__236__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__236__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__236__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__237__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__237__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__237__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__238__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__238__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__238__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__239__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__239__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__239__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__252__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__252__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__252__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__252__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__252__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__252__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__253__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__253__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__253__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__253__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__253__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__253__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__253__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__254__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__254__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__254__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__254__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__254__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__254__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__254__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__255__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__255__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__255__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__255__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__255__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__255__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__255__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__256__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__256__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__256__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__257__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__257__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__257__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__258__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__258__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__258__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__258__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__258__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__258__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__259__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__259__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__259__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__259__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__259__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__259__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__259__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__260__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__260__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__260__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__260__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__260__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__260__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__260__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__261__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__261__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__261__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__261__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__261__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__261__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__261__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__262__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__262__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__262__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__263__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__263__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__263__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__264__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__264__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__264__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__265__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__265__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__265__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__266__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__266__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__266__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__267__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__267__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__267__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__272__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__272__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__272__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__272__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__272__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__272__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__272__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__273__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__273__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__273__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__273__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__273__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__273__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__273__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__276__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__276__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__276__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__276__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__276__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__276__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__276__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__277__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__277__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__277__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__277__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__277__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__277__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__277__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__280__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__280__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__280__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__280__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__280__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__280__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__280__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__281__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__281__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__281__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__281__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__281__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__281__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__281__c;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__288__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__288__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__288__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__288__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__288__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__288__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__289__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__289__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__289__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__289__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__289__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__289__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__289__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__290__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__290__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__290__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__290__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__290__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__290__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__290__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__291__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__291__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__291__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__291__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__291__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__291__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__291__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__292__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__292__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__292__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__293__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__293__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__293__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__294__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__294__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__294__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__294__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__294__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__294__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__295__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__295__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__295__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__295__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__295__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__295__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__295__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__296__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__296__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__296__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__296__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__296__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__296__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__296__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__297__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__297__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__297__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__297__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__297__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__297__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__297__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__298__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__298__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__298__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__299__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__299__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__299__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__312__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__312__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__313__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__313__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__313__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__313__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__313__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__313__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__313__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__314__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__314__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__314__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__314__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__314__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__314__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__314__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__315__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__315__d;
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
    vlSelf->__Vfunc_aes_mvm__222__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__222__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__222__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__222__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__222__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__222__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__222__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__222__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__222__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                   [0U][2U]);
    __Vfunc_aes_mvm__222__vec_c = 0U;
    __Vfunc_aes_mvm__222__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__222__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__222__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__222__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__222__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__222__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__222__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__222__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__222__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__222__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__222__vec_b)))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__222__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__222__vec_b)))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__222__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__222__vec_b)))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__222__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__222__vec_b)))));
    __Vfunc_aes_mvm__222__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__222__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__222__vec_b)))));
    __Vfunc_aes_mvm__222__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__222__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__222__vec_b)))));
    __Vfunc_aes_mvm__222__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__222__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__222__vec_b)))));
    __Vfunc_aes_mvm__222__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__222__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__222__vec_b)))));
    __Vfunc_aes_mvm__222__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__222__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__222__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__222__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__222__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__222__Vfuncout = __Vfunc_aes_mvm__222__vec_c;
    vlSelf->__Vfunc_aes_mvm__221__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__221__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__221__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__221__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__221__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__221__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__221__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__221__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__221__vec_b = (0xffU & (0x63U ^ 
                                            vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [0U][2U]));
    __Vfunc_aes_mvm__221__vec_c = 0U;
    __Vfunc_aes_mvm__221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__221__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__221__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__221__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__221__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__221__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__221__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__221__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__221__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__221__vec_b)))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__221__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__221__vec_b)))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__221__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__221__vec_b)))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__221__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__221__vec_b)))));
    __Vfunc_aes_mvm__221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__221__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__221__vec_b)))));
    __Vfunc_aes_mvm__221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__221__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__221__vec_b)))));
    __Vfunc_aes_mvm__221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__221__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__221__vec_b)))));
    __Vfunc_aes_mvm__221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__221__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__221__vec_b)))));
    __Vfunc_aes_mvm__221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__221__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__221__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__221__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__221__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__221__Vfuncout = __Vfunc_aes_mvm__221__vec_c;
    vlSelf->__Vfunc_aes_mvm__220__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__220__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__220__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__220__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__220__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__220__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__220__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__220__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__220__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                   [0U][2U]);
    __Vfunc_aes_mvm__220__vec_c = 0U;
    __Vfunc_aes_mvm__220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__220__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__220__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__220__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__220__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__220__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__220__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__220__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__220__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__220__vec_b)))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__220__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__220__vec_b)))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__220__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__220__vec_b)))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__220__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__220__vec_b)))));
    __Vfunc_aes_mvm__220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__220__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__220__vec_b)))));
    __Vfunc_aes_mvm__220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__220__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__220__vec_b)))));
    __Vfunc_aes_mvm__220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__220__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__220__vec_b)))));
    __Vfunc_aes_mvm__220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__220__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__220__vec_b)))));
    __Vfunc_aes_mvm__220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__220__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__220__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__220__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__220__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__220__Vfuncout = __Vfunc_aes_mvm__220__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__220__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__221__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__222__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__225__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__225__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__225__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__225__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__225__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__225__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__225__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__225__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__225__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                   [1U][2U]);
    __Vfunc_aes_mvm__225__vec_c = 0U;
    __Vfunc_aes_mvm__225__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__225__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__225__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__225__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__225__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__225__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__225__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__225__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__225__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__225__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__225__vec_b)))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__225__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__225__vec_b)))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__225__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__225__vec_b)))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__225__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__225__vec_b)))));
    __Vfunc_aes_mvm__225__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__225__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__225__vec_b)))));
    __Vfunc_aes_mvm__225__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__225__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__225__vec_b)))));
    __Vfunc_aes_mvm__225__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__225__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__225__vec_b)))));
    __Vfunc_aes_mvm__225__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__225__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__225__vec_b)))));
    __Vfunc_aes_mvm__225__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__225__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__225__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__225__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__225__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__225__Vfuncout = __Vfunc_aes_mvm__225__vec_c;
    vlSelf->__Vfunc_aes_mvm__224__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__224__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__224__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__224__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__224__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__224__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__224__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__224__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__224__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                   [1U][2U]);
    __Vfunc_aes_mvm__224__vec_c = 0U;
    __Vfunc_aes_mvm__224__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__224__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__224__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__224__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__224__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__224__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__224__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__224__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__224__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__224__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__224__vec_b)))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__224__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__224__vec_b)))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__224__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__224__vec_b)))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__224__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__224__vec_b)))));
    __Vfunc_aes_mvm__224__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__224__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__224__vec_b)))));
    __Vfunc_aes_mvm__224__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__224__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__224__vec_b)))));
    __Vfunc_aes_mvm__224__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__224__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__224__vec_b)))));
    __Vfunc_aes_mvm__224__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__224__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__224__vec_b)))));
    __Vfunc_aes_mvm__224__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__224__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__224__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__224__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__224__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__224__Vfuncout = __Vfunc_aes_mvm__224__vec_c;
    vlSelf->__Vfunc_aes_mvm__223__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__223__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__223__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__223__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__223__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__223__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__223__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__223__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__223__vec_b = (0xffU & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                   [1U][2U]);
    __Vfunc_aes_mvm__223__vec_c = 0U;
    __Vfunc_aes_mvm__223__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__223__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__223__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__223__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__223__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__223__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__223__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__223__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__223__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__223__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__223__vec_b)))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__223__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__223__vec_b)))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__223__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__223__vec_b)))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__223__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__223__vec_b)))));
    __Vfunc_aes_mvm__223__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__223__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__223__vec_b)))));
    __Vfunc_aes_mvm__223__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__223__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__223__vec_b)))));
    __Vfunc_aes_mvm__223__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__223__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__223__vec_b)))));
    __Vfunc_aes_mvm__223__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__223__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__223__vec_b)))));
    __Vfunc_aes_mvm__223__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__223__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__223__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__223__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__223__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__223__Vfuncout = __Vfunc_aes_mvm__223__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__223__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__224__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__225__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__232__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__232__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__232__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__232__gamma)));
    __Vfunc_aes_square_gf2p2__233__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__232__gamma));
    __Vfunc_aes_square_gf2p2__233__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__233__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__233__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__233__Vfuncout = __Vfunc_aes_square_gf2p2__233__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__232__b = __Vfunc_aes_square_gf2p2__233__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__235__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__232__b;
    __Vfunc_aes_scale_omega_gf2p2__235__d = ((2U & 
                                              (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__235__g) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(__Vfunc_aes_scale_omega_gf2p2__235__g) 
                                                   >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__235__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__235__d;
    __Vfunc_aes_square_gf2p2__234__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__232__a;
    __Vfunc_aes_square_gf2p2__234__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__234__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__234__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__234__Vfuncout = __Vfunc_aes_square_gf2p2__234__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__232__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__234__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__235__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__232__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__232__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__232__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__236__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__236__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__236__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__236__gamma)));
    __Vfunc_aes_square_gf2p2__237__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__236__gamma));
    __Vfunc_aes_square_gf2p2__237__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__237__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__237__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__237__Vfuncout = __Vfunc_aes_square_gf2p2__237__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__236__b = __Vfunc_aes_square_gf2p2__237__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__239__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__236__b;
    __Vfunc_aes_scale_omega_gf2p2__239__d = ((2U & 
                                              (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__239__g) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(__Vfunc_aes_scale_omega_gf2p2__239__g) 
                                                   >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__239__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__239__d;
    __Vfunc_aes_square_gf2p2__238__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__236__a;
    __Vfunc_aes_square_gf2p2__238__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__238__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__238__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__238__Vfuncout = __Vfunc_aes_square_gf2p2__238__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__236__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__238__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__239__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__236__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__236__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__236__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__252__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p4__252__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__253__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__252__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__253__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__252__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__253__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__253__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__253__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__253__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__253__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__253__d)));
    __Vfunc_aes_mul_gf2p2__253__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__253__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__253__d)));
    __Vfunc_aes_mul_gf2p2__253__f = ((((IData)(__Vfunc_aes_mul_gf2p2__253__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__253__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__253__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__253__b)));
    __Vfunc_aes_mul_gf2p2__253__Vfuncout = __Vfunc_aes_mul_gf2p2__253__f;
    __Vfunc_aes_mul_gf2p4__252__a = __Vfunc_aes_mul_gf2p2__253__Vfuncout;
    __Vfunc_aes_mul_gf2p2__254__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__252__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__252__delta)));
    __Vfunc_aes_mul_gf2p2__254__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__252__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__252__gamma)));
    __Vfunc_aes_mul_gf2p2__254__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__254__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__254__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__254__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__254__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__254__d)));
    __Vfunc_aes_mul_gf2p2__254__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__254__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__254__d)));
    __Vfunc_aes_mul_gf2p2__254__f = ((((IData)(__Vfunc_aes_mul_gf2p2__254__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__254__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__254__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__254__b)));
    __Vfunc_aes_mul_gf2p2__254__Vfuncout = __Vfunc_aes_mul_gf2p2__254__f;
    __Vfunc_aes_mul_gf2p4__252__b = __Vfunc_aes_mul_gf2p2__254__Vfuncout;
    __Vfunc_aes_mul_gf2p2__255__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__252__delta));
    __Vfunc_aes_mul_gf2p2__255__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__252__gamma));
    __Vfunc_aes_mul_gf2p2__255__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__255__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__255__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__255__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__255__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__255__d)));
    __Vfunc_aes_mul_gf2p2__255__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__255__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__255__d)));
    __Vfunc_aes_mul_gf2p2__255__f = ((((IData)(__Vfunc_aes_mul_gf2p2__255__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__255__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__255__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__255__b)));
    __Vfunc_aes_mul_gf2p2__255__Vfuncout = __Vfunc_aes_mul_gf2p2__255__f;
    __Vfunc_aes_mul_gf2p4__252__c = __Vfunc_aes_mul_gf2p2__255__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__256__g = __Vfunc_aes_mul_gf2p4__252__b;
    __Vfunc_aes_scale_omega2_gf2p2__256__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__256__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__256__g)));
    __Vfunc_aes_scale_omega2_gf2p2__256__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__256__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__252__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__252__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__252__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__256__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__257__g = __Vfunc_aes_mul_gf2p4__252__b;
    __Vfunc_aes_scale_omega2_gf2p2__257__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__257__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__257__g)));
    __Vfunc_aes_scale_omega2_gf2p2__257__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__257__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__252__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__252__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__252__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__257__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__252__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__252__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__252__Vfuncout;
    __Vfunc_aes_mul_gf2p4__258__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p4__258__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__259__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__258__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__259__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__258__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__259__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__259__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__259__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__259__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__259__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__259__d)));
    __Vfunc_aes_mul_gf2p2__259__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__259__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__259__d)));
    __Vfunc_aes_mul_gf2p2__259__f = ((((IData)(__Vfunc_aes_mul_gf2p2__259__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__259__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__259__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__259__b)));
    __Vfunc_aes_mul_gf2p2__259__Vfuncout = __Vfunc_aes_mul_gf2p2__259__f;
    __Vfunc_aes_mul_gf2p4__258__a = __Vfunc_aes_mul_gf2p2__259__Vfuncout;
    __Vfunc_aes_mul_gf2p2__260__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__258__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__258__delta)));
    __Vfunc_aes_mul_gf2p2__260__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__258__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__258__gamma)));
    __Vfunc_aes_mul_gf2p2__260__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__260__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__260__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__260__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__260__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__260__d)));
    __Vfunc_aes_mul_gf2p2__260__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__260__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__260__d)));
    __Vfunc_aes_mul_gf2p2__260__f = ((((IData)(__Vfunc_aes_mul_gf2p2__260__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__260__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__260__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__260__b)));
    __Vfunc_aes_mul_gf2p2__260__Vfuncout = __Vfunc_aes_mul_gf2p2__260__f;
    __Vfunc_aes_mul_gf2p4__258__b = __Vfunc_aes_mul_gf2p2__260__Vfuncout;
    __Vfunc_aes_mul_gf2p2__261__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__258__delta));
    __Vfunc_aes_mul_gf2p2__261__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__258__gamma));
    __Vfunc_aes_mul_gf2p2__261__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__261__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__261__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__261__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__261__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__261__d)));
    __Vfunc_aes_mul_gf2p2__261__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__261__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__261__d)));
    __Vfunc_aes_mul_gf2p2__261__f = ((((IData)(__Vfunc_aes_mul_gf2p2__261__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__261__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__261__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__261__b)));
    __Vfunc_aes_mul_gf2p2__261__Vfuncout = __Vfunc_aes_mul_gf2p2__261__f;
    __Vfunc_aes_mul_gf2p4__258__c = __Vfunc_aes_mul_gf2p2__261__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__262__g = __Vfunc_aes_mul_gf2p4__258__b;
    __Vfunc_aes_scale_omega2_gf2p2__262__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__262__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__262__g)));
    __Vfunc_aes_scale_omega2_gf2p2__262__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__262__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__258__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__258__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__258__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__262__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__263__g = __Vfunc_aes_mul_gf2p4__258__b;
    __Vfunc_aes_scale_omega2_gf2p2__263__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__263__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__263__g)));
    __Vfunc_aes_scale_omega2_gf2p2__263__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__263__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__258__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__258__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__258__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__263__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__258__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__258__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__258__Vfuncout;
    __Vfunc_aes_mul_gf2p2__276__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__276__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__276__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__276__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__276__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__276__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__276__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__276__d)));
    __Vfunc_aes_mul_gf2p2__276__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__276__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__276__d)));
    __Vfunc_aes_mul_gf2p2__276__f = ((((IData)(__Vfunc_aes_mul_gf2p2__276__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__276__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__276__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__276__b)));
    __Vfunc_aes_mul_gf2p2__276__Vfuncout = __Vfunc_aes_mul_gf2p2__276__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__276__Vfuncout;
    __Vfunc_aes_mul_gf2p2__277__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__277__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__277__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__277__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__277__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__277__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__277__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__277__d)));
    __Vfunc_aes_mul_gf2p2__277__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__277__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__277__d)));
    __Vfunc_aes_mul_gf2p2__277__f = ((((IData)(__Vfunc_aes_mul_gf2p2__277__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__277__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__277__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__277__b)));
    __Vfunc_aes_mul_gf2p2__277__Vfuncout = __Vfunc_aes_mul_gf2p2__277__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__277__Vfuncout;
    __Vfunc_aes_mul_gf2p2__280__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__280__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__280__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__280__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__280__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__280__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__280__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__280__d)));
    __Vfunc_aes_mul_gf2p2__280__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__280__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__280__d)));
    __Vfunc_aes_mul_gf2p2__280__f = ((((IData)(__Vfunc_aes_mul_gf2p2__280__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__280__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__280__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__280__b)));
    __Vfunc_aes_mul_gf2p2__280__Vfuncout = __Vfunc_aes_mul_gf2p2__280__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__280__Vfuncout;
    __Vfunc_aes_mul_gf2p2__281__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__281__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__281__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__281__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__281__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__281__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__281__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__281__d)));
    __Vfunc_aes_mul_gf2p2__281__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__281__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__281__d)));
    __Vfunc_aes_mul_gf2p2__281__f = ((((IData)(__Vfunc_aes_mul_gf2p2__281__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__281__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__281__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__281__b)));
    __Vfunc_aes_mul_gf2p2__281__Vfuncout = __Vfunc_aes_mul_gf2p2__281__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__281__Vfuncout;
    vlSelf->__Vfunc_aes_mvm__231__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__231__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__231__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__231__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__231__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__231__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__231__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__231__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__231__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__231__vec_c = 0U;
    __Vfunc_aes_mvm__231__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__231__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__231__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__231__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__231__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__231__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__231__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__231__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__231__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__231__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__231__vec_b)))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__231__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__231__vec_b)))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__231__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__231__vec_b)))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__231__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__231__vec_b)))));
    __Vfunc_aes_mvm__231__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__231__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__231__vec_b)))));
    __Vfunc_aes_mvm__231__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__231__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__231__vec_b)))));
    __Vfunc_aes_mvm__231__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__231__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__231__vec_b)))));
    __Vfunc_aes_mvm__231__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__231__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__231__vec_b)))));
    __Vfunc_aes_mvm__231__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__231__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__231__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__231__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__231__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__231__Vfuncout = __Vfunc_aes_mvm__231__vec_c;
    vlSelf->__Vfunc_aes_mvm__230__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__230__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__230__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__230__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__230__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__230__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__230__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__230__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__230__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__230__vec_c = 0U;
    __Vfunc_aes_mvm__230__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__230__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__230__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__230__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__230__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__230__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__230__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__230__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__230__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__230__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__230__vec_b)))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__230__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__230__vec_b)))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__230__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__230__vec_b)))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__230__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__230__vec_b)))));
    __Vfunc_aes_mvm__230__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__230__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__230__vec_b)))));
    __Vfunc_aes_mvm__230__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__230__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__230__vec_b)))));
    __Vfunc_aes_mvm__230__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__230__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__230__vec_b)))));
    __Vfunc_aes_mvm__230__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__230__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__230__vec_b)))));
    __Vfunc_aes_mvm__230__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__230__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__230__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__230__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__230__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__230__Vfuncout = __Vfunc_aes_mvm__230__vec_c;
    vlSelf->__Vfunc_aes_mvm__229__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__229__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__229__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__229__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__229__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__229__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__229__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__229__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__229__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__229__vec_c = 0U;
    __Vfunc_aes_mvm__229__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__229__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__229__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__229__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__229__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__229__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__229__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__229__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__229__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__229__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__229__vec_b)))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__229__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__229__vec_b)))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__229__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__229__vec_b)))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__229__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__229__vec_b)))));
    __Vfunc_aes_mvm__229__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__229__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__229__vec_b)))));
    __Vfunc_aes_mvm__229__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__229__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__229__vec_b)))));
    __Vfunc_aes_mvm__229__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__229__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__229__vec_b)))));
    __Vfunc_aes_mvm__229__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__229__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__229__vec_b)))));
    __Vfunc_aes_mvm__229__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__229__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__229__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__229__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__229__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__229__Vfuncout = __Vfunc_aes_mvm__229__vec_c;
    vlSelf->mask_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (IData)(__Vfunc_aes_mvm__229__Vfuncout)
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__230__Vfuncout)
                           : (IData)(__Vfunc_aes_mvm__231__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__228__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__228__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__228__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__228__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__228__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__228__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__228__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__228__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__228__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__228__vec_c = 0U;
    __Vfunc_aes_mvm__228__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__228__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__228__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__228__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__228__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__228__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__228__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__228__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__228__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__228__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__228__vec_b)))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__228__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__228__vec_b)))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__228__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__228__vec_b)))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__228__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__228__vec_b)))));
    __Vfunc_aes_mvm__228__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__228__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__228__vec_b)))));
    __Vfunc_aes_mvm__228__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__228__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__228__vec_b)))));
    __Vfunc_aes_mvm__228__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__228__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__228__vec_b)))));
    __Vfunc_aes_mvm__228__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__228__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__228__vec_b)))));
    __Vfunc_aes_mvm__228__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__228__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__228__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__228__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__228__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__228__Vfuncout = __Vfunc_aes_mvm__228__vec_c;
    vlSelf->__Vfunc_aes_mvm__227__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__227__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__227__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__227__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__227__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__227__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__227__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__227__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__227__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__227__vec_c = 0U;
    __Vfunc_aes_mvm__227__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__227__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__227__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__227__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__227__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__227__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__227__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__227__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__227__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__227__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__227__vec_b)))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__227__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__227__vec_b)))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__227__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__227__vec_b)))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__227__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__227__vec_b)))));
    __Vfunc_aes_mvm__227__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__227__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__227__vec_b)))));
    __Vfunc_aes_mvm__227__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__227__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__227__vec_b)))));
    __Vfunc_aes_mvm__227__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__227__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__227__vec_b)))));
    __Vfunc_aes_mvm__227__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__227__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__227__vec_b)))));
    __Vfunc_aes_mvm__227__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__227__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__227__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__227__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__227__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__227__Vfuncout = __Vfunc_aes_mvm__227__vec_c;
    vlSelf->__Vfunc_aes_mvm__226__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__226__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__226__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__226__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__226__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__226__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__226__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__226__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__226__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__226__vec_c = 0U;
    __Vfunc_aes_mvm__226__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__226__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__226__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__226__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__226__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__226__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__226__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__226__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__226__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__226__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__226__vec_b)))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__226__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__226__vec_b)))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__226__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__226__vec_b)))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__226__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__226__vec_b)))));
    __Vfunc_aes_mvm__226__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__226__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__226__vec_b)))));
    __Vfunc_aes_mvm__226__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__226__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__226__vec_b)))));
    __Vfunc_aes_mvm__226__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__226__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__226__vec_b)))));
    __Vfunc_aes_mvm__226__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__226__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__226__vec_b)))));
    __Vfunc_aes_mvm__226__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__226__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__226__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__226__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__226__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__226__Vfuncout = __Vfunc_aes_mvm__226__vec_c;
    vlSelf->data_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (0x63U ^ (IData)(__Vfunc_aes_mvm__226__Vfuncout))
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__227__Vfuncout)
                           : (0x63U ^ (IData)(__Vfunc_aes_mvm__228__Vfuncout))));
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
    __Vfunc_aes_mul_gf2p2__272__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__272__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__272__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__272__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__272__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__272__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__272__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__272__d)));
    __Vfunc_aes_mul_gf2p2__272__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__272__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__272__d)));
    __Vfunc_aes_mul_gf2p2__272__f = ((((IData)(__Vfunc_aes_mul_gf2p2__272__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__272__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__272__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__272__b)));
    __Vfunc_aes_mul_gf2p2__272__Vfuncout = __Vfunc_aes_mul_gf2p2__272__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__272__Vfuncout;
    __Vfunc_aes_mul_gf2p2__273__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__273__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__273__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__273__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__273__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__273__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__273__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__273__d)));
    __Vfunc_aes_mul_gf2p2__273__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__273__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__273__d)));
    __Vfunc_aes_mul_gf2p2__273__f = ((((IData)(__Vfunc_aes_mul_gf2p2__273__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__273__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__273__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__273__b)));
    __Vfunc_aes_mul_gf2p2__273__Vfuncout = __Vfunc_aes_mul_gf2p2__273__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__273__Vfuncout;
    __Vfunc_aes_square_gf2p2__265__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                               >> 6U) 
                                              ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                 >> 4U)));
    __Vfunc_aes_square_gf2p2__265__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__265__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__265__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__265__Vfuncout = __Vfunc_aes_square_gf2p2__265__d;
    __Vfunc_aes_scale_omega2_gf2p2__264__g = __Vfunc_aes_square_gf2p2__265__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__264__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__264__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__264__g)));
    __Vfunc_aes_scale_omega2_gf2p2__264__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__264__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__264__Vfuncout;
    __Vfunc_aes_square_gf2p2__267__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                               >> 2U) 
                                              ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i)));
    __Vfunc_aes_square_gf2p2__267__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__267__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__267__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__267__Vfuncout = __Vfunc_aes_square_gf2p2__267__d;
    __Vfunc_aes_scale_omega2_gf2p2__266__g = __Vfunc_aes_square_gf2p2__267__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__266__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__266__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__266__g)));
    __Vfunc_aes_scale_omega2_gf2p2__266__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__266__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__266__Vfuncout;
    __Vfunc_aes_mul_gf2p4__288__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__288__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__289__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__288__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__289__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__288__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__289__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__289__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__289__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__289__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__289__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__289__d)));
    __Vfunc_aes_mul_gf2p2__289__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__289__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__289__d)));
    __Vfunc_aes_mul_gf2p2__289__f = ((((IData)(__Vfunc_aes_mul_gf2p2__289__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__289__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__289__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__289__b)));
    __Vfunc_aes_mul_gf2p2__289__Vfuncout = __Vfunc_aes_mul_gf2p2__289__f;
    __Vfunc_aes_mul_gf2p4__288__a = __Vfunc_aes_mul_gf2p2__289__Vfuncout;
    __Vfunc_aes_mul_gf2p2__290__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__288__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__288__delta)));
    __Vfunc_aes_mul_gf2p2__290__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__288__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__288__gamma)));
    __Vfunc_aes_mul_gf2p2__290__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__290__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__290__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__290__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__290__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__290__d)));
    __Vfunc_aes_mul_gf2p2__290__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__290__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__290__d)));
    __Vfunc_aes_mul_gf2p2__290__f = ((((IData)(__Vfunc_aes_mul_gf2p2__290__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__290__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__290__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__290__b)));
    __Vfunc_aes_mul_gf2p2__290__Vfuncout = __Vfunc_aes_mul_gf2p2__290__f;
    __Vfunc_aes_mul_gf2p4__288__b = __Vfunc_aes_mul_gf2p2__290__Vfuncout;
    __Vfunc_aes_mul_gf2p2__291__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__288__delta));
    __Vfunc_aes_mul_gf2p2__291__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__288__gamma));
    __Vfunc_aes_mul_gf2p2__291__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__291__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__291__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__291__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__291__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__291__d)));
    __Vfunc_aes_mul_gf2p2__291__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__291__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__291__d)));
    __Vfunc_aes_mul_gf2p2__291__f = ((((IData)(__Vfunc_aes_mul_gf2p2__291__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__291__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__291__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__291__b)));
    __Vfunc_aes_mul_gf2p2__291__Vfuncout = __Vfunc_aes_mul_gf2p2__291__f;
    __Vfunc_aes_mul_gf2p4__288__c = __Vfunc_aes_mul_gf2p2__291__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__292__g = __Vfunc_aes_mul_gf2p4__288__b;
    __Vfunc_aes_scale_omega2_gf2p2__292__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__292__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__292__g)));
    __Vfunc_aes_scale_omega2_gf2p2__292__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__292__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__288__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__288__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__288__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__292__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__293__g = __Vfunc_aes_mul_gf2p4__288__b;
    __Vfunc_aes_scale_omega2_gf2p2__293__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__293__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__293__g)));
    __Vfunc_aes_scale_omega2_gf2p2__293__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__293__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__288__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__288__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__288__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__293__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__288__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__288__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__288__Vfuncout;
    __Vfunc_aes_mul_gf2p4__294__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__294__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__295__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__294__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__295__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__294__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__295__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__295__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__295__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__295__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__295__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__295__d)));
    __Vfunc_aes_mul_gf2p2__295__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__295__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__295__d)));
    __Vfunc_aes_mul_gf2p2__295__f = ((((IData)(__Vfunc_aes_mul_gf2p2__295__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__295__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__295__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__295__b)));
    __Vfunc_aes_mul_gf2p2__295__Vfuncout = __Vfunc_aes_mul_gf2p2__295__f;
    __Vfunc_aes_mul_gf2p4__294__a = __Vfunc_aes_mul_gf2p2__295__Vfuncout;
    __Vfunc_aes_mul_gf2p2__296__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__294__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__294__delta)));
    __Vfunc_aes_mul_gf2p2__296__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__294__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__294__gamma)));
    __Vfunc_aes_mul_gf2p2__296__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__296__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__296__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__296__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__296__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__296__d)));
    __Vfunc_aes_mul_gf2p2__296__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__296__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__296__d)));
    __Vfunc_aes_mul_gf2p2__296__f = ((((IData)(__Vfunc_aes_mul_gf2p2__296__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__296__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__296__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__296__b)));
    __Vfunc_aes_mul_gf2p2__296__Vfuncout = __Vfunc_aes_mul_gf2p2__296__f;
    __Vfunc_aes_mul_gf2p4__294__b = __Vfunc_aes_mul_gf2p2__296__Vfuncout;
    __Vfunc_aes_mul_gf2p2__297__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__294__delta));
    __Vfunc_aes_mul_gf2p2__297__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__294__gamma));
    __Vfunc_aes_mul_gf2p2__297__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__297__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__297__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__297__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__297__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__297__d)));
    __Vfunc_aes_mul_gf2p2__297__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__297__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__297__d)));
    __Vfunc_aes_mul_gf2p2__297__f = ((((IData)(__Vfunc_aes_mul_gf2p2__297__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__297__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__297__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__297__b)));
    __Vfunc_aes_mul_gf2p2__297__Vfuncout = __Vfunc_aes_mul_gf2p2__297__f;
    __Vfunc_aes_mul_gf2p4__294__c = __Vfunc_aes_mul_gf2p2__297__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__298__g = __Vfunc_aes_mul_gf2p4__294__b;
    __Vfunc_aes_scale_omega2_gf2p2__298__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__298__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__298__g)));
    __Vfunc_aes_scale_omega2_gf2p2__298__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__298__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__294__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__294__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__294__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__298__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__299__g = __Vfunc_aes_mul_gf2p4__294__b;
    __Vfunc_aes_scale_omega2_gf2p2__299__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__299__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__299__g)));
    __Vfunc_aes_scale_omega2_gf2p2__299__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__299__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__294__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__294__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__294__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__299__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__294__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__294__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__294__Vfuncout;
    __Vfunc_aes_mul_gf2p4__312__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__312__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p2__313__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__312__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__313__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__312__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__313__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__313__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__313__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__313__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__313__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__313__d)));
    __Vfunc_aes_mul_gf2p2__313__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__313__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__313__d)));
    __Vfunc_aes_mul_gf2p2__313__f = ((((IData)(__Vfunc_aes_mul_gf2p2__313__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__313__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__313__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__313__b)));
    __Vfunc_aes_mul_gf2p2__313__Vfuncout = __Vfunc_aes_mul_gf2p2__313__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__312__a = __Vfunc_aes_mul_gf2p2__313__Vfuncout;
    __Vfunc_aes_mul_gf2p2__314__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__312__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__312__delta)));
    __Vfunc_aes_mul_gf2p2__314__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__312__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__312__gamma)));
    __Vfunc_aes_mul_gf2p2__314__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__314__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__314__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__314__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__314__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__314__d)));
    __Vfunc_aes_mul_gf2p2__314__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__314__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__314__d)));
    __Vfunc_aes_mul_gf2p2__314__f = ((((IData)(__Vfunc_aes_mul_gf2p2__314__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__314__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__314__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__314__b)));
    __Vfunc_aes_mul_gf2p2__314__Vfuncout = __Vfunc_aes_mul_gf2p2__314__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__312__b = __Vfunc_aes_mul_gf2p2__314__Vfuncout;
    __Vfunc_aes_mul_gf2p2__315__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__312__delta));
    __Vfunc_aes_mul_gf2p2__315__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__312__gamma));
    vlSelf->__Vfunc_aes_mul_gf2p2__315__a = (1U & (
                                                   ((IData)(__Vfunc_aes_mul_gf2p2__315__g) 
                                                    & (IData)(__Vfunc_aes_mul_gf2p2__315__d)) 
                                                   >> 1U));
    vlSelf->__Vfunc_aes_mul_gf2p2__315__b = (1U & (
                                                   VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__315__g) 
                                                   & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__315__d)));
    vlSelf->__Vfunc_aes_mul_gf2p2__315__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__315__g) 
                                                   & (IData)(__Vfunc_aes_mul_gf2p2__315__d)));
}
