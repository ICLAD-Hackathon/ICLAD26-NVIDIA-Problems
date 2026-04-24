// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__46(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__46\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__570__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__570__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__570__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__570__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__570__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__570__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__571__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__571__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__571__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__571__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__571__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__571__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__571__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__572__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__572__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__572__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__572__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__572__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__572__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__572__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__573__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__573__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__573__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__573__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__573__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__573__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__573__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__574__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__574__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__574__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__575__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__575__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__575__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__576__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__576__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__576__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__576__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__576__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__576__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__577__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__577__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__577__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__577__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__577__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__577__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__577__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__578__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__578__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__578__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__578__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__578__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__578__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__578__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__579__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__579__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__579__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__579__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__579__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__579__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__579__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__580__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__580__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__580__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__581__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__581__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__581__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__600__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__600__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__600__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__600__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__600__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__600__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__600__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__601__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__601__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__601__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__601__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__601__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__601__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__601__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__604__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__604__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__604__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__604__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__604__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__604__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__604__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__605__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__605__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__605__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__605__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__605__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__605__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__605__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__608__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__608__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__608__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__608__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__608__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__608__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__608__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__609__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__609__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__609__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__609__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__609__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__609__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__609__c;
    // Body
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
        = ((0xff00000U & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[4U] 
                          << 8U)) | ((0xf0000U & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[4U] 
                                                  >> 4U)) 
                                     | ((0xff00U & 
                                         (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[4U] 
                                          >> 0x10U)) 
                                        | (0xffU & 
                                           vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[5U]))));
    __Vfunc_aes_mul_gf2p2__600__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0x10U));
    __Vfunc_aes_mul_gf2p2__600__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__600__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__600__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__600__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__600__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__600__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__600__d)));
    __Vfunc_aes_mul_gf2p2__600__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__600__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__600__d)));
    __Vfunc_aes_mul_gf2p2__600__f = ((((IData)(__Vfunc_aes_mul_gf2p2__600__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__600__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__600__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__600__b)));
    __Vfunc_aes_mul_gf2p2__600__Vfuncout = __Vfunc_aes_mul_gf2p2__600__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__600__Vfuncout;
    __Vfunc_aes_mul_gf2p2__601__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0x10U));
    __Vfunc_aes_mul_gf2p2__601__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__601__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__601__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__601__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__601__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__601__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__601__d)));
    __Vfunc_aes_mul_gf2p2__601__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__601__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__601__d)));
    __Vfunc_aes_mul_gf2p2__601__f = ((((IData)(__Vfunc_aes_mul_gf2p2__601__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__601__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__601__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__601__b)));
    __Vfunc_aes_mul_gf2p2__601__Vfuncout = __Vfunc_aes_mul_gf2p2__601__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__601__Vfuncout;
    __Vfunc_aes_mul_gf2p2__604__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0xcU));
    __Vfunc_aes_mul_gf2p2__604__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__604__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__604__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__604__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__604__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__604__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__604__d)));
    __Vfunc_aes_mul_gf2p2__604__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__604__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__604__d)));
    __Vfunc_aes_mul_gf2p2__604__f = ((((IData)(__Vfunc_aes_mul_gf2p2__604__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__604__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__604__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__604__b)));
    __Vfunc_aes_mul_gf2p2__604__Vfuncout = __Vfunc_aes_mul_gf2p2__604__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__604__Vfuncout;
    __Vfunc_aes_mul_gf2p2__605__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 0xcU));
    __Vfunc_aes_mul_gf2p2__605__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__605__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__605__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__605__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__605__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__605__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__605__d)));
    __Vfunc_aes_mul_gf2p2__605__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__605__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__605__d)));
    __Vfunc_aes_mul_gf2p2__605__f = ((((IData)(__Vfunc_aes_mul_gf2p2__605__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__605__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__605__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__605__b)));
    __Vfunc_aes_mul_gf2p2__605__Vfuncout = __Vfunc_aes_mul_gf2p2__605__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__605__Vfuncout;
    __Vfunc_aes_mul_gf2p4__570__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                 >> 0x14U));
    __Vfunc_aes_mul_gf2p4__570__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__571__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__570__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__571__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__570__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__571__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__571__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__571__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__571__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__571__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__571__d)));
    __Vfunc_aes_mul_gf2p2__571__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__571__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__571__d)));
    __Vfunc_aes_mul_gf2p2__571__f = ((((IData)(__Vfunc_aes_mul_gf2p2__571__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__571__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__571__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__571__b)));
    __Vfunc_aes_mul_gf2p2__571__Vfuncout = __Vfunc_aes_mul_gf2p2__571__f;
    __Vfunc_aes_mul_gf2p4__570__a = __Vfunc_aes_mul_gf2p2__571__Vfuncout;
    __Vfunc_aes_mul_gf2p2__572__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__570__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__570__delta)));
    __Vfunc_aes_mul_gf2p2__572__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__570__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__570__gamma)));
    __Vfunc_aes_mul_gf2p2__572__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__572__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__572__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__572__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__572__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__572__d)));
    __Vfunc_aes_mul_gf2p2__572__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__572__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__572__d)));
    __Vfunc_aes_mul_gf2p2__572__f = ((((IData)(__Vfunc_aes_mul_gf2p2__572__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__572__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__572__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__572__b)));
    __Vfunc_aes_mul_gf2p2__572__Vfuncout = __Vfunc_aes_mul_gf2p2__572__f;
    __Vfunc_aes_mul_gf2p4__570__b = __Vfunc_aes_mul_gf2p2__572__Vfuncout;
    __Vfunc_aes_mul_gf2p2__573__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__570__delta));
    __Vfunc_aes_mul_gf2p2__573__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__570__gamma));
    __Vfunc_aes_mul_gf2p2__573__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__573__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__573__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__573__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__573__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__573__d)));
    __Vfunc_aes_mul_gf2p2__573__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__573__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__573__d)));
    __Vfunc_aes_mul_gf2p2__573__f = ((((IData)(__Vfunc_aes_mul_gf2p2__573__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__573__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__573__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__573__b)));
    __Vfunc_aes_mul_gf2p2__573__Vfuncout = __Vfunc_aes_mul_gf2p2__573__f;
    __Vfunc_aes_mul_gf2p4__570__c = __Vfunc_aes_mul_gf2p2__573__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__574__g = __Vfunc_aes_mul_gf2p4__570__b;
    __Vfunc_aes_scale_omega2_gf2p2__574__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__574__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__574__g)));
    __Vfunc_aes_scale_omega2_gf2p2__574__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__574__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__570__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__570__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__570__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__574__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__575__g = __Vfunc_aes_mul_gf2p4__570__b;
    __Vfunc_aes_scale_omega2_gf2p2__575__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__575__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__575__g)));
    __Vfunc_aes_scale_omega2_gf2p2__575__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__575__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__570__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__570__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__570__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__575__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__570__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__570__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__570__Vfuncout;
    __Vfunc_aes_mul_gf2p4__576__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                 >> 0x14U));
    __Vfunc_aes_mul_gf2p4__576__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__577__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__576__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__577__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__576__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__577__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__577__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__577__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__577__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__577__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__577__d)));
    __Vfunc_aes_mul_gf2p2__577__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__577__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__577__d)));
    __Vfunc_aes_mul_gf2p2__577__f = ((((IData)(__Vfunc_aes_mul_gf2p2__577__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__577__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__577__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__577__b)));
    __Vfunc_aes_mul_gf2p2__577__Vfuncout = __Vfunc_aes_mul_gf2p2__577__f;
    __Vfunc_aes_mul_gf2p4__576__a = __Vfunc_aes_mul_gf2p2__577__Vfuncout;
    __Vfunc_aes_mul_gf2p2__578__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__576__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__576__delta)));
    __Vfunc_aes_mul_gf2p2__578__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__576__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__576__gamma)));
    __Vfunc_aes_mul_gf2p2__578__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__578__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__578__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__578__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__578__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__578__d)));
    __Vfunc_aes_mul_gf2p2__578__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__578__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__578__d)));
    __Vfunc_aes_mul_gf2p2__578__f = ((((IData)(__Vfunc_aes_mul_gf2p2__578__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__578__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__578__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__578__b)));
    __Vfunc_aes_mul_gf2p2__578__Vfuncout = __Vfunc_aes_mul_gf2p2__578__f;
    __Vfunc_aes_mul_gf2p4__576__b = __Vfunc_aes_mul_gf2p2__578__Vfuncout;
    __Vfunc_aes_mul_gf2p2__579__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__576__delta));
    __Vfunc_aes_mul_gf2p2__579__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__576__gamma));
    __Vfunc_aes_mul_gf2p2__579__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__579__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__579__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__579__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__579__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__579__d)));
    __Vfunc_aes_mul_gf2p2__579__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__579__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__579__d)));
    __Vfunc_aes_mul_gf2p2__579__f = ((((IData)(__Vfunc_aes_mul_gf2p2__579__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__579__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__579__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__579__b)));
    __Vfunc_aes_mul_gf2p2__579__Vfuncout = __Vfunc_aes_mul_gf2p2__579__f;
    __Vfunc_aes_mul_gf2p4__576__c = __Vfunc_aes_mul_gf2p2__579__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__580__g = __Vfunc_aes_mul_gf2p4__576__b;
    __Vfunc_aes_scale_omega2_gf2p2__580__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__580__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__580__g)));
    __Vfunc_aes_scale_omega2_gf2p2__580__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__580__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__576__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__576__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__576__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__580__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__581__g = __Vfunc_aes_mul_gf2p4__576__b;
    __Vfunc_aes_scale_omega2_gf2p2__581__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__581__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__581__g)));
    __Vfunc_aes_scale_omega2_gf2p2__581__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__581__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__576__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__576__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__576__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__581__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__576__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__576__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__576__Vfuncout;
    __Vfunc_aes_mul_gf2p2__608__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__608__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__608__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__608__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__608__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__608__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__608__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__608__d)));
    __Vfunc_aes_mul_gf2p2__608__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__608__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__608__d)));
    __Vfunc_aes_mul_gf2p2__608__f = ((((IData)(__Vfunc_aes_mul_gf2p2__608__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__608__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__608__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__608__b)));
    __Vfunc_aes_mul_gf2p2__608__Vfuncout = __Vfunc_aes_mul_gf2p2__608__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__608__Vfuncout;
    __Vfunc_aes_mul_gf2p2__609__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                           >> 8U));
    __Vfunc_aes_mul_gf2p2__609__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i));
    __Vfunc_aes_mul_gf2p2__609__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__609__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__609__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__609__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__609__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__609__d)));
    __Vfunc_aes_mul_gf2p2__609__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__609__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__609__d)));
    __Vfunc_aes_mul_gf2p2__609__f = ((((IData)(__Vfunc_aes_mul_gf2p2__609__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__609__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__609__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__609__b)));
    __Vfunc_aes_mul_gf2p2__609__Vfuncout = __Vfunc_aes_mul_gf2p2__609__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__609__Vfuncout;
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

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__71(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__71\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__550__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__550__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__550__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__551__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__551__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__551__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__552__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__552__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__552__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__553__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__553__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__553__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__554__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__554__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__554__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__555__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__555__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__555__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__556__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__556__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__556__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__557__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__557__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__557__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__558__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__558__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__558__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__559__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__559__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__559__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__560__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__560__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__560__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__561__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__561__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__561__vec_c;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__562__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__562__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__562__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__562__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__562__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__563__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__563__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__563__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__564__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__564__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__564__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__565__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__565__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__565__d;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__566__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__566__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__566__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__566__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__566__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__567__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__567__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__567__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__568__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__568__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__568__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__569__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__569__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__569__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__582__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__582__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__582__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__582__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__582__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__582__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__583__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__583__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__583__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__583__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__583__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__583__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__583__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__584__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__584__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__584__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__584__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__584__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__584__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__584__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__585__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__585__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__585__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__585__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__585__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__585__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__585__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__586__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__586__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__586__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__587__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__587__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__587__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__588__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__588__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__588__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__588__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__588__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__588__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__589__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__589__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__589__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__589__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__589__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__589__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__589__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__590__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__590__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__590__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__590__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__590__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__590__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__590__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__591__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__591__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__591__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__591__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__591__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__591__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__591__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__592__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__592__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__592__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__593__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__593__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__593__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__594__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__594__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__594__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__595__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__595__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__595__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__596__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__596__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__596__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__597__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__597__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__597__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__602__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__602__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__602__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__602__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__602__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__602__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__602__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__603__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__603__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__603__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__603__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__603__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__603__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__603__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__606__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__606__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__606__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__606__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__606__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__606__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__606__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__607__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__607__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__607__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__607__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__607__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__607__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__607__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__610__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__610__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__610__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__610__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__610__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__610__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__610__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__611__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__611__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__611__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__611__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__611__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__611__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__611__c;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__618__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__618__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__618__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__618__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__618__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__618__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__619__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__619__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__619__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__619__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__619__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__619__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__619__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__620__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__620__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__620__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__620__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__620__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__620__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__620__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__621__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__621__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__621__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__621__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__621__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__621__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__621__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__622__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__622__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__622__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__623__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__623__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__623__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__624__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__624__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__624__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__624__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__624__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__624__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__625__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__625__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__625__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__625__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__625__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__625__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__625__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__626__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__626__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__626__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__626__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__626__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__626__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__626__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__627__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__627__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__627__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__627__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__627__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__627__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__627__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__628__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__628__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__628__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__629__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__629__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__629__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__642__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__642__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__643__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__643__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__643__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__643__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__643__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__643__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__643__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__644__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__644__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__644__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__644__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__644__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__644__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__644__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__645__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__645__d;
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
    vlSelf->__Vfunc_aes_mvm__552__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__552__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__552__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__552__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__552__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__552__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__552__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__552__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__552__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [0U][1U] 
                                            >> 8U));
    __Vfunc_aes_mvm__552__vec_c = 0U;
    __Vfunc_aes_mvm__552__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__552__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__552__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__552__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__552__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__552__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__552__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__552__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__552__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__552__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__552__vec_b)))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__552__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__552__vec_b)))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__552__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__552__vec_b)))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__552__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__552__vec_b)))));
    __Vfunc_aes_mvm__552__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__552__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__552__vec_b)))));
    __Vfunc_aes_mvm__552__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__552__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__552__vec_b)))));
    __Vfunc_aes_mvm__552__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__552__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__552__vec_b)))));
    __Vfunc_aes_mvm__552__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__552__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__552__vec_b)))));
    __Vfunc_aes_mvm__552__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__552__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__552__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__552__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__552__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__552__Vfuncout = __Vfunc_aes_mvm__552__vec_c;
    vlSelf->__Vfunc_aes_mvm__551__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__551__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__551__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__551__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__551__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__551__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__551__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__551__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__551__vec_b = (0xffU & (0x63U ^ 
                                            ((vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                              [0U][1U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                [0U][1U] 
                                                >> 8U))));
    __Vfunc_aes_mvm__551__vec_c = 0U;
    __Vfunc_aes_mvm__551__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__551__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__551__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__551__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__551__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__551__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__551__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__551__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__551__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__551__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__551__vec_b)))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__551__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__551__vec_b)))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__551__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__551__vec_b)))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__551__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__551__vec_b)))));
    __Vfunc_aes_mvm__551__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__551__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__551__vec_b)))));
    __Vfunc_aes_mvm__551__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__551__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__551__vec_b)))));
    __Vfunc_aes_mvm__551__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__551__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__551__vec_b)))));
    __Vfunc_aes_mvm__551__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__551__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__551__vec_b)))));
    __Vfunc_aes_mvm__551__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__551__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__551__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__551__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__551__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__551__Vfuncout = __Vfunc_aes_mvm__551__vec_c;
    vlSelf->__Vfunc_aes_mvm__550__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__550__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__550__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__550__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__550__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__550__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__550__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__550__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__550__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [0U][1U] 
                                            >> 8U));
    __Vfunc_aes_mvm__550__vec_c = 0U;
    __Vfunc_aes_mvm__550__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__550__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__550__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__550__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__550__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__550__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__550__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__550__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__550__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__550__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__550__vec_b)))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__550__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__550__vec_b)))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__550__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__550__vec_b)))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__550__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__550__vec_b)))));
    __Vfunc_aes_mvm__550__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__550__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__550__vec_b)))));
    __Vfunc_aes_mvm__550__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__550__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__550__vec_b)))));
    __Vfunc_aes_mvm__550__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__550__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__550__vec_b)))));
    __Vfunc_aes_mvm__550__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__550__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__550__vec_b)))));
    __Vfunc_aes_mvm__550__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__550__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__550__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__550__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__550__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__550__Vfuncout = __Vfunc_aes_mvm__550__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__550__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__551__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__552__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__555__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__555__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__555__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__555__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__555__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__555__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__555__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__555__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__555__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [1U][1U] 
                                            >> 8U));
    __Vfunc_aes_mvm__555__vec_c = 0U;
    __Vfunc_aes_mvm__555__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__555__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__555__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__555__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__555__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__555__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__555__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__555__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__555__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__555__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__555__vec_b)))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__555__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__555__vec_b)))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__555__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__555__vec_b)))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__555__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__555__vec_b)))));
    __Vfunc_aes_mvm__555__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__555__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__555__vec_b)))));
    __Vfunc_aes_mvm__555__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__555__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__555__vec_b)))));
    __Vfunc_aes_mvm__555__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__555__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__555__vec_b)))));
    __Vfunc_aes_mvm__555__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__555__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__555__vec_b)))));
    __Vfunc_aes_mvm__555__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__555__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__555__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__555__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__555__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__555__Vfuncout = __Vfunc_aes_mvm__555__vec_c;
    vlSelf->__Vfunc_aes_mvm__554__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__554__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__554__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__554__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__554__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__554__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__554__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__554__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__554__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [1U][1U] 
                                            >> 8U));
    __Vfunc_aes_mvm__554__vec_c = 0U;
    __Vfunc_aes_mvm__554__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__554__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__554__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__554__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__554__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__554__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__554__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__554__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__554__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__554__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__554__vec_b)))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__554__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__554__vec_b)))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__554__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__554__vec_b)))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__554__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__554__vec_b)))));
    __Vfunc_aes_mvm__554__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__554__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__554__vec_b)))));
    __Vfunc_aes_mvm__554__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__554__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__554__vec_b)))));
    __Vfunc_aes_mvm__554__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__554__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__554__vec_b)))));
    __Vfunc_aes_mvm__554__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__554__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__554__vec_b)))));
    __Vfunc_aes_mvm__554__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__554__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__554__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__554__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__554__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__554__Vfuncout = __Vfunc_aes_mvm__554__vec_c;
    vlSelf->__Vfunc_aes_mvm__553__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__553__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__553__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__553__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__553__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__553__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__553__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__553__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__553__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                            [1U][1U] 
                                            >> 8U));
    __Vfunc_aes_mvm__553__vec_c = 0U;
    __Vfunc_aes_mvm__553__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__553__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__553__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__553__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__553__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__553__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__553__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__553__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__553__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__553__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__553__vec_b)))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__553__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__553__vec_b)))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__553__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__553__vec_b)))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__553__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__553__vec_b)))));
    __Vfunc_aes_mvm__553__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__553__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__553__vec_b)))));
    __Vfunc_aes_mvm__553__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__553__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__553__vec_b)))));
    __Vfunc_aes_mvm__553__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__553__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__553__vec_b)))));
    __Vfunc_aes_mvm__553__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__553__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__553__vec_b)))));
    __Vfunc_aes_mvm__553__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__553__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__553__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__553__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__553__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__553__Vfuncout = __Vfunc_aes_mvm__553__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__553__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__554__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__555__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__562__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__562__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__562__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__562__gamma)));
    __Vfunc_aes_square_gf2p2__563__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__562__gamma));
    __Vfunc_aes_square_gf2p2__563__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__563__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__563__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__563__Vfuncout = __Vfunc_aes_square_gf2p2__563__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__562__b = __Vfunc_aes_square_gf2p2__563__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__565__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__562__b;
    __Vfunc_aes_scale_omega_gf2p2__565__d = ((2U & 
                                              (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__565__g) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(__Vfunc_aes_scale_omega_gf2p2__565__g) 
                                                   >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__565__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__565__d;
    __Vfunc_aes_square_gf2p2__564__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__562__a;
    __Vfunc_aes_square_gf2p2__564__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__564__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__564__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__564__Vfuncout = __Vfunc_aes_square_gf2p2__564__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__562__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__564__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__565__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__562__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__562__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__562__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__566__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__566__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__566__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__566__gamma)));
    __Vfunc_aes_square_gf2p2__567__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__566__gamma));
    __Vfunc_aes_square_gf2p2__567__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__567__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__567__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__567__Vfuncout = __Vfunc_aes_square_gf2p2__567__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__566__b = __Vfunc_aes_square_gf2p2__567__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__569__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__566__b;
    __Vfunc_aes_scale_omega_gf2p2__569__d = ((2U & 
                                              (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__569__g) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(__Vfunc_aes_scale_omega_gf2p2__569__g) 
                                                   >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__569__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__569__d;
    __Vfunc_aes_square_gf2p2__568__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__566__a;
    __Vfunc_aes_square_gf2p2__568__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__568__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__568__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__568__Vfuncout = __Vfunc_aes_square_gf2p2__568__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__566__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__568__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__569__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__566__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__566__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__566__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__582__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p4__582__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__583__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__582__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__583__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__582__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__583__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__583__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__583__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__583__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__583__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__583__d)));
    __Vfunc_aes_mul_gf2p2__583__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__583__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__583__d)));
    __Vfunc_aes_mul_gf2p2__583__f = ((((IData)(__Vfunc_aes_mul_gf2p2__583__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__583__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__583__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__583__b)));
    __Vfunc_aes_mul_gf2p2__583__Vfuncout = __Vfunc_aes_mul_gf2p2__583__f;
    __Vfunc_aes_mul_gf2p4__582__a = __Vfunc_aes_mul_gf2p2__583__Vfuncout;
    __Vfunc_aes_mul_gf2p2__584__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__582__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__582__delta)));
    __Vfunc_aes_mul_gf2p2__584__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__582__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__582__gamma)));
    __Vfunc_aes_mul_gf2p2__584__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__584__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__584__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__584__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__584__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__584__d)));
    __Vfunc_aes_mul_gf2p2__584__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__584__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__584__d)));
    __Vfunc_aes_mul_gf2p2__584__f = ((((IData)(__Vfunc_aes_mul_gf2p2__584__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__584__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__584__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__584__b)));
    __Vfunc_aes_mul_gf2p2__584__Vfuncout = __Vfunc_aes_mul_gf2p2__584__f;
    __Vfunc_aes_mul_gf2p4__582__b = __Vfunc_aes_mul_gf2p2__584__Vfuncout;
    __Vfunc_aes_mul_gf2p2__585__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__582__delta));
    __Vfunc_aes_mul_gf2p2__585__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__582__gamma));
    __Vfunc_aes_mul_gf2p2__585__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__585__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__585__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__585__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__585__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__585__d)));
    __Vfunc_aes_mul_gf2p2__585__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__585__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__585__d)));
    __Vfunc_aes_mul_gf2p2__585__f = ((((IData)(__Vfunc_aes_mul_gf2p2__585__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__585__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__585__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__585__b)));
    __Vfunc_aes_mul_gf2p2__585__Vfuncout = __Vfunc_aes_mul_gf2p2__585__f;
    __Vfunc_aes_mul_gf2p4__582__c = __Vfunc_aes_mul_gf2p2__585__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__586__g = __Vfunc_aes_mul_gf2p4__582__b;
    __Vfunc_aes_scale_omega2_gf2p2__586__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__586__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__586__g)));
    __Vfunc_aes_scale_omega2_gf2p2__586__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__586__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__582__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__582__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__582__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__586__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__587__g = __Vfunc_aes_mul_gf2p4__582__b;
    __Vfunc_aes_scale_omega2_gf2p2__587__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__587__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__587__g)));
    __Vfunc_aes_scale_omega2_gf2p2__587__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__587__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__582__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__582__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__582__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__587__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__582__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__582__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__582__Vfuncout;
    __Vfunc_aes_mul_gf2p4__588__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p4__588__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__589__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__588__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__589__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__588__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__589__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__589__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__589__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__589__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__589__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__589__d)));
    __Vfunc_aes_mul_gf2p2__589__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__589__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__589__d)));
    __Vfunc_aes_mul_gf2p2__589__f = ((((IData)(__Vfunc_aes_mul_gf2p2__589__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__589__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__589__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__589__b)));
    __Vfunc_aes_mul_gf2p2__589__Vfuncout = __Vfunc_aes_mul_gf2p2__589__f;
    __Vfunc_aes_mul_gf2p4__588__a = __Vfunc_aes_mul_gf2p2__589__Vfuncout;
    __Vfunc_aes_mul_gf2p2__590__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__588__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__588__delta)));
    __Vfunc_aes_mul_gf2p2__590__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__588__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__588__gamma)));
    __Vfunc_aes_mul_gf2p2__590__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__590__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__590__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__590__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__590__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__590__d)));
    __Vfunc_aes_mul_gf2p2__590__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__590__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__590__d)));
    __Vfunc_aes_mul_gf2p2__590__f = ((((IData)(__Vfunc_aes_mul_gf2p2__590__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__590__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__590__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__590__b)));
    __Vfunc_aes_mul_gf2p2__590__Vfuncout = __Vfunc_aes_mul_gf2p2__590__f;
    __Vfunc_aes_mul_gf2p4__588__b = __Vfunc_aes_mul_gf2p2__590__Vfuncout;
    __Vfunc_aes_mul_gf2p2__591__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__588__delta));
    __Vfunc_aes_mul_gf2p2__591__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__588__gamma));
    __Vfunc_aes_mul_gf2p2__591__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__591__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__591__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__591__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__591__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__591__d)));
    __Vfunc_aes_mul_gf2p2__591__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__591__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__591__d)));
    __Vfunc_aes_mul_gf2p2__591__f = ((((IData)(__Vfunc_aes_mul_gf2p2__591__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__591__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__591__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__591__b)));
    __Vfunc_aes_mul_gf2p2__591__Vfuncout = __Vfunc_aes_mul_gf2p2__591__f;
    __Vfunc_aes_mul_gf2p4__588__c = __Vfunc_aes_mul_gf2p2__591__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__592__g = __Vfunc_aes_mul_gf2p4__588__b;
    __Vfunc_aes_scale_omega2_gf2p2__592__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__592__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__592__g)));
    __Vfunc_aes_scale_omega2_gf2p2__592__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__592__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__588__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__588__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__588__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__592__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__593__g = __Vfunc_aes_mul_gf2p4__588__b;
    __Vfunc_aes_scale_omega2_gf2p2__593__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__593__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__593__g)));
    __Vfunc_aes_scale_omega2_gf2p2__593__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__593__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__588__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__588__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__588__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__593__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__588__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__588__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__588__Vfuncout;
    __Vfunc_aes_mul_gf2p2__606__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__606__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__606__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__606__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__606__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__606__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__606__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__606__d)));
    __Vfunc_aes_mul_gf2p2__606__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__606__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__606__d)));
    __Vfunc_aes_mul_gf2p2__606__f = ((((IData)(__Vfunc_aes_mul_gf2p2__606__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__606__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__606__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__606__b)));
    __Vfunc_aes_mul_gf2p2__606__Vfuncout = __Vfunc_aes_mul_gf2p2__606__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__606__Vfuncout;
    __Vfunc_aes_mul_gf2p2__607__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__607__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__607__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__607__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__607__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__607__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__607__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__607__d)));
    __Vfunc_aes_mul_gf2p2__607__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__607__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__607__d)));
    __Vfunc_aes_mul_gf2p2__607__f = ((((IData)(__Vfunc_aes_mul_gf2p2__607__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__607__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__607__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__607__b)));
    __Vfunc_aes_mul_gf2p2__607__Vfuncout = __Vfunc_aes_mul_gf2p2__607__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__607__Vfuncout;
    __Vfunc_aes_mul_gf2p2__610__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__610__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__610__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__610__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__610__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__610__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__610__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__610__d)));
    __Vfunc_aes_mul_gf2p2__610__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__610__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__610__d)));
    __Vfunc_aes_mul_gf2p2__610__f = ((((IData)(__Vfunc_aes_mul_gf2p2__610__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__610__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__610__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__610__b)));
    __Vfunc_aes_mul_gf2p2__610__Vfuncout = __Vfunc_aes_mul_gf2p2__610__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__610__Vfuncout;
    __Vfunc_aes_mul_gf2p2__611__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__611__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__611__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__611__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__611__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__611__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__611__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__611__d)));
    __Vfunc_aes_mul_gf2p2__611__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__611__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__611__d)));
    __Vfunc_aes_mul_gf2p2__611__f = ((((IData)(__Vfunc_aes_mul_gf2p2__611__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__611__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__611__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__611__b)));
    __Vfunc_aes_mul_gf2p2__611__Vfuncout = __Vfunc_aes_mul_gf2p2__611__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__611__Vfuncout;
    vlSelf->__Vfunc_aes_mvm__561__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__561__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__561__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__561__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__561__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__561__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__561__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__561__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__561__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__561__vec_c = 0U;
    __Vfunc_aes_mvm__561__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__561__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__561__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__561__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__561__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__561__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__561__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__561__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__561__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__561__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__561__vec_b)))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__561__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__561__vec_b)))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__561__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__561__vec_b)))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__561__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__561__vec_b)))));
    __Vfunc_aes_mvm__561__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__561__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__561__vec_b)))));
    __Vfunc_aes_mvm__561__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__561__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__561__vec_b)))));
    __Vfunc_aes_mvm__561__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__561__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__561__vec_b)))));
    __Vfunc_aes_mvm__561__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__561__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__561__vec_b)))));
    __Vfunc_aes_mvm__561__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__561__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__561__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__561__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__561__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__561__Vfuncout = __Vfunc_aes_mvm__561__vec_c;
    vlSelf->__Vfunc_aes_mvm__560__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__560__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__560__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__560__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__560__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__560__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__560__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__560__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__560__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__560__vec_c = 0U;
    __Vfunc_aes_mvm__560__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__560__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__560__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__560__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__560__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__560__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__560__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__560__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__560__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__560__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__560__vec_b)))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__560__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__560__vec_b)))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__560__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__560__vec_b)))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__560__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__560__vec_b)))));
    __Vfunc_aes_mvm__560__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__560__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__560__vec_b)))));
    __Vfunc_aes_mvm__560__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__560__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__560__vec_b)))));
    __Vfunc_aes_mvm__560__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__560__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__560__vec_b)))));
    __Vfunc_aes_mvm__560__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__560__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__560__vec_b)))));
    __Vfunc_aes_mvm__560__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__560__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__560__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__560__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__560__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__560__Vfuncout = __Vfunc_aes_mvm__560__vec_c;
    vlSelf->__Vfunc_aes_mvm__559__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__559__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__559__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__559__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__559__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__559__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__559__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__559__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__559__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__559__vec_c = 0U;
    __Vfunc_aes_mvm__559__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__559__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__559__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__559__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__559__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__559__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__559__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__559__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__559__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__559__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__559__vec_b)))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__559__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__559__vec_b)))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__559__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__559__vec_b)))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__559__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__559__vec_b)))));
    __Vfunc_aes_mvm__559__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__559__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__559__vec_b)))));
    __Vfunc_aes_mvm__559__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__559__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__559__vec_b)))));
    __Vfunc_aes_mvm__559__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__559__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__559__vec_b)))));
    __Vfunc_aes_mvm__559__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__559__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__559__vec_b)))));
    __Vfunc_aes_mvm__559__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__559__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__559__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__559__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__559__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__559__Vfuncout = __Vfunc_aes_mvm__559__vec_c;
    vlSelf->mask_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (IData)(__Vfunc_aes_mvm__559__Vfuncout)
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__560__Vfuncout)
                           : (IData)(__Vfunc_aes_mvm__561__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__558__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__558__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__558__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__558__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__558__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__558__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__558__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__558__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__558__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__558__vec_c = 0U;
    __Vfunc_aes_mvm__558__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__558__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__558__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__558__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__558__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__558__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__558__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__558__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__558__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__558__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__558__vec_b)))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__558__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__558__vec_b)))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__558__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__558__vec_b)))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__558__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__558__vec_b)))));
    __Vfunc_aes_mvm__558__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__558__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__558__vec_b)))));
    __Vfunc_aes_mvm__558__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__558__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__558__vec_b)))));
    __Vfunc_aes_mvm__558__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__558__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__558__vec_b)))));
    __Vfunc_aes_mvm__558__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__558__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__558__vec_b)))));
    __Vfunc_aes_mvm__558__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__558__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__558__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__558__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__558__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__558__Vfuncout = __Vfunc_aes_mvm__558__vec_c;
    vlSelf->__Vfunc_aes_mvm__557__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__557__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__557__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__557__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__557__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__557__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__557__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__557__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__557__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__557__vec_c = 0U;
    __Vfunc_aes_mvm__557__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__557__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__557__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__557__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__557__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__557__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__557__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__557__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__557__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__557__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__557__vec_b)))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__557__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__557__vec_b)))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__557__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__557__vec_b)))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__557__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__557__vec_b)))));
    __Vfunc_aes_mvm__557__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__557__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__557__vec_b)))));
    __Vfunc_aes_mvm__557__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__557__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__557__vec_b)))));
    __Vfunc_aes_mvm__557__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__557__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__557__vec_b)))));
    __Vfunc_aes_mvm__557__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__557__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__557__vec_b)))));
    __Vfunc_aes_mvm__557__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__557__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__557__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__557__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__557__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__557__Vfuncout = __Vfunc_aes_mvm__557__vec_c;
    vlSelf->__Vfunc_aes_mvm__556__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__556__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__556__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__556__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__556__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__556__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__556__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__556__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__556__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__556__vec_c = 0U;
    __Vfunc_aes_mvm__556__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (IData)((((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                               >> 7U) 
                                              & vlSelf->__Vfunc_aes_mvm__556__mat_a
                                              [0U])));
    __Vfunc_aes_mvm__556__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__556__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                               [1U] 
                                               & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                  >> 6U)))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__556__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                               [2U] 
                                               & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                  >> 5U)))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__556__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                               [3U] 
                                               & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                  >> 4U)))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__556__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                               [4U] 
                                               & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                  >> 3U)))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__556__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                               [5U] 
                                               & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                  >> 2U)))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__556__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                               [6U] 
                                               & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                  >> 1U)))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (1U & ((IData)(__Vfunc_aes_mvm__556__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                               [7U] 
                                               & (IData)(__Vfunc_aes_mvm__556__vec_b)))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                            ^ (0x3fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                     >> 6U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                            ^ (0x7fffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                            ^ (0xffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                            ^ (0x1ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                            ^ (0x3ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                            ^ (0x7ffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (2U & ((IData)(__Vfunc_aes_mvm__556__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                               [6U] 
                                               & (IData)(__Vfunc_aes_mvm__556__vec_b)))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (2U & ((0xfffffffeU 
                                             & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                            ^ (0xfffffffeU 
                                               & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                            ^ (0x7fffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                     >> 5U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                            ^ (0xffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                            ^ (0x1ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                            ^ (0x3ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                            ^ (0x7ffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [4U] 
                                                  & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (4U & ((IData)(__Vfunc_aes_mvm__556__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                               [5U] 
                                               & (IData)(__Vfunc_aes_mvm__556__vec_b)))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (4U & ((0xfffffffcU 
                                             & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                            ^ (0xfffffffcU 
                                               & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                            ^ (0xffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [0U] 
                                                  & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                     >> 4U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                            ^ (0x1ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [1U] 
                                                  & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                     >> 3U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                            ^ (0x3ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [2U] 
                                                  & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                     >> 2U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                            ^ (0x7ffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [3U] 
                                                  & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                     >> 1U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (8U & ((IData)(__Vfunc_aes_mvm__556__vec_c) 
                                            ^ (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                               [4U] 
                                               & (IData)(__Vfunc_aes_mvm__556__vec_b)))));
    __Vfunc_aes_mvm__556__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [5U] 
                                                  & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                     << 1U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [6U] 
                                                  & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                     << 2U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (8U & ((0xfffffff8U 
                                             & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                            ^ (0xfffffff8U 
                                               & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [7U] 
                                                  & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                     << 3U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0x1ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        >> 3U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0x3ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0x7ffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x10U & ((IData)(__Vfunc_aes_mvm__556__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [3U] 
                                                  & (IData)(__Vfunc_aes_mvm__556__vec_b)))));
    __Vfunc_aes_mvm__556__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x10U & ((0xfffffff0U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xfffffff0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0x3fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        >> 2U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0x7fffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x20U & ((IData)(__Vfunc_aes_mvm__556__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [2U] 
                                                  & (IData)(__Vfunc_aes_mvm__556__vec_b)))));
    __Vfunc_aes_mvm__556__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x20U & ((0xffffffe0U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xffffffe0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0x7fffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [0U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        >> 1U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x40U & ((IData)(__Vfunc_aes_mvm__556__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [1U] 
                                                  & (IData)(__Vfunc_aes_mvm__556__vec_b)))));
    __Vfunc_aes_mvm__556__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x40U & ((0xffffffc0U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xffffffc0U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x80U & ((IData)(__Vfunc_aes_mvm__556__vec_c) 
                                               ^ (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                  [0U] 
                                                  & (IData)(__Vfunc_aes_mvm__556__vec_b)))));
    __Vfunc_aes_mvm__556__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [1U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 1U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [2U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 2U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [3U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 3U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [4U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 4U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [5U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 5U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [6U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 6U))))));
    __Vfunc_aes_mvm__556__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                   | (0x80U & ((0xffffff80U 
                                                & (IData)(__Vfunc_aes_mvm__556__vec_c)) 
                                               ^ (0xffffff80U 
                                                  & (vlSelf->__Vfunc_aes_mvm__556__mat_a
                                                     [7U] 
                                                     & ((IData)(__Vfunc_aes_mvm__556__vec_b) 
                                                        << 7U))))));
    __Vfunc_aes_mvm__556__Vfuncout = __Vfunc_aes_mvm__556__vec_c;
    vlSelf->data_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (0x63U ^ (IData)(__Vfunc_aes_mvm__556__Vfuncout))
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__557__Vfuncout)
                           : (0x63U ^ (IData)(__Vfunc_aes_mvm__558__Vfuncout))));
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
    __Vfunc_aes_mul_gf2p2__602__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__602__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 6U));
    __Vfunc_aes_mul_gf2p2__602__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__602__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__602__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__602__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__602__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__602__d)));
    __Vfunc_aes_mul_gf2p2__602__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__602__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__602__d)));
    __Vfunc_aes_mul_gf2p2__602__f = ((((IData)(__Vfunc_aes_mul_gf2p2__602__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__602__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__602__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__602__b)));
    __Vfunc_aes_mul_gf2p2__602__Vfuncout = __Vfunc_aes_mul_gf2p2__602__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__602__Vfuncout;
    __Vfunc_aes_mul_gf2p2__603__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__603__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__603__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__603__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__603__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__603__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__603__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__603__d)));
    __Vfunc_aes_mul_gf2p2__603__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__603__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__603__d)));
    __Vfunc_aes_mul_gf2p2__603__f = ((((IData)(__Vfunc_aes_mul_gf2p2__603__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__603__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__603__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__603__b)));
    __Vfunc_aes_mul_gf2p2__603__Vfuncout = __Vfunc_aes_mul_gf2p2__603__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__603__Vfuncout;
    __Vfunc_aes_square_gf2p2__595__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                               >> 6U) 
                                              ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                 >> 4U)));
    __Vfunc_aes_square_gf2p2__595__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__595__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__595__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__595__Vfuncout = __Vfunc_aes_square_gf2p2__595__d;
    __Vfunc_aes_scale_omega2_gf2p2__594__g = __Vfunc_aes_square_gf2p2__595__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__594__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__594__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__594__g)));
    __Vfunc_aes_scale_omega2_gf2p2__594__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__594__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__594__Vfuncout;
    __Vfunc_aes_square_gf2p2__597__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                               >> 2U) 
                                              ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i)));
    __Vfunc_aes_square_gf2p2__597__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__597__g) 
                                               << 1U)) 
                                        | (1U & ((IData)(__Vfunc_aes_square_gf2p2__597__g) 
                                                 >> 1U)));
    __Vfunc_aes_square_gf2p2__597__Vfuncout = __Vfunc_aes_square_gf2p2__597__d;
    __Vfunc_aes_scale_omega2_gf2p2__596__g = __Vfunc_aes_square_gf2p2__597__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__596__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__596__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__596__g)));
    __Vfunc_aes_scale_omega2_gf2p2__596__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__596__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__596__Vfuncout;
    __Vfunc_aes_mul_gf2p4__618__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__618__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 4U));
    __Vfunc_aes_mul_gf2p2__619__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__618__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__619__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__618__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__619__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__619__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__619__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__619__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__619__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__619__d)));
    __Vfunc_aes_mul_gf2p2__619__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__619__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__619__d)));
    __Vfunc_aes_mul_gf2p2__619__f = ((((IData)(__Vfunc_aes_mul_gf2p2__619__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__619__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__619__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__619__b)));
    __Vfunc_aes_mul_gf2p2__619__Vfuncout = __Vfunc_aes_mul_gf2p2__619__f;
    __Vfunc_aes_mul_gf2p4__618__a = __Vfunc_aes_mul_gf2p2__619__Vfuncout;
    __Vfunc_aes_mul_gf2p2__620__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__618__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__618__delta)));
    __Vfunc_aes_mul_gf2p2__620__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__618__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__618__gamma)));
    __Vfunc_aes_mul_gf2p2__620__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__620__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__620__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__620__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__620__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__620__d)));
    __Vfunc_aes_mul_gf2p2__620__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__620__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__620__d)));
    __Vfunc_aes_mul_gf2p2__620__f = ((((IData)(__Vfunc_aes_mul_gf2p2__620__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__620__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__620__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__620__b)));
    __Vfunc_aes_mul_gf2p2__620__Vfuncout = __Vfunc_aes_mul_gf2p2__620__f;
    __Vfunc_aes_mul_gf2p4__618__b = __Vfunc_aes_mul_gf2p2__620__Vfuncout;
    __Vfunc_aes_mul_gf2p2__621__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__618__delta));
    __Vfunc_aes_mul_gf2p2__621__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__618__gamma));
    __Vfunc_aes_mul_gf2p2__621__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__621__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__621__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__621__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__621__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__621__d)));
    __Vfunc_aes_mul_gf2p2__621__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__621__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__621__d)));
    __Vfunc_aes_mul_gf2p2__621__f = ((((IData)(__Vfunc_aes_mul_gf2p2__621__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__621__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__621__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__621__b)));
    __Vfunc_aes_mul_gf2p2__621__Vfuncout = __Vfunc_aes_mul_gf2p2__621__f;
    __Vfunc_aes_mul_gf2p4__618__c = __Vfunc_aes_mul_gf2p2__621__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__622__g = __Vfunc_aes_mul_gf2p4__618__b;
    __Vfunc_aes_scale_omega2_gf2p2__622__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__622__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__622__g)));
    __Vfunc_aes_scale_omega2_gf2p2__622__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__622__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__618__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__618__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__618__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__622__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__623__g = __Vfunc_aes_mul_gf2p4__618__b;
    __Vfunc_aes_scale_omega2_gf2p2__623__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__623__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__623__g)));
    __Vfunc_aes_scale_omega2_gf2p2__623__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__623__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__618__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__618__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__618__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__623__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__618__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__618__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__618__Vfuncout;
    __Vfunc_aes_mul_gf2p4__624__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__624__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                 >> 0xcU));
    __Vfunc_aes_mul_gf2p2__625__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__624__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__625__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__624__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__625__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__625__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__625__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__625__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__625__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__625__d)));
    __Vfunc_aes_mul_gf2p2__625__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__625__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__625__d)));
    __Vfunc_aes_mul_gf2p2__625__f = ((((IData)(__Vfunc_aes_mul_gf2p2__625__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__625__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__625__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__625__b)));
    __Vfunc_aes_mul_gf2p2__625__Vfuncout = __Vfunc_aes_mul_gf2p2__625__f;
    __Vfunc_aes_mul_gf2p4__624__a = __Vfunc_aes_mul_gf2p2__625__Vfuncout;
    __Vfunc_aes_mul_gf2p2__626__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__624__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__624__delta)));
    __Vfunc_aes_mul_gf2p2__626__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__624__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__624__gamma)));
    __Vfunc_aes_mul_gf2p2__626__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__626__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__626__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__626__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__626__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__626__d)));
    __Vfunc_aes_mul_gf2p2__626__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__626__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__626__d)));
    __Vfunc_aes_mul_gf2p2__626__f = ((((IData)(__Vfunc_aes_mul_gf2p2__626__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__626__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__626__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__626__b)));
    __Vfunc_aes_mul_gf2p2__626__Vfuncout = __Vfunc_aes_mul_gf2p2__626__f;
    __Vfunc_aes_mul_gf2p4__624__b = __Vfunc_aes_mul_gf2p2__626__Vfuncout;
    __Vfunc_aes_mul_gf2p2__627__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__624__delta));
    __Vfunc_aes_mul_gf2p2__627__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__624__gamma));
    __Vfunc_aes_mul_gf2p2__627__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__627__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__627__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__627__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__627__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__627__d)));
    __Vfunc_aes_mul_gf2p2__627__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__627__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__627__d)));
    __Vfunc_aes_mul_gf2p2__627__f = ((((IData)(__Vfunc_aes_mul_gf2p2__627__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__627__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__627__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__627__b)));
    __Vfunc_aes_mul_gf2p2__627__Vfuncout = __Vfunc_aes_mul_gf2p2__627__f;
    __Vfunc_aes_mul_gf2p4__624__c = __Vfunc_aes_mul_gf2p2__627__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__628__g = __Vfunc_aes_mul_gf2p4__624__b;
    __Vfunc_aes_scale_omega2_gf2p2__628__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__628__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__628__g)));
    __Vfunc_aes_scale_omega2_gf2p2__628__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__628__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__624__theta = ((3U 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__624__theta)) 
                                                 | (((IData)(__Vfunc_aes_mul_gf2p4__624__a) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__628__Vfuncout)) 
                                                    << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__629__g = __Vfunc_aes_mul_gf2p4__624__b;
    __Vfunc_aes_scale_omega2_gf2p2__629__d = ((2U & 
                                               ((IData)(__Vfunc_aes_scale_omega2_gf2p2__629__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__629__g)));
    __Vfunc_aes_scale_omega2_gf2p2__629__Vfuncout = __Vfunc_aes_scale_omega2_gf2p2__629__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__624__theta = ((0xcU 
                                                  & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__624__theta)) 
                                                 | ((IData)(__Vfunc_aes_mul_gf2p4__624__c) 
                                                    ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__629__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__624__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__624__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__624__Vfuncout;
    __Vfunc_aes_mul_gf2p4__642__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__642__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p2__643__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__642__delta) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__643__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__642__gamma) 
                                           >> 2U));
    __Vfunc_aes_mul_gf2p2__643__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__643__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__643__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__643__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__643__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__643__d)));
    __Vfunc_aes_mul_gf2p2__643__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__643__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__643__d)));
    __Vfunc_aes_mul_gf2p2__643__f = ((((IData)(__Vfunc_aes_mul_gf2p2__643__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__643__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__643__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__643__b)));
    __Vfunc_aes_mul_gf2p2__643__Vfuncout = __Vfunc_aes_mul_gf2p2__643__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__642__a = __Vfunc_aes_mul_gf2p2__643__Vfuncout;
    __Vfunc_aes_mul_gf2p2__644__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__642__delta) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__642__delta)));
    __Vfunc_aes_mul_gf2p2__644__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__642__gamma) 
                                            >> 2U) 
                                           ^ (IData)(__Vfunc_aes_mul_gf2p4__642__gamma)));
    __Vfunc_aes_mul_gf2p2__644__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__644__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__644__d)) 
                                           >> 1U));
    __Vfunc_aes_mul_gf2p2__644__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__644__g) 
                                           & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__644__d)));
    __Vfunc_aes_mul_gf2p2__644__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__644__g) 
                                           & (IData)(__Vfunc_aes_mul_gf2p2__644__d)));
    __Vfunc_aes_mul_gf2p2__644__f = ((((IData)(__Vfunc_aes_mul_gf2p2__644__a) 
                                       ^ (IData)(__Vfunc_aes_mul_gf2p2__644__b)) 
                                      << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__644__c) 
                                                ^ (IData)(__Vfunc_aes_mul_gf2p2__644__b)));
    __Vfunc_aes_mul_gf2p2__644__Vfuncout = __Vfunc_aes_mul_gf2p2__644__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__642__b = __Vfunc_aes_mul_gf2p2__644__Vfuncout;
    __Vfunc_aes_mul_gf2p2__645__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__642__delta));
    __Vfunc_aes_mul_gf2p2__645__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__642__gamma));
    vlSelf->__Vfunc_aes_mul_gf2p2__645__a = (1U & (
                                                   ((IData)(__Vfunc_aes_mul_gf2p2__645__g) 
                                                    & (IData)(__Vfunc_aes_mul_gf2p2__645__d)) 
                                                   >> 1U));
    vlSelf->__Vfunc_aes_mul_gf2p2__645__b = (1U & (
                                                   VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__645__g) 
                                                   & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__645__d)));
    vlSelf->__Vfunc_aes_mul_gf2p2__645__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__645__g) 
                                                   & (IData)(__Vfunc_aes_mul_gf2p2__645__d)));
}
