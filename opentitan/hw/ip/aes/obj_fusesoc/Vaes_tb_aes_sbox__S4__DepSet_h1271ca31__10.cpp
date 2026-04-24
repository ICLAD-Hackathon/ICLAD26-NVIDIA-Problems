// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_sbox__S4.h"

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__51(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__51\n"); );
    // Init
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1120__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1120__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1120__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1120__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1120__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1120__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1121__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1121__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1121__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1121__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1121__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1121__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1121__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1122__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1122__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1122__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1122__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1122__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1122__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1122__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1123__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1123__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1123__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1123__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1123__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1123__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1123__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1124__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1124__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1124__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1125__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1125__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1125__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1126__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1126__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1126__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1126__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1126__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1126__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1127__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1127__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1127__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1127__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1127__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1127__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1127__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1128__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1128__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1128__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1128__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1128__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1128__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1128__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1129__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1129__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1129__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1129__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1129__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1129__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1129__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1130__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1130__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1130__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1131__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1131__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1131__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1150__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1150__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1150__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1150__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1150__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1150__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1150__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1151__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1151__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1151__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1151__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1151__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1151__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1151__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1154__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1154__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1154__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1154__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1154__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1154__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1154__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1155__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1155__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1155__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1155__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1155__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1155__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1155__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1158__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1158__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1158__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1158__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1158__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1158__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1158__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1159__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1159__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1159__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1159__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1159__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1159__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1159__c;
    // Body
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
        = ((0xff00000U & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[8U] 
                          >> 4U)) | ((0xf0000U & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[9U] 
                                                  << 0x10U)) 
                                     | ((0xff00U & 
                                         (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[9U] 
                                          << 4U)) | 
                                        (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__in_prd[9U] 
                                                  >> 0xcU)))));
    __Vfunc_aes_mul_gf2p2__1150__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0x10U));
    __Vfunc_aes_mul_gf2p2__1150__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1150__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1150__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1150__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1150__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1150__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1150__d)));
    __Vfunc_aes_mul_gf2p2__1150__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1150__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1150__d)));
    __Vfunc_aes_mul_gf2p2__1150__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1150__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1150__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1150__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1150__b)));
    __Vfunc_aes_mul_gf2p2__1150__Vfuncout = __Vfunc_aes_mul_gf2p2__1150__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1150__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1151__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0x10U));
    __Vfunc_aes_mul_gf2p2__1151__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1151__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1151__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1151__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1151__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1151__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1151__d)));
    __Vfunc_aes_mul_gf2p2__1151__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1151__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1151__d)));
    __Vfunc_aes_mul_gf2p2__1151__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1151__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1151__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1151__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1151__b)));
    __Vfunc_aes_mul_gf2p2__1151__Vfuncout = __Vfunc_aes_mul_gf2p2__1151__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1151__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1154__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1154__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1154__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1154__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1154__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1154__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1154__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1154__d)));
    __Vfunc_aes_mul_gf2p2__1154__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1154__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1154__d)));
    __Vfunc_aes_mul_gf2p2__1154__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1154__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1154__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1154__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1154__b)));
    __Vfunc_aes_mul_gf2p2__1154__Vfuncout = __Vfunc_aes_mul_gf2p2__1154__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1154__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1155__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1155__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1155__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1155__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1155__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1155__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1155__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1155__d)));
    __Vfunc_aes_mul_gf2p2__1155__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1155__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1155__d)));
    __Vfunc_aes_mul_gf2p2__1155__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1155__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1155__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1155__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1155__b)));
    __Vfunc_aes_mul_gf2p2__1155__Vfuncout = __Vfunc_aes_mul_gf2p2__1155__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1155__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1120__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                  >> 0x14U));
    __Vfunc_aes_mul_gf2p4__1120__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1121__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1120__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1121__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1120__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1121__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1121__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1121__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1121__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1121__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1121__d)));
    __Vfunc_aes_mul_gf2p2__1121__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1121__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1121__d)));
    __Vfunc_aes_mul_gf2p2__1121__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1121__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1121__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1121__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1121__b)));
    __Vfunc_aes_mul_gf2p2__1121__Vfuncout = __Vfunc_aes_mul_gf2p2__1121__f;
    __Vfunc_aes_mul_gf2p4__1120__a = __Vfunc_aes_mul_gf2p2__1121__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1122__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1120__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1120__delta)));
    __Vfunc_aes_mul_gf2p2__1122__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1120__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1120__gamma)));
    __Vfunc_aes_mul_gf2p2__1122__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1122__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1122__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1122__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1122__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1122__d)));
    __Vfunc_aes_mul_gf2p2__1122__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1122__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1122__d)));
    __Vfunc_aes_mul_gf2p2__1122__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1122__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1122__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1122__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1122__b)));
    __Vfunc_aes_mul_gf2p2__1122__Vfuncout = __Vfunc_aes_mul_gf2p2__1122__f;
    __Vfunc_aes_mul_gf2p4__1120__b = __Vfunc_aes_mul_gf2p2__1122__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1123__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1120__delta));
    __Vfunc_aes_mul_gf2p2__1123__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1120__gamma));
    __Vfunc_aes_mul_gf2p2__1123__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1123__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1123__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1123__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1123__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1123__d)));
    __Vfunc_aes_mul_gf2p2__1123__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1123__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1123__d)));
    __Vfunc_aes_mul_gf2p2__1123__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1123__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1123__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1123__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1123__b)));
    __Vfunc_aes_mul_gf2p2__1123__Vfuncout = __Vfunc_aes_mul_gf2p2__1123__f;
    __Vfunc_aes_mul_gf2p4__1120__c = __Vfunc_aes_mul_gf2p2__1123__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1124__g = __Vfunc_aes_mul_gf2p4__1120__b;
    __Vfunc_aes_scale_omega2_gf2p2__1124__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1124__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1124__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1124__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1124__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1120__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1120__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1120__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1124__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1125__g = __Vfunc_aes_mul_gf2p4__1120__b;
    __Vfunc_aes_scale_omega2_gf2p2__1125__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1125__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1125__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1125__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1125__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1120__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1120__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1120__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1125__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1120__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1120__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p4__1120__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1126__delta = (0xfU & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                                  >> 0x14U));
    __Vfunc_aes_mul_gf2p4__1126__gamma = (0xfU & ((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1127__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1126__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1127__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1126__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1127__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1127__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1127__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1127__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1127__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1127__d)));
    __Vfunc_aes_mul_gf2p2__1127__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1127__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1127__d)));
    __Vfunc_aes_mul_gf2p2__1127__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1127__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1127__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1127__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1127__b)));
    __Vfunc_aes_mul_gf2p2__1127__Vfuncout = __Vfunc_aes_mul_gf2p2__1127__f;
    __Vfunc_aes_mul_gf2p4__1126__a = __Vfunc_aes_mul_gf2p2__1127__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1128__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1126__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1126__delta)));
    __Vfunc_aes_mul_gf2p2__1128__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1126__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1126__gamma)));
    __Vfunc_aes_mul_gf2p2__1128__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1128__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1128__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1128__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1128__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1128__d)));
    __Vfunc_aes_mul_gf2p2__1128__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1128__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1128__d)));
    __Vfunc_aes_mul_gf2p2__1128__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1128__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1128__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1128__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1128__b)));
    __Vfunc_aes_mul_gf2p2__1128__Vfuncout = __Vfunc_aes_mul_gf2p2__1128__f;
    __Vfunc_aes_mul_gf2p4__1126__b = __Vfunc_aes_mul_gf2p2__1128__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1129__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1126__delta));
    __Vfunc_aes_mul_gf2p2__1129__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1126__gamma));
    __Vfunc_aes_mul_gf2p2__1129__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1129__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1129__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1129__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1129__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1129__d)));
    __Vfunc_aes_mul_gf2p2__1129__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1129__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1129__d)));
    __Vfunc_aes_mul_gf2p2__1129__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1129__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1129__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1129__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1129__b)));
    __Vfunc_aes_mul_gf2p2__1129__Vfuncout = __Vfunc_aes_mul_gf2p2__1129__f;
    __Vfunc_aes_mul_gf2p4__1126__c = __Vfunc_aes_mul_gf2p2__1129__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1130__g = __Vfunc_aes_mul_gf2p4__1126__b;
    __Vfunc_aes_scale_omega2_gf2p2__1130__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1130__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1130__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1130__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1130__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1126__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1126__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1126__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1130__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1131__g = __Vfunc_aes_mul_gf2p4__1126__b;
    __Vfunc_aes_scale_omega2_gf2p2__1131__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1131__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1131__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1131__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1131__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1126__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1126__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1126__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1131__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1126__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1126__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p4__1126__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1158__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1158__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1158__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1158__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1158__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1158__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1158__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1158__d)));
    __Vfunc_aes_mul_gf2p2__1158__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1158__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1158__d)));
    __Vfunc_aes_mul_gf2p2__1158__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1158__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1158__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1158__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1158__b)));
    __Vfunc_aes_mul_gf2p2__1158__Vfuncout = __Vfunc_aes_mul_gf2p2__1158__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_ax_z0 
        = __Vfunc_aes_mul_gf2p2__1158__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1159__d = (3U & (vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_prd 
                                            >> 8U));
    __Vfunc_aes_mul_gf2p2__1159__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellinp__u_prim_buf_ab_omega__in_i));
    __Vfunc_aes_mul_gf2p2__1159__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1159__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1159__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1159__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1159__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1159__d)));
    __Vfunc_aes_mul_gf2p2__1159__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1159__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1159__d)));
    __Vfunc_aes_mul_gf2p2__1159__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1159__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1159__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1159__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1159__b)));
    __Vfunc_aes_mul_gf2p2__1159__Vfuncout = __Vfunc_aes_mul_gf2p2__1159__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__mul_bx_z0 
        = __Vfunc_aes_mul_gf2p2__1159__Vfuncout;
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

