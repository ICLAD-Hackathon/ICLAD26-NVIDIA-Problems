// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_ATTR_COLD void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i__60(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__gen_sbox__BRA__3__KET____DOT__u_aes_sbox_i__60\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2110__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2110__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2110__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2110__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2110__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2110__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2111__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2111__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2111__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2111__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2111__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2111__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2111__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2112__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2112__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2112__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2112__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2112__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2112__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2112__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2113__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2113__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2113__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2113__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2113__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2113__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2113__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2114__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2114__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2114__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2115__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2115__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2115__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2116__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2116__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__2116__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2116__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2116__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__2116__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2117__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2117__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2117__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2117__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2117__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2117__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2117__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2118__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2118__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2118__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2118__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2118__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2118__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2118__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2119__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2119__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2119__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2119__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2119__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2119__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2119__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2120__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2120__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2120__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2121__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2121__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__2121__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2140__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2140__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2140__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2140__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2140__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2140__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2140__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2141__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2141__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2141__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2141__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2141__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2141__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2141__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2144__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2144__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2144__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2144__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2144__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2144__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2144__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2145__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2145__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2145__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2145__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2145__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2145__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2145__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2148__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2148__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2148__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2148__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2148__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2148__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2148__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2149__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2149__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2149__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__2149__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2149__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2149__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__2149__c;
    // Body
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
        = ((0xff00000U & vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd[2U]) 
           | ((0xf0000U & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd[2U] 
                           >> 0xcU)) | ((0xff00U & 
                                         (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd[3U] 
                                          << 8U)) | 
                                        (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__in_prd[3U] 
                                                  >> 8U)))));
    __Vfunc_aes_mul_gf2p2__2140__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0x10U));
    __Vfunc_aes_mul_gf2p2__2140__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__2140__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2140__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2140__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2140__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2140__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2140__d)));
    __Vfunc_aes_mul_gf2p2__2140__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2140__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2140__d)));
    __Vfunc_aes_mul_gf2p2__2140__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2140__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2140__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2140__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2140__b)));
    __Vfunc_aes_mul_gf2p2__2140__Vfuncout = __Vfunc_aes_mul_gf2p2__2140__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__2140__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2141__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0x10U));
    __Vfunc_aes_mul_gf2p2__2141__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2141__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2141__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2141__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2141__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2141__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2141__d)));
    __Vfunc_aes_mul_gf2p2__2141__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2141__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2141__d)));
    __Vfunc_aes_mul_gf2p2__2141__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2141__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2141__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2141__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2141__b)));
    __Vfunc_aes_mul_gf2p2__2141__Vfuncout = __Vfunc_aes_mul_gf2p2__2141__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__2141__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2144__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0xcU));
    __Vfunc_aes_mul_gf2p2__2144__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__2144__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2144__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2144__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2144__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2144__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2144__d)));
    __Vfunc_aes_mul_gf2p2__2144__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2144__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2144__d)));
    __Vfunc_aes_mul_gf2p2__2144__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2144__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2144__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2144__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2144__b)));
    __Vfunc_aes_mul_gf2p2__2144__Vfuncout = __Vfunc_aes_mul_gf2p2__2144__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__2144__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2145__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0xcU));
    __Vfunc_aes_mul_gf2p2__2145__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2145__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2145__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2145__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2145__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2145__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2145__d)));
    __Vfunc_aes_mul_gf2p2__2145__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2145__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2145__d)));
    __Vfunc_aes_mul_gf2p2__2145__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2145__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2145__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2145__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2145__b)));
    __Vfunc_aes_mul_gf2p2__2145__Vfuncout = __Vfunc_aes_mul_gf2p2__2145__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__2145__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2148__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__2148__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2148__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2148__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2148__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2148__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2148__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2148__d)));
    __Vfunc_aes_mul_gf2p2__2148__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2148__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2148__d)));
    __Vfunc_aes_mul_gf2p2__2148__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2148__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2148__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2148__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2148__b)));
    __Vfunc_aes_mul_gf2p2__2148__Vfuncout = __Vfunc_aes_mul_gf2p2__2148__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__2148__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2149__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__2149__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i));
    __Vfunc_aes_mul_gf2p2__2149__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2149__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2149__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2149__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2149__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2149__d)));
    __Vfunc_aes_mul_gf2p2__2149__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2149__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2149__d)));
    __Vfunc_aes_mul_gf2p2__2149__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2149__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2149__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2149__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2149__b)));
    __Vfunc_aes_mul_gf2p2__2149__Vfuncout = __Vfunc_aes_mul_gf2p2__2149__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__2149__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2110__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                  >> 0x14U));
    __Vfunc_aes_mul_gf2p4__2110__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__2111__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2110__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2111__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2110__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2111__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2111__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2111__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2111__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2111__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2111__d)));
    __Vfunc_aes_mul_gf2p2__2111__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2111__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2111__d)));
    __Vfunc_aes_mul_gf2p2__2111__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2111__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2111__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2111__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2111__b)));
    __Vfunc_aes_mul_gf2p2__2111__Vfuncout = __Vfunc_aes_mul_gf2p2__2111__f;
    __Vfunc_aes_mul_gf2p4__2110__a = __Vfunc_aes_mul_gf2p2__2111__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2112__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2110__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2110__delta)));
    __Vfunc_aes_mul_gf2p2__2112__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2110__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2110__gamma)));
    __Vfunc_aes_mul_gf2p2__2112__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2112__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2112__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2112__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2112__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2112__d)));
    __Vfunc_aes_mul_gf2p2__2112__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2112__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2112__d)));
    __Vfunc_aes_mul_gf2p2__2112__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2112__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2112__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2112__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2112__b)));
    __Vfunc_aes_mul_gf2p2__2112__Vfuncout = __Vfunc_aes_mul_gf2p2__2112__f;
    __Vfunc_aes_mul_gf2p4__2110__b = __Vfunc_aes_mul_gf2p2__2112__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2113__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2110__delta));
    __Vfunc_aes_mul_gf2p2__2113__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2110__gamma));
    __Vfunc_aes_mul_gf2p2__2113__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2113__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2113__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2113__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2113__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2113__d)));
    __Vfunc_aes_mul_gf2p2__2113__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2113__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2113__d)));
    __Vfunc_aes_mul_gf2p2__2113__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2113__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2113__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2113__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2113__b)));
    __Vfunc_aes_mul_gf2p2__2113__Vfuncout = __Vfunc_aes_mul_gf2p2__2113__f;
    __Vfunc_aes_mul_gf2p4__2110__c = __Vfunc_aes_mul_gf2p2__2113__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2114__g = __Vfunc_aes_mul_gf2p4__2110__b;
    __Vfunc_aes_scale_omega2_gf2p2__2114__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2114__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2114__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2114__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2114__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2110__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2110__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__2110__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2114__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__2115__g = __Vfunc_aes_mul_gf2p4__2110__b;
    __Vfunc_aes_scale_omega2_gf2p2__2115__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2115__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2115__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2115__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2115__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2110__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2110__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__2110__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2115__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__2110__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__2110__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__2110__Vfuncout;
    __Vfunc_aes_mul_gf2p4__2116__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                  >> 0x14U));
    __Vfunc_aes_mul_gf2p4__2116__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__2117__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2116__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2117__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__2116__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__2117__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2117__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2117__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2117__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2117__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2117__d)));
    __Vfunc_aes_mul_gf2p2__2117__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2117__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2117__d)));
    __Vfunc_aes_mul_gf2p2__2117__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2117__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2117__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2117__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2117__b)));
    __Vfunc_aes_mul_gf2p2__2117__Vfuncout = __Vfunc_aes_mul_gf2p2__2117__f;
    __Vfunc_aes_mul_gf2p4__2116__a = __Vfunc_aes_mul_gf2p2__2117__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2118__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2116__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2116__delta)));
    __Vfunc_aes_mul_gf2p2__2118__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__2116__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__2116__gamma)));
    __Vfunc_aes_mul_gf2p2__2118__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2118__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2118__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2118__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2118__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2118__d)));
    __Vfunc_aes_mul_gf2p2__2118__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2118__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2118__d)));
    __Vfunc_aes_mul_gf2p2__2118__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2118__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2118__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2118__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2118__b)));
    __Vfunc_aes_mul_gf2p2__2118__Vfuncout = __Vfunc_aes_mul_gf2p2__2118__f;
    __Vfunc_aes_mul_gf2p4__2116__b = __Vfunc_aes_mul_gf2p2__2118__Vfuncout;
    __Vfunc_aes_mul_gf2p2__2119__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2116__delta));
    __Vfunc_aes_mul_gf2p2__2119__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__2116__gamma));
    __Vfunc_aes_mul_gf2p2__2119__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__2119__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__2119__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__2119__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2119__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__2119__d)));
    __Vfunc_aes_mul_gf2p2__2119__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__2119__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__2119__d)));
    __Vfunc_aes_mul_gf2p2__2119__f = ((((IData)(__Vfunc_aes_mul_gf2p2__2119__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__2119__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__2119__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__2119__b)));
    __Vfunc_aes_mul_gf2p2__2119__Vfuncout = __Vfunc_aes_mul_gf2p2__2119__f;
    __Vfunc_aes_mul_gf2p4__2116__c = __Vfunc_aes_mul_gf2p2__2119__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__2120__g = __Vfunc_aes_mul_gf2p4__2116__b;
    __Vfunc_aes_scale_omega2_gf2p2__2120__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2120__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2120__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2120__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2120__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2116__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2116__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__2116__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2120__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__2121__g = __Vfunc_aes_mul_gf2p4__2116__b;
    __Vfunc_aes_scale_omega2_gf2p2__2121__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__2121__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__2121__g)));
    __Vfunc_aes_scale_omega2_gf2p2__2121__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__2121__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__2116__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__2116__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__2116__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__2121__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__2116__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__2116__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__2116__Vfuncout;
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0) 
            << 2U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0));
    vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__u_prim_buf_mul_abx_z0__in_i 
        = (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0) 
            << 4U) | (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0));
}
