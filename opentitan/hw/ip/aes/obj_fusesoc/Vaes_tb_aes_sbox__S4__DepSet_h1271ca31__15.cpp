// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__56(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__56\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1670__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1670__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1670__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1670__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1670__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1670__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1671__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1671__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1671__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1671__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1671__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1671__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1671__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1672__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1672__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1672__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1672__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1672__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1672__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1672__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1673__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1673__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1673__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1673__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1673__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1673__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1673__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1674__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1674__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1674__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1675__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1675__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1675__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1676__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1676__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1676__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1676__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1676__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1676__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1677__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1677__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1677__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1677__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1677__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1677__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1677__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1678__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1678__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1678__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1678__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1678__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1678__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1678__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1679__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1679__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1679__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1679__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1679__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1679__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1679__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1680__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1680__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1680__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1681__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1681__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1681__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1700__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1700__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1700__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1700__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1700__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1700__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1700__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1701__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1701__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1701__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1701__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1701__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1701__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1701__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1704__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1704__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1704__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1704__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1704__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1704__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1704__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1705__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1705__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1705__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1705__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1705__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1705__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1705__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1708__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1708__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1708__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1708__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1708__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1708__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1708__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1709__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1709__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1709__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1709__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1709__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1709__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1709__c;
    // Body
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
        = ((0xff00000U & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[0xdU] 
                          << 0x10U)) | ((0xf0000U & 
                                         (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[0xdU] 
                                          << 4U)) | 
                                        ((0xff00U & 
                                          (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[0xdU] 
                                           >> 8U)) 
                                         | (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[0xdU] 
                                            >> 0x18U))));
    __Vfunc_aes_mul_gf2p2__1700__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0x10U));
    __Vfunc_aes_mul_gf2p2__1700__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1700__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1700__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1700__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1700__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1700__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1700__d)));
    __Vfunc_aes_mul_gf2p2__1700__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1700__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1700__d)));
    __Vfunc_aes_mul_gf2p2__1700__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1700__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1700__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1700__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1700__b)));
    __Vfunc_aes_mul_gf2p2__1700__Vfuncout = __Vfunc_aes_mul_gf2p2__1700__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1700__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1701__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0x10U));
    __Vfunc_aes_mul_gf2p2__1701__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1701__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1701__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1701__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1701__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1701__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1701__d)));
    __Vfunc_aes_mul_gf2p2__1701__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1701__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1701__d)));
    __Vfunc_aes_mul_gf2p2__1701__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1701__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1701__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1701__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1701__b)));
    __Vfunc_aes_mul_gf2p2__1701__Vfuncout = __Vfunc_aes_mul_gf2p2__1701__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1701__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1704__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1704__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1704__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1704__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1704__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1704__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1704__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1704__d)));
    __Vfunc_aes_mul_gf2p2__1704__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1704__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1704__d)));
    __Vfunc_aes_mul_gf2p2__1704__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1704__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1704__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1704__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1704__b)));
    __Vfunc_aes_mul_gf2p2__1704__Vfuncout = __Vfunc_aes_mul_gf2p2__1704__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1704__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1705__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1705__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1705__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1705__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1705__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1705__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1705__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1705__d)));
    __Vfunc_aes_mul_gf2p2__1705__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1705__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1705__d)));
    __Vfunc_aes_mul_gf2p2__1705__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1705__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1705__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1705__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1705__b)));
    __Vfunc_aes_mul_gf2p2__1705__Vfuncout = __Vfunc_aes_mul_gf2p2__1705__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1705__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1670__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                  >> 0x14U));
    __Vfunc_aes_mul_gf2p4__1670__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1671__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1670__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1671__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1670__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1671__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1671__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1671__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1671__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1671__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1671__d)));
    __Vfunc_aes_mul_gf2p2__1671__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1671__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1671__d)));
    __Vfunc_aes_mul_gf2p2__1671__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1671__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1671__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1671__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1671__b)));
    __Vfunc_aes_mul_gf2p2__1671__Vfuncout = __Vfunc_aes_mul_gf2p2__1671__f;
    __Vfunc_aes_mul_gf2p4__1670__a = __Vfunc_aes_mul_gf2p2__1671__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1672__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1670__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1670__delta)));
    __Vfunc_aes_mul_gf2p2__1672__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1670__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1670__gamma)));
    __Vfunc_aes_mul_gf2p2__1672__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1672__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1672__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1672__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1672__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1672__d)));
    __Vfunc_aes_mul_gf2p2__1672__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1672__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1672__d)));
    __Vfunc_aes_mul_gf2p2__1672__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1672__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1672__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1672__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1672__b)));
    __Vfunc_aes_mul_gf2p2__1672__Vfuncout = __Vfunc_aes_mul_gf2p2__1672__f;
    __Vfunc_aes_mul_gf2p4__1670__b = __Vfunc_aes_mul_gf2p2__1672__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1673__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1670__delta));
    __Vfunc_aes_mul_gf2p2__1673__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1670__gamma));
    __Vfunc_aes_mul_gf2p2__1673__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1673__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1673__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1673__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1673__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1673__d)));
    __Vfunc_aes_mul_gf2p2__1673__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1673__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1673__d)));
    __Vfunc_aes_mul_gf2p2__1673__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1673__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1673__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1673__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1673__b)));
    __Vfunc_aes_mul_gf2p2__1673__Vfuncout = __Vfunc_aes_mul_gf2p2__1673__f;
    __Vfunc_aes_mul_gf2p4__1670__c = __Vfunc_aes_mul_gf2p2__1673__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1674__g = __Vfunc_aes_mul_gf2p4__1670__b;
    __Vfunc_aes_scale_omega2_gf2p2__1674__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1674__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1674__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1674__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1674__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1670__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1670__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1670__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1674__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1675__g = __Vfunc_aes_mul_gf2p4__1670__b;
    __Vfunc_aes_scale_omega2_gf2p2__1675__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1675__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1675__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1675__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1675__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1670__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1670__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1670__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1675__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1670__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1670__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__1670__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1676__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                  >> 0x14U));
    __Vfunc_aes_mul_gf2p4__1676__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1677__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1676__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1677__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1676__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1677__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1677__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1677__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1677__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1677__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1677__d)));
    __Vfunc_aes_mul_gf2p2__1677__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1677__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1677__d)));
    __Vfunc_aes_mul_gf2p2__1677__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1677__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1677__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1677__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1677__b)));
    __Vfunc_aes_mul_gf2p2__1677__Vfuncout = __Vfunc_aes_mul_gf2p2__1677__f;
    __Vfunc_aes_mul_gf2p4__1676__a = __Vfunc_aes_mul_gf2p2__1677__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1678__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1676__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1676__delta)));
    __Vfunc_aes_mul_gf2p2__1678__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1676__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1676__gamma)));
    __Vfunc_aes_mul_gf2p2__1678__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1678__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1678__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1678__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1678__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1678__d)));
    __Vfunc_aes_mul_gf2p2__1678__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1678__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1678__d)));
    __Vfunc_aes_mul_gf2p2__1678__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1678__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1678__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1678__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1678__b)));
    __Vfunc_aes_mul_gf2p2__1678__Vfuncout = __Vfunc_aes_mul_gf2p2__1678__f;
    __Vfunc_aes_mul_gf2p4__1676__b = __Vfunc_aes_mul_gf2p2__1678__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1679__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1676__delta));
    __Vfunc_aes_mul_gf2p2__1679__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1676__gamma));
    __Vfunc_aes_mul_gf2p2__1679__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1679__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1679__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1679__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1679__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1679__d)));
    __Vfunc_aes_mul_gf2p2__1679__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1679__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1679__d)));
    __Vfunc_aes_mul_gf2p2__1679__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1679__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1679__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1679__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1679__b)));
    __Vfunc_aes_mul_gf2p2__1679__Vfuncout = __Vfunc_aes_mul_gf2p2__1679__f;
    __Vfunc_aes_mul_gf2p4__1676__c = __Vfunc_aes_mul_gf2p2__1679__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1680__g = __Vfunc_aes_mul_gf2p4__1676__b;
    __Vfunc_aes_scale_omega2_gf2p2__1680__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1680__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1680__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1680__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1680__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1676__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1676__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1676__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1680__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1681__g = __Vfunc_aes_mul_gf2p4__1676__b;
    __Vfunc_aes_scale_omega2_gf2p2__1681__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1681__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1681__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1681__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1681__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1676__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1676__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1676__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1681__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1676__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1676__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__1676__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1708__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1708__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1708__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1708__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1708__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1708__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1708__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1708__d)));
    __Vfunc_aes_mul_gf2p2__1708__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1708__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1708__d)));
    __Vfunc_aes_mul_gf2p2__1708__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1708__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1708__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1708__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1708__b)));
    __Vfunc_aes_mul_gf2p2__1708__Vfuncout = __Vfunc_aes_mul_gf2p2__1708__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1708__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1709__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1709__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i));
    __Vfunc_aes_mul_gf2p2__1709__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1709__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1709__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1709__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1709__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1709__d)));
    __Vfunc_aes_mul_gf2p2__1709__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1709__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1709__d)));
    __Vfunc_aes_mul_gf2p2__1709__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1709__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1709__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1709__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1709__b)));
    __Vfunc_aes_mul_gf2p2__1709__Vfuncout = __Vfunc_aes_mul_gf2p2__1709__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1709__Vfuncout;
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

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__91(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__91\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__1650__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1650__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1650__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1651__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1651__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1651__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1652__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1652__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1652__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1653__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1653__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1653__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1654__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1654__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1654__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1655__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1655__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1655__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1656__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1656__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1656__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1657__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1657__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1657__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1658__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1658__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1658__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1659__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1659__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1659__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1660__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1660__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1660__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1661__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1661__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1661__vec_c;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1663__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1663__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1663__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1664__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1664__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1664__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1665__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1665__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1665__d;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1667__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1667__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1667__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1668__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1668__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1668__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1669__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1669__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1669__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1682__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1682__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1682__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1682__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1682__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1682__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1683__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1683__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1683__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1683__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1683__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1683__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1683__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1684__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1684__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1684__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1684__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1684__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1684__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1684__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1685__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1685__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1685__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1685__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1685__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1685__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1685__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1686__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1686__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1686__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1687__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1687__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1687__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1688__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1688__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1688__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1688__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1688__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1688__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1689__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1689__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1689__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1689__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1689__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1689__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1689__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1690__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1690__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1690__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1690__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1690__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1690__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1690__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1691__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1691__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1691__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1691__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1691__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1691__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1691__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1692__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1692__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1692__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1693__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1693__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1693__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1694__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1694__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1694__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1695__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1695__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1695__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1696__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1696__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1696__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1697__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1697__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1697__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1702__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1702__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1702__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1702__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1702__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1702__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1702__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1703__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1703__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1703__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1703__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1703__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1703__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1703__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1706__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1706__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1706__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1706__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1706__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1706__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1706__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1707__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1707__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1707__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1707__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1707__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1707__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1707__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1710__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1710__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1710__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1710__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1710__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1710__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1710__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1711__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1711__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1711__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1711__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1711__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1711__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1711__c;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1718__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1718__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1718__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1718__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1718__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1718__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1719__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1719__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1719__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1719__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1719__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1719__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1719__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1720__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1720__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1720__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1720__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1720__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1720__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1720__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1721__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1721__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1721__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1721__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1721__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1721__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1721__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1722__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1722__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1722__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1723__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1723__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1723__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1724__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1724__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1724__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1724__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1724__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1724__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1725__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1725__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1725__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1725__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1725__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1725__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1725__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1726__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1726__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1726__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1726__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1726__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1726__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1726__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1727__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1727__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1727__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1727__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1727__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1727__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1727__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1728__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1728__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1728__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1729__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1729__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1729__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1742__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1742__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1743__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1743__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1743__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1743__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1743__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1743__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1743__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1744__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1744__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1744__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1744__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1744__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1744__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1744__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1745__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1745__d;
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
    vlSelf->__Vfunc_aes_mvm__1652__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1652__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1652__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1652__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1652__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1652__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1652__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1652__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1652__vec_b = (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                    [0U][3U] >> 0x18U);
    __Vfunc_aes_mvm__1652__vec_c = 0U;
    __Vfunc_aes_mvm__1652__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1652__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1652__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1652__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1652__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1652__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1652__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1652__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1652__vec_b)))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1652__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1652__vec_b)))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1652__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1652__vec_b)))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1652__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1652__vec_b)))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1652__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1652__vec_b)))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1652__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1652__vec_b)))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1652__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1652__vec_b)))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1652__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1652__vec_b)))));
    __Vfunc_aes_mvm__1652__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1652__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1652__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1652__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1652__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1652__Vfuncout = __Vfunc_aes_mvm__1652__vec_c;
    vlSelf->__Vfunc_aes_mvm__1651__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1651__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__1651__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__1651__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__1651__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__1651__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1651__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__1651__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__1651__vec_b = (0xffU & (0x63U 
                                             ^ ((vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                 [0U][3U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                   [0U][3U] 
                                                   >> 0x18U))));
    __Vfunc_aes_mvm__1651__vec_c = 0U;
    __Vfunc_aes_mvm__1651__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1651__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1651__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1651__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1651__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1651__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1651__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1651__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1651__vec_b)))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1651__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1651__vec_b)))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1651__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1651__vec_b)))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1651__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1651__vec_b)))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1651__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1651__vec_b)))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1651__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1651__vec_b)))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1651__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1651__vec_b)))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1651__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1651__vec_b)))));
    __Vfunc_aes_mvm__1651__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1651__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1651__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1651__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1651__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1651__Vfuncout = __Vfunc_aes_mvm__1651__vec_c;
    vlSelf->__Vfunc_aes_mvm__1650__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1650__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1650__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1650__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1650__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1650__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1650__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1650__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1650__vec_b = (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                    [0U][3U] >> 0x18U);
    __Vfunc_aes_mvm__1650__vec_c = 0U;
    __Vfunc_aes_mvm__1650__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1650__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1650__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1650__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1650__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1650__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1650__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1650__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1650__vec_b)))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1650__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1650__vec_b)))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1650__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1650__vec_b)))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1650__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1650__vec_b)))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1650__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1650__vec_b)))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1650__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1650__vec_b)))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1650__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1650__vec_b)))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1650__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1650__vec_b)))));
    __Vfunc_aes_mvm__1650__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1650__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1650__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1650__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1650__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1650__Vfuncout = __Vfunc_aes_mvm__1650__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__1650__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__1651__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__1652__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__1655__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1655__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1655__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1655__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1655__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1655__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1655__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1655__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1655__vec_b = (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                    [1U][3U] >> 0x18U);
    __Vfunc_aes_mvm__1655__vec_c = 0U;
    __Vfunc_aes_mvm__1655__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1655__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1655__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1655__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1655__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1655__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1655__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1655__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1655__vec_b)))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1655__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1655__vec_b)))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1655__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1655__vec_b)))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1655__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1655__vec_b)))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1655__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1655__vec_b)))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1655__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1655__vec_b)))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1655__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1655__vec_b)))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1655__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1655__vec_b)))));
    __Vfunc_aes_mvm__1655__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1655__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1655__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1655__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1655__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1655__Vfuncout = __Vfunc_aes_mvm__1655__vec_c;
    vlSelf->__Vfunc_aes_mvm__1654__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1654__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__1654__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__1654__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__1654__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__1654__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1654__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__1654__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__1654__vec_b = (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                    [1U][3U] >> 0x18U);
    __Vfunc_aes_mvm__1654__vec_c = 0U;
    __Vfunc_aes_mvm__1654__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1654__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1654__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1654__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1654__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1654__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1654__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1654__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1654__vec_b)))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1654__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1654__vec_b)))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1654__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1654__vec_b)))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1654__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1654__vec_b)))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1654__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1654__vec_b)))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1654__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1654__vec_b)))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1654__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1654__vec_b)))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1654__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1654__vec_b)))));
    __Vfunc_aes_mvm__1654__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1654__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1654__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1654__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1654__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1654__Vfuncout = __Vfunc_aes_mvm__1654__vec_c;
    vlSelf->__Vfunc_aes_mvm__1653__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1653__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1653__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1653__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1653__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1653__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1653__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1653__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1653__vec_b = (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                    [1U][3U] >> 0x18U);
    __Vfunc_aes_mvm__1653__vec_c = 0U;
    __Vfunc_aes_mvm__1653__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1653__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1653__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1653__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1653__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1653__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1653__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1653__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1653__vec_b)))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1653__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1653__vec_b)))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1653__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1653__vec_b)))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1653__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1653__vec_b)))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1653__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1653__vec_b)))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1653__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1653__vec_b)))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1653__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1653__vec_b)))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1653__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1653__vec_b)))));
    __Vfunc_aes_mvm__1653__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1653__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1653__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1653__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1653__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1653__Vfuncout = __Vfunc_aes_mvm__1653__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__1653__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__1654__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__1655__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1662__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1662__gamma)));
    __Vfunc_aes_square_gf2p2__1663__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1662__gamma));
    __Vfunc_aes_square_gf2p2__1663__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1663__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1663__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1663__Vfuncout = __Vfunc_aes_square_gf2p2__1663__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__b = __Vfunc_aes_square_gf2p2__1663__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__1665__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__b;
    __Vfunc_aes_scale_omega_gf2p2__1665__d = ((2U & 
                                               (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__1665__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_aes_scale_omega_gf2p2__1665__g) 
                                                    >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__1665__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__1665__d;
    __Vfunc_aes_square_gf2p2__1664__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__a;
    __Vfunc_aes_square_gf2p2__1664__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1664__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1664__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1664__Vfuncout = __Vfunc_aes_square_gf2p2__1664__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__1664__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__1665__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1662__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1666__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1666__gamma)));
    __Vfunc_aes_square_gf2p2__1667__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1666__gamma));
    __Vfunc_aes_square_gf2p2__1667__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1667__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1667__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1667__Vfuncout = __Vfunc_aes_square_gf2p2__1667__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__b = __Vfunc_aes_square_gf2p2__1667__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__1669__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__b;
    __Vfunc_aes_scale_omega_gf2p2__1669__d = ((2U & 
                                               (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__1669__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_aes_scale_omega_gf2p2__1669__g) 
                                                    >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__1669__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__1669__d;
    __Vfunc_aes_square_gf2p2__1668__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__a;
    __Vfunc_aes_square_gf2p2__1668__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1668__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1668__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1668__Vfuncout = __Vfunc_aes_square_gf2p2__1668__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__1668__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__1669__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1666__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__1682__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p4__1682__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1683__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1682__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1683__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1682__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1683__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1683__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1683__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1683__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1683__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1683__d)));
    __Vfunc_aes_mul_gf2p2__1683__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1683__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1683__d)));
    __Vfunc_aes_mul_gf2p2__1683__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1683__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1683__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1683__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1683__b)));
    __Vfunc_aes_mul_gf2p2__1683__Vfuncout = __Vfunc_aes_mul_gf2p2__1683__f;
    __Vfunc_aes_mul_gf2p4__1682__a = __Vfunc_aes_mul_gf2p2__1683__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1684__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1682__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1682__delta)));
    __Vfunc_aes_mul_gf2p2__1684__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1682__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1682__gamma)));
    __Vfunc_aes_mul_gf2p2__1684__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1684__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1684__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1684__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1684__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1684__d)));
    __Vfunc_aes_mul_gf2p2__1684__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1684__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1684__d)));
    __Vfunc_aes_mul_gf2p2__1684__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1684__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1684__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1684__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1684__b)));
    __Vfunc_aes_mul_gf2p2__1684__Vfuncout = __Vfunc_aes_mul_gf2p2__1684__f;
    __Vfunc_aes_mul_gf2p4__1682__b = __Vfunc_aes_mul_gf2p2__1684__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1685__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1682__delta));
    __Vfunc_aes_mul_gf2p2__1685__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1682__gamma));
    __Vfunc_aes_mul_gf2p2__1685__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1685__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1685__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1685__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1685__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1685__d)));
    __Vfunc_aes_mul_gf2p2__1685__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1685__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1685__d)));
    __Vfunc_aes_mul_gf2p2__1685__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1685__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1685__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1685__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1685__b)));
    __Vfunc_aes_mul_gf2p2__1685__Vfuncout = __Vfunc_aes_mul_gf2p2__1685__f;
    __Vfunc_aes_mul_gf2p4__1682__c = __Vfunc_aes_mul_gf2p2__1685__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1686__g = __Vfunc_aes_mul_gf2p4__1682__b;
    __Vfunc_aes_scale_omega2_gf2p2__1686__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1686__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1686__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1686__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1686__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1682__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1682__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1682__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1686__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1687__g = __Vfunc_aes_mul_gf2p4__1682__b;
    __Vfunc_aes_scale_omega2_gf2p2__1687__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1687__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1687__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1687__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1687__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1682__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1682__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1682__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1687__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1682__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1682__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__1682__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1688__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p4__1688__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1689__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1688__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1689__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1688__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1689__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1689__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1689__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1689__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1689__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1689__d)));
    __Vfunc_aes_mul_gf2p2__1689__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1689__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1689__d)));
    __Vfunc_aes_mul_gf2p2__1689__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1689__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1689__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1689__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1689__b)));
    __Vfunc_aes_mul_gf2p2__1689__Vfuncout = __Vfunc_aes_mul_gf2p2__1689__f;
    __Vfunc_aes_mul_gf2p4__1688__a = __Vfunc_aes_mul_gf2p2__1689__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1690__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1688__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1688__delta)));
    __Vfunc_aes_mul_gf2p2__1690__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1688__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1688__gamma)));
    __Vfunc_aes_mul_gf2p2__1690__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1690__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1690__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1690__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1690__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1690__d)));
    __Vfunc_aes_mul_gf2p2__1690__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1690__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1690__d)));
    __Vfunc_aes_mul_gf2p2__1690__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1690__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1690__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1690__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1690__b)));
    __Vfunc_aes_mul_gf2p2__1690__Vfuncout = __Vfunc_aes_mul_gf2p2__1690__f;
    __Vfunc_aes_mul_gf2p4__1688__b = __Vfunc_aes_mul_gf2p2__1690__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1691__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1688__delta));
    __Vfunc_aes_mul_gf2p2__1691__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1688__gamma));
    __Vfunc_aes_mul_gf2p2__1691__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1691__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1691__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1691__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1691__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1691__d)));
    __Vfunc_aes_mul_gf2p2__1691__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1691__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1691__d)));
    __Vfunc_aes_mul_gf2p2__1691__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1691__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1691__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1691__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1691__b)));
    __Vfunc_aes_mul_gf2p2__1691__Vfuncout = __Vfunc_aes_mul_gf2p2__1691__f;
    __Vfunc_aes_mul_gf2p4__1688__c = __Vfunc_aes_mul_gf2p2__1691__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1692__g = __Vfunc_aes_mul_gf2p4__1688__b;
    __Vfunc_aes_scale_omega2_gf2p2__1692__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1692__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1692__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1692__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1692__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1688__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1688__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1688__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1692__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1693__g = __Vfunc_aes_mul_gf2p4__1688__b;
    __Vfunc_aes_scale_omega2_gf2p2__1693__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1693__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1693__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1693__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1693__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1688__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1688__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1688__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1693__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1688__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1688__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__1688__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1706__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1706__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1706__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1706__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1706__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1706__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1706__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1706__d)));
    __Vfunc_aes_mul_gf2p2__1706__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1706__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1706__d)));
    __Vfunc_aes_mul_gf2p2__1706__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1706__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1706__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1706__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1706__b)));
    __Vfunc_aes_mul_gf2p2__1706__Vfuncout = __Vfunc_aes_mul_gf2p2__1706__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1706__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1707__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1707__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1707__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1707__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1707__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1707__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1707__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1707__d)));
    __Vfunc_aes_mul_gf2p2__1707__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1707__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1707__d)));
    __Vfunc_aes_mul_gf2p2__1707__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1707__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1707__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1707__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1707__b)));
    __Vfunc_aes_mul_gf2p2__1707__Vfuncout = __Vfunc_aes_mul_gf2p2__1707__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1707__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1710__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1710__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1710__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1710__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1710__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1710__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1710__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1710__d)));
    __Vfunc_aes_mul_gf2p2__1710__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1710__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1710__d)));
    __Vfunc_aes_mul_gf2p2__1710__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1710__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1710__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1710__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1710__b)));
    __Vfunc_aes_mul_gf2p2__1710__Vfuncout = __Vfunc_aes_mul_gf2p2__1710__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1710__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1711__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1711__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__1711__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1711__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1711__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1711__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1711__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1711__d)));
    __Vfunc_aes_mul_gf2p2__1711__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1711__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1711__d)));
    __Vfunc_aes_mul_gf2p2__1711__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1711__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1711__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1711__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1711__b)));
    __Vfunc_aes_mul_gf2p2__1711__Vfuncout = __Vfunc_aes_mul_gf2p2__1711__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1711__Vfuncout;
    vlSelf->__Vfunc_aes_mvm__1661__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1661__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1661__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1661__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1661__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1661__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1661__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1661__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1661__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1661__vec_c = 0U;
    __Vfunc_aes_mvm__1661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1661__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1661__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1661__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1661__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1661__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1661__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1661__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1661__vec_b)))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1661__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1661__vec_b)))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1661__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1661__vec_b)))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1661__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1661__vec_b)))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1661__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1661__vec_b)))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1661__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1661__vec_b)))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1661__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1661__vec_b)))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1661__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1661__vec_b)))));
    __Vfunc_aes_mvm__1661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1661__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1661__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1661__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1661__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1661__Vfuncout = __Vfunc_aes_mvm__1661__vec_c;
    vlSelf->__Vfunc_aes_mvm__1660__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__1660__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__1660__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__1660__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1660__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__1660__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__1660__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__1660__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__1660__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1660__vec_c = 0U;
    __Vfunc_aes_mvm__1660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1660__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1660__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1660__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1660__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1660__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1660__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1660__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1660__vec_b)))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1660__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1660__vec_b)))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1660__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1660__vec_b)))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1660__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1660__vec_b)))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1660__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1660__vec_b)))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1660__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1660__vec_b)))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1660__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1660__vec_b)))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1660__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1660__vec_b)))));
    __Vfunc_aes_mvm__1660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1660__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1660__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1660__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1660__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1660__Vfuncout = __Vfunc_aes_mvm__1660__vec_c;
    vlSelf->__Vfunc_aes_mvm__1659__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1659__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1659__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1659__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1659__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1659__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1659__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1659__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1659__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1659__vec_c = 0U;
    __Vfunc_aes_mvm__1659__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1659__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1659__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1659__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1659__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1659__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1659__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1659__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1659__vec_b)))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1659__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1659__vec_b)))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1659__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1659__vec_b)))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1659__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1659__vec_b)))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1659__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1659__vec_b)))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1659__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1659__vec_b)))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1659__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1659__vec_b)))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1659__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1659__vec_b)))));
    __Vfunc_aes_mvm__1659__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1659__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1659__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1659__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1659__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1659__Vfuncout = __Vfunc_aes_mvm__1659__vec_c;
    vlSelf->mask_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (IData)(__Vfunc_aes_mvm__1659__Vfuncout)
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__1660__Vfuncout)
                           : (IData)(__Vfunc_aes_mvm__1661__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__1658__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1658__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1658__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1658__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1658__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1658__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1658__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1658__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1658__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1658__vec_c = 0U;
    __Vfunc_aes_mvm__1658__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1658__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1658__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1658__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1658__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1658__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1658__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1658__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1658__vec_b)))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1658__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1658__vec_b)))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1658__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1658__vec_b)))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1658__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1658__vec_b)))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1658__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1658__vec_b)))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1658__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1658__vec_b)))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1658__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1658__vec_b)))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1658__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1658__vec_b)))));
    __Vfunc_aes_mvm__1658__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1658__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1658__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1658__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1658__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1658__Vfuncout = __Vfunc_aes_mvm__1658__vec_c;
    vlSelf->__Vfunc_aes_mvm__1657__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__1657__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__1657__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__1657__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1657__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__1657__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__1657__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__1657__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__1657__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1657__vec_c = 0U;
    __Vfunc_aes_mvm__1657__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1657__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1657__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1657__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1657__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1657__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1657__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1657__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1657__vec_b)))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1657__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1657__vec_b)))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1657__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1657__vec_b)))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1657__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1657__vec_b)))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1657__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1657__vec_b)))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1657__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1657__vec_b)))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1657__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1657__vec_b)))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1657__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1657__vec_b)))));
    __Vfunc_aes_mvm__1657__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1657__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1657__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1657__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1657__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1657__Vfuncout = __Vfunc_aes_mvm__1657__vec_c;
    vlSelf->__Vfunc_aes_mvm__1656__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1656__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1656__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1656__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1656__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1656__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1656__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1656__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1656__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1656__vec_c = 0U;
    __Vfunc_aes_mvm__1656__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1656__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1656__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1656__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1656__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1656__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1656__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1656__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1656__vec_b)))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1656__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1656__vec_b)))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1656__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1656__vec_b)))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1656__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1656__vec_b)))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1656__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1656__vec_b)))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1656__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1656__vec_b)))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1656__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1656__vec_b)))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1656__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1656__vec_b)))));
    __Vfunc_aes_mvm__1656__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1656__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1656__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1656__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1656__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1656__Vfuncout = __Vfunc_aes_mvm__1656__vec_c;
    vlSelf->data_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (0x63U ^ (IData)(__Vfunc_aes_mvm__1656__Vfuncout))
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__1657__Vfuncout)
                           : (0x63U ^ (IData)(__Vfunc_aes_mvm__1658__Vfuncout))));
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
    __Vfunc_aes_mul_gf2p2__1702__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1702__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1702__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1702__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1702__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1702__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1702__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1702__d)));
    __Vfunc_aes_mul_gf2p2__1702__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1702__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1702__d)));
    __Vfunc_aes_mul_gf2p2__1702__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1702__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1702__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1702__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1702__b)));
    __Vfunc_aes_mul_gf2p2__1702__Vfuncout = __Vfunc_aes_mul_gf2p2__1702__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1702__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1703__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1703__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1703__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1703__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1703__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1703__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1703__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1703__d)));
    __Vfunc_aes_mul_gf2p2__1703__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1703__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1703__d)));
    __Vfunc_aes_mul_gf2p2__1703__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1703__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1703__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1703__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1703__b)));
    __Vfunc_aes_mul_gf2p2__1703__Vfuncout = __Vfunc_aes_mul_gf2p2__1703__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1703__Vfuncout;
    __Vfunc_aes_square_gf2p2__1695__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                  >> 4U)));
    __Vfunc_aes_square_gf2p2__1695__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1695__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1695__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1695__Vfuncout = __Vfunc_aes_square_gf2p2__1695__d;
    __Vfunc_aes_scale_omega2_gf2p2__1694__g = __Vfunc_aes_square_gf2p2__1695__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1694__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1694__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1694__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1694__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1694__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1694__Vfuncout;
    __Vfunc_aes_square_gf2p2__1697__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                >> 2U) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i)));
    __Vfunc_aes_square_gf2p2__1697__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1697__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1697__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1697__Vfuncout = __Vfunc_aes_square_gf2p2__1697__d;
    __Vfunc_aes_scale_omega2_gf2p2__1696__g = __Vfunc_aes_square_gf2p2__1697__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1696__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1696__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1696__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1696__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1696__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1696__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1718__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1718__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1719__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1718__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1719__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1718__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1719__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1719__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1719__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1719__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1719__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1719__d)));
    __Vfunc_aes_mul_gf2p2__1719__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1719__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1719__d)));
    __Vfunc_aes_mul_gf2p2__1719__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1719__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1719__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1719__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1719__b)));
    __Vfunc_aes_mul_gf2p2__1719__Vfuncout = __Vfunc_aes_mul_gf2p2__1719__f;
    __Vfunc_aes_mul_gf2p4__1718__a = __Vfunc_aes_mul_gf2p2__1719__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1720__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1718__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1718__delta)));
    __Vfunc_aes_mul_gf2p2__1720__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1718__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1718__gamma)));
    __Vfunc_aes_mul_gf2p2__1720__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1720__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1720__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1720__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1720__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1720__d)));
    __Vfunc_aes_mul_gf2p2__1720__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1720__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1720__d)));
    __Vfunc_aes_mul_gf2p2__1720__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1720__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1720__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1720__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1720__b)));
    __Vfunc_aes_mul_gf2p2__1720__Vfuncout = __Vfunc_aes_mul_gf2p2__1720__f;
    __Vfunc_aes_mul_gf2p4__1718__b = __Vfunc_aes_mul_gf2p2__1720__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1721__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1718__delta));
    __Vfunc_aes_mul_gf2p2__1721__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1718__gamma));
    __Vfunc_aes_mul_gf2p2__1721__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1721__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1721__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1721__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1721__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1721__d)));
    __Vfunc_aes_mul_gf2p2__1721__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1721__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1721__d)));
    __Vfunc_aes_mul_gf2p2__1721__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1721__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1721__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1721__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1721__b)));
    __Vfunc_aes_mul_gf2p2__1721__Vfuncout = __Vfunc_aes_mul_gf2p2__1721__f;
    __Vfunc_aes_mul_gf2p4__1718__c = __Vfunc_aes_mul_gf2p2__1721__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1722__g = __Vfunc_aes_mul_gf2p4__1718__b;
    __Vfunc_aes_scale_omega2_gf2p2__1722__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1722__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1722__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1722__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1722__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1718__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1718__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1718__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1722__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1723__g = __Vfunc_aes_mul_gf2p4__1718__b;
    __Vfunc_aes_scale_omega2_gf2p2__1723__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1723__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1723__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1723__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1723__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1718__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1718__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1718__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1723__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1718__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1718__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1718__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1724__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1724__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1725__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1724__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1725__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1724__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1725__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1725__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1725__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1725__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1725__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1725__d)));
    __Vfunc_aes_mul_gf2p2__1725__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1725__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1725__d)));
    __Vfunc_aes_mul_gf2p2__1725__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1725__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1725__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1725__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1725__b)));
    __Vfunc_aes_mul_gf2p2__1725__Vfuncout = __Vfunc_aes_mul_gf2p2__1725__f;
    __Vfunc_aes_mul_gf2p4__1724__a = __Vfunc_aes_mul_gf2p2__1725__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1726__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1724__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1724__delta)));
    __Vfunc_aes_mul_gf2p2__1726__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1724__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1724__gamma)));
    __Vfunc_aes_mul_gf2p2__1726__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1726__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1726__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1726__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1726__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1726__d)));
    __Vfunc_aes_mul_gf2p2__1726__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1726__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1726__d)));
    __Vfunc_aes_mul_gf2p2__1726__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1726__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1726__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1726__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1726__b)));
    __Vfunc_aes_mul_gf2p2__1726__Vfuncout = __Vfunc_aes_mul_gf2p2__1726__f;
    __Vfunc_aes_mul_gf2p4__1724__b = __Vfunc_aes_mul_gf2p2__1726__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1727__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1724__delta));
    __Vfunc_aes_mul_gf2p2__1727__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1724__gamma));
    __Vfunc_aes_mul_gf2p2__1727__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1727__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1727__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1727__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1727__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1727__d)));
    __Vfunc_aes_mul_gf2p2__1727__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1727__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1727__d)));
    __Vfunc_aes_mul_gf2p2__1727__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1727__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1727__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1727__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1727__b)));
    __Vfunc_aes_mul_gf2p2__1727__Vfuncout = __Vfunc_aes_mul_gf2p2__1727__f;
    __Vfunc_aes_mul_gf2p4__1724__c = __Vfunc_aes_mul_gf2p2__1727__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1728__g = __Vfunc_aes_mul_gf2p4__1724__b;
    __Vfunc_aes_scale_omega2_gf2p2__1728__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1728__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1728__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1728__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1728__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1724__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1724__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1724__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1728__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1729__g = __Vfunc_aes_mul_gf2p4__1724__b;
    __Vfunc_aes_scale_omega2_gf2p2__1729__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1729__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1729__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1729__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1729__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1724__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1724__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1724__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1729__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1724__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1724__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1724__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1742__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1742__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p2__1743__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1742__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1743__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1742__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1743__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1743__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1743__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1743__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1743__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1743__d)));
    __Vfunc_aes_mul_gf2p2__1743__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1743__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1743__d)));
    __Vfunc_aes_mul_gf2p2__1743__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1743__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1743__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1743__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1743__b)));
    __Vfunc_aes_mul_gf2p2__1743__Vfuncout = __Vfunc_aes_mul_gf2p2__1743__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1742__a = __Vfunc_aes_mul_gf2p2__1743__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1744__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1742__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1742__delta)));
    __Vfunc_aes_mul_gf2p2__1744__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1742__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1742__gamma)));
    __Vfunc_aes_mul_gf2p2__1744__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1744__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1744__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1744__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1744__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1744__d)));
    __Vfunc_aes_mul_gf2p2__1744__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1744__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1744__d)));
    __Vfunc_aes_mul_gf2p2__1744__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1744__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1744__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1744__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1744__b)));
    __Vfunc_aes_mul_gf2p2__1744__Vfuncout = __Vfunc_aes_mul_gf2p2__1744__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1742__b = __Vfunc_aes_mul_gf2p2__1744__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1745__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1742__delta));
    __Vfunc_aes_mul_gf2p2__1745__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1742__gamma));
    vlSelf->__Vfunc_aes_mul_gf2p2__1745__a = (1U & 
                                              (((IData)(__Vfunc_aes_mul_gf2p2__1745__g) 
                                                & (IData)(__Vfunc_aes_mul_gf2p2__1745__d)) 
                                               >> 1U));
    vlSelf->__Vfunc_aes_mul_gf2p2__1745__b = (1U & 
                                              (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1745__g) 
                                               & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1745__d)));
    vlSelf->__Vfunc_aes_mul_gf2p2__1745__c = (1U & 
                                              ((IData)(__Vfunc_aes_mul_gf2p2__1745__g) 
                                               & (IData)(__Vfunc_aes_mul_gf2p2__1745__d)));
}