VL_INLINE_OPT void Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__81(Vaes_tb_aes_sbox__S4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vaes_tb_aes_sbox__S4___sequent__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__81\n"); );
    // Init
    CData/*7:0*/ __Vfunc_aes_mvm__1100__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1100__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1100__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1101__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1101__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1101__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1102__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1102__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1102__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1103__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1103__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1103__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1104__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1104__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1104__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1105__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1105__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1105__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1106__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1106__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1106__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1107__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1107__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1107__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1108__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1108__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1108__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1109__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1109__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1109__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1110__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1110__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1110__vec_c;
    CData/*7:0*/ __Vfunc_aes_mvm__1111__Vfuncout;
    CData/*7:0*/ __Vfunc_aes_mvm__1111__vec_b;
    CData/*7:0*/ __Vfunc_aes_mvm__1111__vec_c;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1113__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1113__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1113__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1114__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1114__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1114__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1115__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1115__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1115__d;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__gamma;
    CData/*3:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__delta;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__a;
    CData/*1:0*/ __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__b;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1117__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1117__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1117__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1118__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1118__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1118__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1119__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1119__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega_gf2p2__1119__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1132__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1132__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1132__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1132__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1132__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1132__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1133__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1133__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1133__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1133__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1133__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1133__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1133__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1134__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1134__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1134__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1134__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1134__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1134__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1134__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1135__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1135__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1135__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1135__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1135__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1135__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1135__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1136__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1136__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1136__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1137__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1137__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1137__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1138__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1138__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1138__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1138__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1138__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1138__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1139__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1139__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1139__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1139__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1139__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1139__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1139__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1140__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1140__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1140__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1140__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1140__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1140__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1140__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1141__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1141__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1141__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1141__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1141__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1141__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1141__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1142__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1142__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1142__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1143__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1143__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1143__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1144__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1144__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1144__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1145__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1145__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1145__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1146__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1146__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1146__d;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1147__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1147__g;
    CData/*1:0*/ __Vfunc_aes_square_gf2p2__1147__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1152__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1152__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1152__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1152__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1152__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1152__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1152__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1153__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1153__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1153__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1153__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1153__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1153__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1153__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1156__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1156__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1156__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1156__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1156__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1156__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1156__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1157__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1157__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1157__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1157__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1157__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1157__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1157__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1160__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1160__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1160__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1160__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1160__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1160__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1160__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1161__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1161__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1161__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1161__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1161__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1161__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1161__c;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1168__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1168__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1168__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1168__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1168__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1168__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1169__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1169__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1169__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1169__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1169__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1169__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1169__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1170__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1170__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1170__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1170__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1170__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1170__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1170__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1171__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1171__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1171__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1171__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1171__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1171__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1171__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1172__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1172__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1172__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1173__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1173__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1173__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1174__Vfuncout;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1174__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1174__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1174__a;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1174__b;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p4__1174__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1175__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1175__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1175__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1175__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1175__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1175__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1175__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1176__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1176__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1176__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1176__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1176__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1176__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1176__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1177__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1177__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1177__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1177__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1177__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1177__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1177__c;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1178__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1178__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1178__d;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1179__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1179__g;
    CData/*1:0*/ __Vfunc_aes_scale_omega2_gf2p2__1179__d;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1192__gamma;
    CData/*3:0*/ __Vfunc_aes_mul_gf2p4__1192__delta;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1193__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1193__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1193__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1193__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1193__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1193__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1193__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1194__Vfuncout;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1194__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1194__d;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1194__f;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1194__a;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1194__b;
    CData/*0:0*/ __Vfunc_aes_mul_gf2p2__1194__c;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1195__g;
    CData/*1:0*/ __Vfunc_aes_mul_gf2p2__1195__d;
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
    vlSelf->__Vfunc_aes_mvm__1102__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1102__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1102__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1102__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1102__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1102__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1102__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1102__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1102__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                             [0U][2U] 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1102__vec_c = 0U;
    __Vfunc_aes_mvm__1102__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1102__vec_b)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1102__vec_b)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1102__vec_b)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1102__vec_b)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1102__vec_b)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1102__vec_b)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1102__vec_b)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1102__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1102__vec_b)))));
    __Vfunc_aes_mvm__1102__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1102__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1102__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1102__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1102__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1102__Vfuncout = __Vfunc_aes_mvm__1102__vec_c;
    vlSelf->__Vfunc_aes_mvm__1101__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1101__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__1101__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__1101__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__1101__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__1101__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1101__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__1101__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__1101__vec_b = (0xffU & (0x63U 
                                             ^ ((vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                 [0U][2U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                                   [0U][2U] 
                                                   >> 0x10U))));
    __Vfunc_aes_mvm__1101__vec_c = 0U;
    __Vfunc_aes_mvm__1101__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1101__vec_b)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1101__vec_b)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1101__vec_b)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1101__vec_b)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1101__vec_b)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1101__vec_b)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1101__vec_b)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1101__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1101__vec_b)))));
    __Vfunc_aes_mvm__1101__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1101__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1101__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1101__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1101__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1101__Vfuncout = __Vfunc_aes_mvm__1101__vec_c;
    vlSelf->__Vfunc_aes_mvm__1100__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1100__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1100__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1100__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1100__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1100__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1100__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1100__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1100__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                             [0U][2U] 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1100__vec_c = 0U;
    __Vfunc_aes_mvm__1100__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1100__vec_b)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1100__vec_b)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1100__vec_b)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1100__vec_b)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1100__vec_b)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1100__vec_b)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1100__vec_b)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1100__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1100__vec_b)))));
    __Vfunc_aes_mvm__1100__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1100__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1100__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1100__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1100__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1100__Vfuncout = __Vfunc_aes_mvm__1100__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__1100__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__1101__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__1102__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__1105__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1105__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1105__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1105__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1105__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1105__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1105__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1105__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1105__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                             [1U][2U] 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1105__vec_c = 0U;
    __Vfunc_aes_mvm__1105__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1105__vec_b)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1105__vec_b)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1105__vec_b)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1105__vec_b)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1105__vec_b)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1105__vec_b)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1105__vec_b)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1105__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1105__vec_b)))));
    __Vfunc_aes_mvm__1105__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1105__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1105__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1105__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1105__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1105__Vfuncout = __Vfunc_aes_mvm__1105__vec_c;
    vlSelf->__Vfunc_aes_mvm__1104__mat_a[0U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1104__mat_a[1U] = 0x79U;
    vlSelf->__Vfunc_aes_mvm__1104__mat_a[2U] = 5U;
    vlSelf->__Vfunc_aes_mvm__1104__mat_a[3U] = 0xebU;
    vlSelf->__Vfunc_aes_mvm__1104__mat_a[4U] = 0x12U;
    vlSelf->__Vfunc_aes_mvm__1104__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1104__mat_a[6U] = 0x51U;
    vlSelf->__Vfunc_aes_mvm__1104__mat_a[7U] = 0x53U;
    __Vfunc_aes_mvm__1104__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                             [1U][2U] 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1104__vec_c = 0U;
    __Vfunc_aes_mvm__1104__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1104__vec_b)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1104__vec_b)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1104__vec_b)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1104__vec_b)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1104__vec_b)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1104__vec_b)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1104__vec_b)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1104__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1104__vec_b)))));
    __Vfunc_aes_mvm__1104__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1104__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1104__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1104__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1104__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1104__Vfuncout = __Vfunc_aes_mvm__1104__vec_c;
    vlSelf->__Vfunc_aes_mvm__1103__mat_a[0U] = 0x98U;
    vlSelf->__Vfunc_aes_mvm__1103__mat_a[1U] = 0xf3U;
    vlSelf->__Vfunc_aes_mvm__1103__mat_a[2U] = 0xf2U;
    vlSelf->__Vfunc_aes_mvm__1103__mat_a[3U] = 0x48U;
    vlSelf->__Vfunc_aes_mvm__1103__mat_a[4U] = 9U;
    vlSelf->__Vfunc_aes_mvm__1103__mat_a[5U] = 0x81U;
    vlSelf->__Vfunc_aes_mvm__1103__mat_a[6U] = 0xa9U;
    vlSelf->__Vfunc_aes_mvm__1103__mat_a[7U] = 0xffU;
    __Vfunc_aes_mvm__1103__vec_b = (0xffU & (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__state_q
                                             [1U][2U] 
                                             >> 0x10U));
    __Vfunc_aes_mvm__1103__vec_c = 0U;
    __Vfunc_aes_mvm__1103__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1103__vec_b)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1103__vec_b)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1103__vec_b)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1103__vec_b)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1103__vec_b)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1103__vec_b)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1103__vec_b)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1103__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1103__vec_b)))));
    __Vfunc_aes_mvm__1103__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1103__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1103__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1103__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1103__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1103__Vfuncout = __Vfunc_aes_mvm__1103__vec_c;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x 
        = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
            ? (IData)(__Vfunc_aes_mvm__1103__Vfuncout)
            : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                ? (IData)(__Vfunc_aes_mvm__1104__Vfuncout)
                : (IData)(__Vfunc_aes_mvm__1105__Vfuncout)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_data_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1112__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1112__gamma)));
    __Vfunc_aes_square_gf2p2__1113__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1112__gamma));
    __Vfunc_aes_square_gf2p2__1113__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1113__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1113__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1113__Vfuncout = __Vfunc_aes_square_gf2p2__1113__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__b = __Vfunc_aes_square_gf2p2__1113__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__1115__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__b;
    __Vfunc_aes_scale_omega_gf2p2__1115__d = ((2U & 
                                               (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__1115__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_aes_scale_omega_gf2p2__1115__g) 
                                                    >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__1115__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__1115__d;
    __Vfunc_aes_square_gf2p2__1114__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__a;
    __Vfunc_aes_square_gf2p2__1114__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1114__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1114__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1114__Vfuncout = __Vfunc_aes_square_gf2p2__1114__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__1114__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__1115__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__a_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1112__Vfuncout;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__gamma 
        = (0xfU & (((IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x) 
                    >> 4U) ^ (IData)(vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__in_mask_basis_x)));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__a = 
        (3U & (((IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1116__gamma) 
                >> 2U) ^ (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1116__gamma)));
    __Vfunc_aes_square_gf2p2__1117__g = (3U & (IData)(__Vfunc_aes_square_scale_gf2p4_gf2p2__1116__gamma));
    __Vfunc_aes_square_gf2p2__1117__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1117__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1117__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1117__Vfuncout = __Vfunc_aes_square_gf2p2__1117__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__b = __Vfunc_aes_square_gf2p2__1117__Vfuncout;
    __Vfunc_aes_scale_omega_gf2p2__1119__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__b;
    __Vfunc_aes_scale_omega_gf2p2__1119__d = ((2U & 
                                               (VL_REDXOR_2(__Vfunc_aes_scale_omega_gf2p2__1119__g) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(__Vfunc_aes_scale_omega_gf2p2__1119__g) 
                                                    >> 1U)));
    __Vfunc_aes_scale_omega_gf2p2__1119__Vfuncout = __Vfunc_aes_scale_omega_gf2p2__1119__d;
    __Vfunc_aes_square_gf2p2__1118__g = __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__a;
    __Vfunc_aes_square_gf2p2__1118__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1118__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1118__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1118__Vfuncout = __Vfunc_aes_square_gf2p2__1118__d;
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__delta 
        = (((IData)(__Vfunc_aes_square_gf2p2__1118__Vfuncout) 
            << 2U) | (IData)(__Vfunc_aes_scale_omega_gf2p2__1119__Vfuncout));
    __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__Vfuncout 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__delta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_y_ss_d 
        = __Vfunc_aes_square_scale_gf2p4_gf2p2__1116__Vfuncout;
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
    __Vfunc_aes_mul_gf2p4__1132__delta = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p4__1132__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1133__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1132__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1133__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1132__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1133__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1133__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1133__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1133__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1133__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1133__d)));
    __Vfunc_aes_mul_gf2p2__1133__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1133__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1133__d)));
    __Vfunc_aes_mul_gf2p2__1133__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1133__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1133__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1133__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1133__b)));
    __Vfunc_aes_mul_gf2p2__1133__Vfuncout = __Vfunc_aes_mul_gf2p2__1133__f;
    __Vfunc_aes_mul_gf2p4__1132__a = __Vfunc_aes_mul_gf2p2__1133__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1134__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1132__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1132__delta)));
    __Vfunc_aes_mul_gf2p2__1134__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1132__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1132__gamma)));
    __Vfunc_aes_mul_gf2p2__1134__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1134__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1134__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1134__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1134__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1134__d)));
    __Vfunc_aes_mul_gf2p2__1134__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1134__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1134__d)));
    __Vfunc_aes_mul_gf2p2__1134__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1134__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1134__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1134__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1134__b)));
    __Vfunc_aes_mul_gf2p2__1134__Vfuncout = __Vfunc_aes_mul_gf2p2__1134__f;
    __Vfunc_aes_mul_gf2p4__1132__b = __Vfunc_aes_mul_gf2p2__1134__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1135__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1132__delta));
    __Vfunc_aes_mul_gf2p2__1135__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1132__gamma));
    __Vfunc_aes_mul_gf2p2__1135__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1135__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1135__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1135__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1135__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1135__d)));
    __Vfunc_aes_mul_gf2p2__1135__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1135__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1135__d)));
    __Vfunc_aes_mul_gf2p2__1135__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1135__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1135__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1135__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1135__b)));
    __Vfunc_aes_mul_gf2p2__1135__Vfuncout = __Vfunc_aes_mul_gf2p2__1135__f;
    __Vfunc_aes_mul_gf2p4__1132__c = __Vfunc_aes_mul_gf2p2__1135__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1136__g = __Vfunc_aes_mul_gf2p4__1132__b;
    __Vfunc_aes_scale_omega2_gf2p2__1136__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1136__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1136__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1136__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1136__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1132__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1132__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1132__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1136__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1137__g = __Vfunc_aes_mul_gf2p4__1132__b;
    __Vfunc_aes_scale_omega2_gf2p2__1137__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1137__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1137__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1137__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1137__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1132__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1132__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1132__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1137__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1132__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1132__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p4__1132__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1138__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p4__1138__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__gen_prim_flop_ab_y10__DOT__u_prim_flop_ab_y10__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1139__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1138__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1139__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1138__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1139__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1139__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1139__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1139__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1139__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1139__d)));
    __Vfunc_aes_mul_gf2p2__1139__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1139__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1139__d)));
    __Vfunc_aes_mul_gf2p2__1139__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1139__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1139__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1139__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1139__b)));
    __Vfunc_aes_mul_gf2p2__1139__Vfuncout = __Vfunc_aes_mul_gf2p2__1139__f;
    __Vfunc_aes_mul_gf2p4__1138__a = __Vfunc_aes_mul_gf2p2__1139__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1140__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1138__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1138__delta)));
    __Vfunc_aes_mul_gf2p2__1140__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1138__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1138__gamma)));
    __Vfunc_aes_mul_gf2p2__1140__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1140__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1140__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1140__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1140__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1140__d)));
    __Vfunc_aes_mul_gf2p2__1140__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1140__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1140__d)));
    __Vfunc_aes_mul_gf2p2__1140__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1140__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1140__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1140__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1140__b)));
    __Vfunc_aes_mul_gf2p2__1140__Vfuncout = __Vfunc_aes_mul_gf2p2__1140__f;
    __Vfunc_aes_mul_gf2p4__1138__b = __Vfunc_aes_mul_gf2p2__1140__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1141__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1138__delta));
    __Vfunc_aes_mul_gf2p2__1141__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1138__gamma));
    __Vfunc_aes_mul_gf2p2__1141__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1141__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1141__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1141__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1141__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1141__d)));
    __Vfunc_aes_mul_gf2p2__1141__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1141__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1141__d)));
    __Vfunc_aes_mul_gf2p2__1141__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1141__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1141__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1141__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1141__b)));
    __Vfunc_aes_mul_gf2p2__1141__Vfuncout = __Vfunc_aes_mul_gf2p2__1141__f;
    __Vfunc_aes_mul_gf2p4__1138__c = __Vfunc_aes_mul_gf2p2__1141__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1142__g = __Vfunc_aes_mul_gf2p4__1138__b;
    __Vfunc_aes_scale_omega2_gf2p2__1142__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1142__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1142__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1142__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1142__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1138__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1138__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1138__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1142__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1143__g = __Vfunc_aes_mul_gf2p4__1138__b;
    __Vfunc_aes_scale_omega2_gf2p2__1143__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1143__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1143__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1143__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1143__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1138__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1138__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1138__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1143__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1138__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1138__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_y1_y0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p4__1138__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1156__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1156__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1156__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1156__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1156__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1156__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1156__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1156__d)));
    __Vfunc_aes_mul_gf2p2__1156__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1156__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1156__d)));
    __Vfunc_aes_mul_gf2p2__1156__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1156__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1156__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1156__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1156__b)));
    __Vfunc_aes_mul_gf2p2__1156__Vfuncout = __Vfunc_aes_mul_gf2p2__1156__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1156__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1157__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1157__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_gamma10_q__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1157__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1157__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1157__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1157__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1157__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1157__d)));
    __Vfunc_aes_mul_gf2p2__1157__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1157__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1157__d)));
    __Vfunc_aes_mul_gf2p2__1157__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1157__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1157__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1157__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1157__b)));
    __Vfunc_aes_mul_gf2p2__1157__Vfuncout = __Vfunc_aes_mul_gf2p2__1157__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma1__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1157__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1160__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1160__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1160__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1160__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1160__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1160__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1160__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1160__d)));
    __Vfunc_aes_mul_gf2p2__1160__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1160__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1160__d)));
    __Vfunc_aes_mul_gf2p2__1160__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1160__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1160__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1160__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1160__b)));
    __Vfunc_aes_mul_gf2p2__1160__Vfuncout = __Vfunc_aes_mul_gf2p2__1160__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1160__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1161__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1161__g = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__gen_prim_flop_omega_gamma10__DOT__u_prim_flop_ab_omega_buf__q_o));
    __Vfunc_aes_mul_gf2p2__1161__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1161__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1161__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1161__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1161__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1161__d)));
    __Vfunc_aes_mul_gf2p2__1161__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1161__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1161__d)));
    __Vfunc_aes_mul_gf2p2__1161__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1161__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1161__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1161__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1161__b)));
    __Vfunc_aes_mul_gf2p2__1161__Vfuncout = __Vfunc_aes_mul_gf2p2__1161__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_omega_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1161__Vfuncout;
    vlSelf->__Vfunc_aes_mvm__1111__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1111__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1111__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1111__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1111__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1111__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1111__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1111__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1111__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1111__vec_c = 0U;
    __Vfunc_aes_mvm__1111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1111__vec_b)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1111__vec_b)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1111__vec_b)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1111__vec_b)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1111__vec_b)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1111__vec_b)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1111__vec_b)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1111__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1111__vec_b)))));
    __Vfunc_aes_mvm__1111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1111__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1111__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1111__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1111__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1111__Vfuncout = __Vfunc_aes_mvm__1111__vec_c;
    vlSelf->__Vfunc_aes_mvm__1110__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__1110__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__1110__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__1110__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1110__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__1110__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__1110__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__1110__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__1110__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1110__vec_c = 0U;
    __Vfunc_aes_mvm__1110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1110__vec_b)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1110__vec_b)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1110__vec_b)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1110__vec_b)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1110__vec_b)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1110__vec_b)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1110__vec_b)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1110__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1110__vec_b)))));
    __Vfunc_aes_mvm__1110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1110__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1110__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1110__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1110__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1110__Vfuncout = __Vfunc_aes_mvm__1110__vec_c;
    vlSelf->__Vfunc_aes_mvm__1109__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1109__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1109__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1109__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1109__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1109__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1109__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1109__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1109__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_mask_basis_x;
    __Vfunc_aes_mvm__1109__vec_c = 0U;
    __Vfunc_aes_mvm__1109__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1109__vec_b)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1109__vec_b)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1109__vec_b)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1109__vec_b)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1109__vec_b)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1109__vec_b)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1109__vec_b)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1109__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1109__vec_b)))));
    __Vfunc_aes_mvm__1109__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1109__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1109__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1109__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1109__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1109__Vfuncout = __Vfunc_aes_mvm__1109__vec_c;
    vlSelf->mask_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (IData)(__Vfunc_aes_mvm__1109__Vfuncout)
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__1110__Vfuncout)
                           : (IData)(__Vfunc_aes_mvm__1111__Vfuncout)));
    vlSelf->__Vfunc_aes_mvm__1108__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1108__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1108__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1108__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1108__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1108__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1108__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1108__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1108__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1108__vec_c = 0U;
    __Vfunc_aes_mvm__1108__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1108__vec_b)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1108__vec_b)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1108__vec_b)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1108__vec_b)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1108__vec_b)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1108__vec_b)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1108__vec_b)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1108__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1108__vec_b)))));
    __Vfunc_aes_mvm__1108__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1108__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1108__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1108__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1108__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1108__Vfuncout = __Vfunc_aes_mvm__1108__vec_c;
    vlSelf->__Vfunc_aes_mvm__1107__mat_a[0U] = 0x64U;
    vlSelf->__Vfunc_aes_mvm__1107__mat_a[1U] = 0x78U;
    vlSelf->__Vfunc_aes_mvm__1107__mat_a[2U] = 0x6eU;
    vlSelf->__Vfunc_aes_mvm__1107__mat_a[3U] = 0x8cU;
    vlSelf->__Vfunc_aes_mvm__1107__mat_a[4U] = 0x68U;
    vlSelf->__Vfunc_aes_mvm__1107__mat_a[5U] = 0x29U;
    vlSelf->__Vfunc_aes_mvm__1107__mat_a[6U] = 0xdeU;
    vlSelf->__Vfunc_aes_mvm__1107__mat_a[7U] = 0x60U;
    __Vfunc_aes_mvm__1107__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1107__vec_c = 0U;
    __Vfunc_aes_mvm__1107__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1107__vec_b)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1107__vec_b)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1107__vec_b)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1107__vec_b)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1107__vec_b)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1107__vec_b)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1107__vec_b)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1107__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1107__vec_b)))));
    __Vfunc_aes_mvm__1107__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1107__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1107__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1107__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1107__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1107__Vfuncout = __Vfunc_aes_mvm__1107__vec_c;
    vlSelf->__Vfunc_aes_mvm__1106__mat_a[0U] = 0x58U;
    vlSelf->__Vfunc_aes_mvm__1106__mat_a[1U] = 0x2dU;
    vlSelf->__Vfunc_aes_mvm__1106__mat_a[2U] = 0x9eU;
    vlSelf->__Vfunc_aes_mvm__1106__mat_a[3U] = 0xbU;
    vlSelf->__Vfunc_aes_mvm__1106__mat_a[4U] = 0xdcU;
    vlSelf->__Vfunc_aes_mvm__1106__mat_a[5U] = 4U;
    vlSelf->__Vfunc_aes_mvm__1106__mat_a[6U] = 3U;
    vlSelf->__Vfunc_aes_mvm__1106__mat_a[7U] = 0x24U;
    __Vfunc_aes_mvm__1106__vec_b = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__out_data_basis_x;
    __Vfunc_aes_mvm__1106__vec_c = 0U;
    __Vfunc_aes_mvm__1106__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (IData)((((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                >> 7U) 
                                               & vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                               [0U])));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                [1U] 
                                                & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                   >> 6U)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                [2U] 
                                                & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                   >> 5U)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                [3U] 
                                                & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                   >> 4U)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                [4U] 
                                                & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                   >> 3U)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                [5U] 
                                                & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                   >> 2U)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                [6U] 
                                                & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                   >> 1U)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfeU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (1U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                [7U] 
                                                & (IData)(__Vfunc_aes_mvm__1106__vec_b)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x3fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 6U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x7fffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x1ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x3ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x7ffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (2U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                [6U] 
                                                & (IData)(__Vfunc_aes_mvm__1106__vec_b)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfdU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (2U & ((0xfffffffeU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xfffffffeU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x7fffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 5U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x1ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x3ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x7ffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [4U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (4U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                [5U] 
                                                & (IData)(__Vfunc_aes_mvm__1106__vec_b)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xfbU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (4U & ((0xfffffffcU 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xfffffffcU 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [0U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 4U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x1ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [1U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 3U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x3ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [2U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0x7ffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [3U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      >> 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (8U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                             ^ (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                [4U] 
                                                & (IData)(__Vfunc_aes_mvm__1106__vec_b)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [5U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [6U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xf7U & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (8U & ((0xfffffff8U 
                                              & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                             ^ (0xfffffff8U 
                                                & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [7U] 
                                                   & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                      << 3U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0x1ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         >> 3U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0x3ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0x7ffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x10U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [3U] 
                                                   & (IData)(__Vfunc_aes_mvm__1106__vec_b)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xefU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xfffffff0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0x3fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         >> 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0x7fffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x20U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [2U] 
                                                   & (IData)(__Vfunc_aes_mvm__1106__vec_b)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xdfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffe0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0x7fffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [0U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         >> 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x40U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [1U] 
                                                   & (IData)(__Vfunc_aes_mvm__1106__vec_b)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0xbfU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffffc0U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x80U & ((IData)(__Vfunc_aes_mvm__1106__vec_c) 
                                                ^ (
                                                   vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                   [0U] 
                                                   & (IData)(__Vfunc_aes_mvm__1106__vec_b)))));
    __Vfunc_aes_mvm__1106__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [1U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 1U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [2U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 2U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [3U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 3U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [4U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 4U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [5U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 5U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [6U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 6U))))));
    __Vfunc_aes_mvm__1106__vec_c = ((0x7fU & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (IData)(__Vfunc_aes_mvm__1106__vec_c)) 
                                                ^ (0xffffff80U 
                                                   & (vlSelf->__Vfunc_aes_mvm__1106__mat_a
                                                      [7U] 
                                                      & ((IData)(__Vfunc_aes_mvm__1106__vec_b) 
                                                         << 7U))))));
    __Vfunc_aes_mvm__1106__Vfuncout = __Vfunc_aes_mvm__1106__vec_c;
    vlSelf->data_o = ((1U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                       ? (0x63U ^ (IData)(__Vfunc_aes_mvm__1106__Vfuncout))
                       : ((2U == (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__cipher_op))
                           ? (IData)(__Vfunc_aes_mvm__1107__Vfuncout)
                           : (0x63U ^ (IData)(__Vfunc_aes_mvm__1108__Vfuncout))));
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
    __Vfunc_aes_mul_gf2p2__1152__d = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1152__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 6U));
    __Vfunc_aes_mul_gf2p2__1152__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1152__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1152__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1152__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1152__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1152__d)));
    __Vfunc_aes_mul_gf2p2__1152__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1152__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1152__d)));
    __Vfunc_aes_mul_gf2p2__1152__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1152__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1152__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1152__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1152__b)));
    __Vfunc_aes_mul_gf2p2__1152__Vfuncout = __Vfunc_aes_mul_gf2p2__1152__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__a_mul_ax_b 
        = __Vfunc_aes_mul_gf2p2__1152__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1153__d = (3U & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT____Vcellinp__gen_not_pre_dom_indep__DOT__u_prim_buf_ab_b__in_i));
    __Vfunc_aes_mul_gf2p2__1153__g = (3U & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT____Vcellout__u_prim_flop_ab_gamma10__q_o) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1153__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1153__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1153__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1153__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1153__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1153__d)));
    __Vfunc_aes_mul_gf2p2__1153__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1153__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1153__d)));
    __Vfunc_aes_mul_gf2p2__1153__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1153__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1153__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1153__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1153__b)));
    __Vfunc_aes_mul_gf2p2__1153__Vfuncout = __Vfunc_aes_mul_gf2p2__1153__f;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__u_aes_dom_mul_gamma1_gamma0__DOT__gen_not_pre_dom_indep__DOT__b_mul_bx_b 
        = __Vfunc_aes_mul_gf2p2__1153__Vfuncout;
    __Vfunc_aes_square_gf2p2__1145__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                >> 6U) 
                                               ^ ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                  >> 4U)));
    __Vfunc_aes_square_gf2p2__1145__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1145__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1145__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1145__Vfuncout = __Vfunc_aes_square_gf2p2__1145__d;
    __Vfunc_aes_scale_omega2_gf2p2__1144__g = __Vfunc_aes_square_gf2p2__1145__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1144__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1144__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1144__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1144__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1144__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__a_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1144__Vfuncout;
    __Vfunc_aes_square_gf2p2__1147__g = (3U & (((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i) 
                                                >> 2U) 
                                               ^ (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellinp__u_prim_buf_ab_gamma__in_i)));
    __Vfunc_aes_square_gf2p2__1147__d = ((2U & ((IData)(__Vfunc_aes_square_gf2p2__1147__g) 
                                                << 1U)) 
                                         | (1U & ((IData)(__Vfunc_aes_square_gf2p2__1147__g) 
                                                  >> 1U)));
    __Vfunc_aes_square_gf2p2__1147__Vfuncout = __Vfunc_aes_square_gf2p2__1147__d;
    __Vfunc_aes_scale_omega2_gf2p2__1146__g = __Vfunc_aes_square_gf2p2__1147__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1146__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1146__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1146__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1146__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1146__d;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_inverse_gf2p4__DOT__b_gamma_ss_d 
        = __Vfunc_aes_scale_omega2_gf2p2__1146__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1168__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1168__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 4U));
    __Vfunc_aes_mul_gf2p2__1169__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1168__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1169__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1168__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1169__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1169__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1169__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1169__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1169__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1169__d)));
    __Vfunc_aes_mul_gf2p2__1169__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1169__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1169__d)));
    __Vfunc_aes_mul_gf2p2__1169__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1169__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1169__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1169__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1169__b)));
    __Vfunc_aes_mul_gf2p2__1169__Vfuncout = __Vfunc_aes_mul_gf2p2__1169__f;
    __Vfunc_aes_mul_gf2p4__1168__a = __Vfunc_aes_mul_gf2p2__1169__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1170__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1168__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1168__delta)));
    __Vfunc_aes_mul_gf2p2__1170__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1168__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1168__gamma)));
    __Vfunc_aes_mul_gf2p2__1170__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1170__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1170__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1170__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1170__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1170__d)));
    __Vfunc_aes_mul_gf2p2__1170__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1170__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1170__d)));
    __Vfunc_aes_mul_gf2p2__1170__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1170__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1170__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1170__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1170__b)));
    __Vfunc_aes_mul_gf2p2__1170__Vfuncout = __Vfunc_aes_mul_gf2p2__1170__f;
    __Vfunc_aes_mul_gf2p4__1168__b = __Vfunc_aes_mul_gf2p2__1170__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1171__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1168__delta));
    __Vfunc_aes_mul_gf2p2__1171__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1168__gamma));
    __Vfunc_aes_mul_gf2p2__1171__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1171__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1171__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1171__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1171__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1171__d)));
    __Vfunc_aes_mul_gf2p2__1171__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1171__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1171__d)));
    __Vfunc_aes_mul_gf2p2__1171__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1171__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1171__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1171__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1171__b)));
    __Vfunc_aes_mul_gf2p2__1171__Vfuncout = __Vfunc_aes_mul_gf2p2__1171__f;
    __Vfunc_aes_mul_gf2p4__1168__c = __Vfunc_aes_mul_gf2p2__1171__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1172__g = __Vfunc_aes_mul_gf2p4__1168__b;
    __Vfunc_aes_scale_omega2_gf2p2__1172__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1172__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1172__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1172__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1172__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1168__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1168__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1168__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1172__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1173__g = __Vfunc_aes_mul_gf2p4__1168__b;
    __Vfunc_aes_scale_omega2_gf2p2__1173__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1173__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1173__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1173__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1173__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1168__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1168__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1168__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1173__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1168__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1168__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_bx_by_d 
        = __Vfunc_aes_mul_gf2p4__1168__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1174__delta = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p4__1174__gamma = (0xfU & ((IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o) 
                                                  >> 0xcU));
    __Vfunc_aes_mul_gf2p2__1175__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1174__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1175__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1174__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1175__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1175__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1175__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1175__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1175__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1175__d)));
    __Vfunc_aes_mul_gf2p2__1175__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1175__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1175__d)));
    __Vfunc_aes_mul_gf2p2__1175__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1175__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1175__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1175__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1175__b)));
    __Vfunc_aes_mul_gf2p2__1175__Vfuncout = __Vfunc_aes_mul_gf2p2__1175__f;
    __Vfunc_aes_mul_gf2p4__1174__a = __Vfunc_aes_mul_gf2p2__1175__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1176__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1174__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1174__delta)));
    __Vfunc_aes_mul_gf2p2__1176__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1174__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1174__gamma)));
    __Vfunc_aes_mul_gf2p2__1176__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1176__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1176__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1176__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1176__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1176__d)));
    __Vfunc_aes_mul_gf2p2__1176__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1176__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1176__d)));
    __Vfunc_aes_mul_gf2p2__1176__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1176__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1176__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1176__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1176__b)));
    __Vfunc_aes_mul_gf2p2__1176__Vfuncout = __Vfunc_aes_mul_gf2p2__1176__f;
    __Vfunc_aes_mul_gf2p4__1174__b = __Vfunc_aes_mul_gf2p2__1176__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1177__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1174__delta));
    __Vfunc_aes_mul_gf2p2__1177__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1174__gamma));
    __Vfunc_aes_mul_gf2p2__1177__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1177__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1177__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1177__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1177__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1177__d)));
    __Vfunc_aes_mul_gf2p2__1177__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1177__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1177__d)));
    __Vfunc_aes_mul_gf2p2__1177__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1177__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1177__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1177__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1177__b)));
    __Vfunc_aes_mul_gf2p2__1177__Vfuncout = __Vfunc_aes_mul_gf2p2__1177__f;
    __Vfunc_aes_mul_gf2p4__1174__c = __Vfunc_aes_mul_gf2p2__1177__Vfuncout;
    __Vfunc_aes_scale_omega2_gf2p2__1178__g = __Vfunc_aes_mul_gf2p4__1174__b;
    __Vfunc_aes_scale_omega2_gf2p2__1178__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1178__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1178__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1178__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1178__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1174__theta = ((3U 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1174__theta)) 
                                                  | (((IData)(__Vfunc_aes_mul_gf2p4__1174__a) 
                                                      ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1178__Vfuncout)) 
                                                     << 2U));
    __Vfunc_aes_scale_omega2_gf2p2__1179__g = __Vfunc_aes_mul_gf2p4__1174__b;
    __Vfunc_aes_scale_omega2_gf2p2__1179__d = ((2U 
                                                & ((IData)(__Vfunc_aes_scale_omega2_gf2p2__1179__g) 
                                                   << 1U)) 
                                               | (1U 
                                                  & VL_REDXOR_2(__Vfunc_aes_scale_omega2_gf2p2__1179__g)));
    __Vfunc_aes_scale_omega2_gf2p2__1179__Vfuncout 
        = __Vfunc_aes_scale_omega2_gf2p2__1179__d;
    vlSelf->__Vfunc_aes_mul_gf2p4__1174__theta = ((0xcU 
                                                   & (IData)(vlSelf->__Vfunc_aes_mul_gf2p4__1174__theta)) 
                                                  | ((IData)(__Vfunc_aes_mul_gf2p4__1174__c) 
                                                     ^ (IData)(__Vfunc_aes_scale_omega2_gf2p2__1179__Vfuncout)));
    __Vfunc_aes_mul_gf2p4__1174__Vfuncout = vlSelf->__Vfunc_aes_mul_gf2p4__1174__theta;
    vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__u_aes_dom_mul_theta_y1__DOT__mul_ax_by 
        = __Vfunc_aes_mul_gf2p4__1174__Vfuncout;
    __Vfunc_aes_mul_gf2p4__1192__delta = (0xfU & (IData)(vlSelf->gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT____Vcellout__u_prim_flop_ab_y10_qqq__q_o));
    __Vfunc_aes_mul_gf2p4__1192__gamma = vlSelf->__PVT__gen_sbox_masked__DOT__gen_sbox_dom__DOT__u_aes_sbox__DOT__u_aes_dom_inverse_gf2p8__DOT__b_theta;
    __Vfunc_aes_mul_gf2p2__1193__d = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1192__delta) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1193__g = (3U & ((IData)(__Vfunc_aes_mul_gf2p4__1192__gamma) 
                                            >> 2U));
    __Vfunc_aes_mul_gf2p2__1193__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1193__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1193__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1193__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1193__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1193__d)));
    __Vfunc_aes_mul_gf2p2__1193__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1193__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1193__d)));
    __Vfunc_aes_mul_gf2p2__1193__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1193__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1193__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1193__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1193__b)));
    __Vfunc_aes_mul_gf2p2__1193__Vfuncout = __Vfunc_aes_mul_gf2p2__1193__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1192__a = __Vfunc_aes_mul_gf2p2__1193__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1194__d = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1192__delta) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1192__delta)));
    __Vfunc_aes_mul_gf2p2__1194__g = (3U & (((IData)(__Vfunc_aes_mul_gf2p4__1192__gamma) 
                                             >> 2U) 
                                            ^ (IData)(__Vfunc_aes_mul_gf2p4__1192__gamma)));
    __Vfunc_aes_mul_gf2p2__1194__a = (1U & (((IData)(__Vfunc_aes_mul_gf2p2__1194__g) 
                                             & (IData)(__Vfunc_aes_mul_gf2p2__1194__d)) 
                                            >> 1U));
    __Vfunc_aes_mul_gf2p2__1194__b = (1U & (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1194__g) 
                                            & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1194__d)));
    __Vfunc_aes_mul_gf2p2__1194__c = (1U & ((IData)(__Vfunc_aes_mul_gf2p2__1194__g) 
                                            & (IData)(__Vfunc_aes_mul_gf2p2__1194__d)));
    __Vfunc_aes_mul_gf2p2__1194__f = ((((IData)(__Vfunc_aes_mul_gf2p2__1194__a) 
                                        ^ (IData)(__Vfunc_aes_mul_gf2p2__1194__b)) 
                                       << 1U) | ((IData)(__Vfunc_aes_mul_gf2p2__1194__c) 
                                                 ^ (IData)(__Vfunc_aes_mul_gf2p2__1194__b)));
    __Vfunc_aes_mul_gf2p2__1194__Vfuncout = __Vfunc_aes_mul_gf2p2__1194__f;
    vlSelf->__Vfunc_aes_mul_gf2p4__1192__b = __Vfunc_aes_mul_gf2p2__1194__Vfuncout;
    __Vfunc_aes_mul_gf2p2__1195__d = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1192__delta));
    __Vfunc_aes_mul_gf2p2__1195__g = (3U & (IData)(__Vfunc_aes_mul_gf2p4__1192__gamma));
    vlSelf->__Vfunc_aes_mul_gf2p2__1195__a = (1U & 
                                              (((IData)(__Vfunc_aes_mul_gf2p2__1195__g) 
                                                & (IData)(__Vfunc_aes_mul_gf2p2__1195__d)) 
                                               >> 1U));
    vlSelf->__Vfunc_aes_mul_gf2p2__1195__b = (1U & 
                                              (VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1195__g) 
                                               & VL_REDXOR_2(__Vfunc_aes_mul_gf2p2__1195__d)));
    vlSelf->__Vfunc_aes_mul_gf2p2__1195__c = (1U & 
                                              ((IData)(__Vfunc_aes_mul_gf2p2__1195__g) 
                                               & (IData)(__Vfunc_aes_mul_gf2p2__1195__d)));
}
